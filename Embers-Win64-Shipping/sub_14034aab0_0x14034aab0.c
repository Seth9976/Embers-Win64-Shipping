// 函数: sub_14034aab0
// 地址: 0x14034aab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg16[0].o
int128_t var_68 = arg15[0].o
int128_t var_78 = arg14[0].o
int128_t var_88 = arg13[0].o
int128_t var_98 = arg12[0].o
int128_t var_a8 = arg11[0].o
int128_t var_b8 = arg10[0].o
int128_t var_c8 = arg9[0].o
int128_t var_d8 = arg8[0].o
int128_t var_e8 = arg7[0].o
int32_t rdx_4 = ((arg19 s>> 0x1f u>> 0x1d) + arg19) & 0xfffffff8
float zmm0[0x8]
zmm0[0].o = zx.o(0)
float var_940[0x8] = zmm0
int32_t var_960[0x8] = zmm0
uint32_t var_980[0x8] = zmm0
float var_9a0[0x8] = zmm0
int32_t var_9c0[0x8] = zmm0
int32_t var_9e0[0x8] = zmm0
uint8_t var_920[0x8] = 0
uint64_t r11 = 0
int32_t var_c40[0x8]
float var_c20[0x8]
int32_t var_c00[0x8]
float var_be0[0x8]
int32_t var_bc0[0x8]
float var_ba0[0x8]
float var_b80[0x8]
int32_t var_b60[0x8]
float var_b40[0x8]
int32_t var_b20[0x8]
float var_b00[0x8]
int32_t var_ae0[0x8]
float var_ac0[0x8]
float var_aa0[0x8]
float var_a80[0x8]
float var_a60[0x8]
int32_t zmm1[0x8]
int32_t zmm2[0x8]
int32_t zmm5[0x8]

if (rdx_4 s> 0)
    int32_t var_6c0_1[0x8] = _mm256_broadcast_ss(9.80908925e-45f)
    arg13 = __vpbroadcastd_ymmqq_memd(0x1c)
    arg10 = _mm256_cmpeq_epi32(arg10, arg10)
    arg11 = __vpbroadcastd_ymmqq_memd(4)
    arg12 = __vpbroadcastd_ymmqq_memd(8)
    arg14 = __vpbroadcastd_ymmqq_memd(0xc)
    arg15 = __vpbroadcastd_ymmqq_memd(0x10)
    arg16 = __vpbroadcastd_ymmqq_memd(0x14)
    zmm1 = __vpbroadcastd_ymmqq_memd(0x18)
    int32_t var_840_1[0x8] = zmm1
    zmm5[0].o = zx.o(0)
    int32_t var_780_1[0x8] = arg13
    int32_t var_7a0_1[0x8] = arg11
    int32_t var_7c0_1[0x8] = arg12
    int32_t var_7e0_1[0x8] = arg14
    float var_800_1[0x8] = arg15
    float var_820_1[0x8] = arg16
    
    while (true)
        zmm1[0].o = zx.o(r11.d)
        zmm1 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm1[0]), data_142fc93a0)
        zmm2 = __vpmulld_ymmqq_ymmqq_memqq(zmm1, var_6c0_1)
        arg5 = _mm256_cmpeq_epi32(arg5, arg5)
        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
        int32_t temp0_24
        int32_t temp1_1
        temp0_24, temp1_1 = _mm256_i32gather_ps(arg7, *(arg4 + (zmm2[0].q << 2)), arg5)
        arg7 = temp0_24
        arg5 = temp1_1
        zmm2 = _mm256_mullo_epi32(zmm1, arg13)
        zmm1 = _mm256_add_epi32(zmm2, arg11)
        arg5 = _mm256_cmpeq_epi32(arg5, arg5)
        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        int32_t temp0_29
        int32_t temp1_2
        temp0_29, temp1_2 = _mm256_i32gather_ps(arg8, *(arg4 + zmm1[0].q), arg5)
        arg8 = temp0_29
        arg5 = temp1_2
        zmm1 = _mm256_add_epi32(zmm2, arg12)
        arg5 = _mm256_cmpeq_epi32(arg5, arg5)
        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
        int32_t temp0_33
        int32_t temp1_3
        temp0_33, temp1_3 = _mm256_i32gather_ps(arg9, *(arg4 + zmm1[0].q), arg5)
        arg9 = temp0_33
        arg5 = temp1_3
        zmm1 = _mm256_add_epi32(zmm2, arg14)
        arg5 = _mm256_cmpeq_epi32(arg5, arg5)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        int32_t temp0_37
        int32_t temp1_4
        temp0_37, temp1_4 = _mm256_i32gather_ps(arg6, *(arg4 + zmm1[0].q), arg5)
        arg6 = temp0_37
        arg5 = temp1_4
        float var_d40_1[0x8] = arg6
        zmm1 = _mm256_add_epi32(zmm2, arg15)
        arg5 = _mm256_cmpeq_epi32(arg5, arg5)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        int32_t temp0_41
        int32_t temp1_5
        temp0_41, temp1_5 = _mm256_i32gather_ps(arg6, *(arg4 + zmm1[0].q), arg5)
        arg6 = temp0_41
        float var_d60_1[0x8] = arg6
        arg5 = _mm256_add_epi32(zmm2, arg16)
        arg6 = _mm256_cmpeq_epi32(arg6, arg6)
        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        int32_t temp0_45
        int32_t temp1_6
        temp0_45, temp1_6 = _mm256_i32gather_ps(zmm1, *(arg4 + arg5[0].q), arg6)
        zmm1 = temp0_45
        arg6 = temp1_6
        int32_t var_860_1[0x8] = zmm1
        zmm2 = __vpaddd_ymmqq_ymmqq_memqq(zmm2, var_840_1)
        int64_t r13_1 = sx.q(zmm2[0])
        int32_t temp0_47 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)
        int64_t rbx_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
        int64_t r10_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
        int64_t rdx_5 = sx.q(zmm2[0])
        int32_t temp0_51 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1)
        int64_t r15_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
        int32_t temp0_53 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3)
        int64_t rdi_6 = sx.q((r11 << 2).d)
        zmm2 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg10, *(arg1 + rdi_6)) ^ arg10
        arg5[0].o = _mm256_extracti128_si256(zmm2, 1)
        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
        arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, arg4[r13_1], 0)
        arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, arg4[sx.q(temp0_47)], 2)
        arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, arg4[rbx_2], 4)
        arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, arg4[r10_1], 6)
        arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, arg4[rdx_5], 8)
        arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, arg4[sx.q(temp0_51)], 0xa)
        arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, arg4[r15_2], 0xc)
        arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, arg4[sx.q(temp0_53)], 0xe)
        arg5[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
        zmm1[0].o = arg5[0].o & not.o(zmm2[0].o)
        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
        char temp0_67 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o)
        
        if (temp0_67 != 0)
            int128_t var_6e0
            var_6e0.32 = arg9
            int32_t var_8a0_1[0x8] = arg8
            float var_880_1[0x8] = arg7
            int128_t var_8e0 = zmm1[0].o
            arg7 = _mm256_cvtepi16_epi32(zmm1[0].o)
            zmm5 = _mm256_slli_epi32(*(arg2 + rdi_6), 6)
            zmm1[0].o = zx.o(0)
            int32_t temp0_70
            int32_t temp1_7
            temp0_70, temp1_7 = _mm256_i32gather_ps(zmm1, *(arg3 + zmm5[0].q), arg7)
            zmm2 = temp1_7
            int32_t var_a00_1[0x8] = temp0_70
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            int32_t temp0_72
            int32_t temp1_8
            temp0_72, temp1_8 = _mm256_i32gather_ps(zmm2, *(arg3 + (zmm5 | arg11)[0].q), arg7)
            zmm1 = temp1_8
            int32_t var_a20_1[0x8] = temp0_72
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            int32_t temp0_74
            int32_t temp1_9
            temp0_74, temp1_9 = _mm256_i32gather_ps(zmm1, *(arg3 + (zmm5 | arg12)[0].q), arg7)
            zmm1 = temp0_74
            arg8 = temp1_9
            int32_t var_a40_1[0x8] = zmm1
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            int32_t temp0_76
            int32_t temp1_10
            temp0_76, temp1_10 = _mm256_i32gather_ps(zmm1, *(arg3 + (zmm5 | arg14)[0].q), arg7)
            arg9 = temp1_10
            int32_t var_900_1[0x8] = temp0_76
            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
            int32_t temp0_78
            int32_t temp1_11
            temp0_78, temp1_11 = _mm256_i32gather_ps(arg9, *(arg3 + (zmm5 | arg15)[0].q), arg7)
            arg9 = temp0_78
            arg10 = temp1_11
            arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
            int32_t temp0_80
            int32_t temp1_12
            temp0_80, temp1_12 = _mm256_i32gather_ps(arg10, *(arg3 + (zmm5 | arg16)[0].q), arg7)
            arg10 = temp0_80
            arg11 = temp1_12
            arg6 = __vorps_ymmqq_ymmqq_memqq(zmm5, var_840_1)
            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
            int32_t temp0_83
            int32_t temp1_13
            temp0_83, temp1_13 = _mm256_i32gather_ps(arg11, *(arg3 + arg6[0].q), arg7)
            arg11 = temp0_83
            arg14[0].o = zx.o(0)
            int32_t temp0_84
            int32_t temp1_14
            temp0_84, temp1_14 = _mm256_i32gather_ps(arg14, *(arg3 + (zmm5 | arg13)[0].q), arg7)
            arg12 = temp1_14
            arg6 = _mm256_or_ps(zmm5, _mm256_broadcast_ss(4.48415509e-44f))
            arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            int32_t temp0_88
            int32_t temp1_15
            temp0_88, temp1_15 = _mm256_i32gather_ps(arg12, *(arg3 + arg6[0].q), arg7)
            arg6 = _mm256_broadcast_ss(5.04467447e-44f)
            arg13 = _mm256_or_ps(zmm5, arg6)
            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
            int32_t temp0_92
            int32_t temp1_16
            temp0_92, temp1_16 = _mm256_i32gather_ps(arg8, *(arg3 + arg13[0].q), arg7)
            arg8 = temp0_92
            arg13 = _mm256_broadcast_ss(5.60519386e-44f)
            arg16 = _mm256_or_ps(zmm5, arg13)
            arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
            int32_t temp0_96
            int32_t temp1_17
            temp0_96, temp1_17 = _mm256_i32gather_ps(arg13, *(arg3 + arg16[0].q), arg7)
            arg15 = _mm256_or_ps(zmm5, _mm256_broadcast_ss(6.16571324e-44f))
            arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
            int32_t temp0_100
            int32_t temp1_18
            temp0_100, temp1_18 = _mm256_i32gather_ps(arg16, *(arg3 + arg15[0].q), arg7)
            arg16 = temp0_100
            zmm1 = _mm256_broadcast_ss(6.72623263e-44f)
            zmm2 = _mm256_or_ps(zmm5, zmm1)
            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            int32_t temp0_104
            int32_t temp1_19
            temp0_104, temp1_19 = _mm256_i32gather_ps(arg6, *(arg3 + zmm2[0].q), arg7)
            zmm2 = _mm256_or_ps(zmm5, _mm256_broadcast_ss(7.28675201e-44f))
            arg5[0].o = zx.o(0)
            int32_t temp0_107
            int32_t temp1_20
            temp0_107, temp1_20 = _mm256_i32gather_ps(arg5, *(arg3 + zmm2[0].q), arg7)
            arg5 = temp0_107
            zmm2 = _mm256_or_ps(zmm5, _mm256_broadcast_ss(7.8472714e-44f))
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            int32_t temp0_111
            int32_t temp1_21
            temp0_111, temp1_21 = _mm256_i32gather_ps(zmm1, *(arg3 + zmm2[0].q), arg7)
            arg15 = temp1_21
            zmm2 = _mm256_or_ps(zmm5, _mm256_broadcast_ss(8.40779079e-44f))
            float var_8c0_1[0x8] = arg7
            arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
            int32_t temp0_115
            int32_t temp1_22
            temp0_115, temp1_22 = _mm256_i32gather_ps(arg15, *(arg3 + zmm2[0].q), arg7)
            arg7 = temp1_22
            int32_t var_380[0x8] = var_a00_1
            int32_t var_360[0x8] = var_a20_1
            int32_t var_340[0x8] = var_a40_1
            int32_t var_320[0x8] = var_900_1
            float var_300_1[0x8] = arg9
            uint32_t var_2e0_1[0x8] = arg10
            int32_t var_2c0_1[0x8] = arg11
            int32_t var_2a0_1[0x8] = temp0_84
            int32_t var_280_1[0x8] = temp0_88
            int32_t var_260_1[0x8] = arg8
            int32_t var_240_1[0x8] = temp0_96
            float var_220_1[0x8] = arg16
            float var_200_1[0x8] = temp0_104
            int32_t var_1e0_1[0x8] = arg5
            int32_t var_1c0_1[0x8] = temp0_111
            float var_1a0_1[0x8] = temp0_115
            arg5[0].o = arg17[9]
            zmm5[0].o = arg17[0xd]
            arg7[0].o = arg17[2]
            arg8[0].o = arg17[3]
            arg9[0].o = arg17[6]
            arg10[0].o = arg17[0xa]
            arg11[0].o = arg17[0xe]
            var_900_1[0].o = arg17[7]
            arg16[0].o = arg17[0xb]
            
            for (int64_t i = 0; i != 0x200; i -= -0x80)
                zmm1 = _mm256_broadcast_ss(*arg17)
                arg6 = *(&var_380 + i)
                arg13 = *(&var_360 + i)
                arg12 = *(&var_340 + i)
                arg14 = *(&var_320 + i)
                zmm1 = _mm256_fmadd_ps(zmm1, arg6, zmm0)
                arg15 = _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[4]), arg13, zmm1)
                zmm1 = _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[8]), arg12, arg15)
                *(&var_c40 + i) = _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[0xc]), arg14, zmm1)
                zmm1 = _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[1]), arg6, zmm0)
                arg15 = _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[5]), arg13, zmm1)
                zmm1 = _mm256_fmadd_ps(_mm256_broadcastss_ps(arg5[0].o), arg12, arg15)
                *(&var_c20 + i) = _mm256_fmadd_ps(_mm256_broadcastss_ps(zmm5[0].o), arg14, zmm1)
                zmm1 = _mm256_fmadd_ps(_mm256_broadcastss_ps(arg7[0].o), arg6, zmm0)
                arg15 = _mm256_fmadd_ps(_mm256_broadcastss_ps(arg9[0].o), arg13, zmm1)
                zmm1 = _mm256_fmadd_ps(_mm256_broadcastss_ps(arg10[0].o), arg12, arg15)
                *(&var_c00 + i) = _mm256_fmadd_ps(_mm256_broadcastss_ps(arg11[0].o), arg14, zmm1)
                zmm1 = _mm256_fmadd_ps(_mm256_broadcastss_ps(arg8[0].o), arg6, zmm0)
                arg6 = _mm256_fmadd_ps(_mm256_broadcastss_ps(var_900_1[0].o), arg13, zmm1)
                zmm1 = _mm256_fmadd_ps(_mm256_broadcastss_ps(arg16[0].o), arg12, arg6)
                *(&var_be0 + i) = _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[0xf]), arg14, zmm1)
            
            arg5 = var_c40
            int32_t var_a00_2[0x8] = arg5
            arg6 = var_c20
            float var_a20_2[0x8] = arg6
            zmm1 = __vaddps_ymmqq_ymmqq_memqq(var_880_1, var_d40_1)
            zmm2 = _mm256_broadcast_ss(0.5f)
            zmm1 = _mm256_mul_ps(zmm1, zmm2)
            arg9 = _mm256_mul_ps(zmm1, arg5)
            arg10 = _mm256_mul_ps(zmm1, arg6)
            arg11 = _mm256_mul_ps(__vaddps_ymmqq_ymmqq_memqq(var_8a0_1, var_d60_1), zmm2)
            arg9 = _mm256_fmadd_ps(arg9, arg11, var_bc0)
            arg10 = _mm256_fmadd_ps(arg10, arg11, var_ba0)
            arg5 = var_c00
            int32_t var_a40_2[0x8] = arg5
            arg15 = _mm256_fmadd_ps(_mm256_mul_ps(zmm1, arg5), arg11, var_b80)
            arg11 = __vfmadd231ps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg11, var_b60), zmm1, var_be0)
            arg14 = var_6e0.32
            zmm1 = _mm256_mul_ps(_mm256_add_ps(arg14, var_860_1), zmm2)
            arg9 = _mm256_fmadd_ps(arg9, zmm1, var_b40)
            arg10 = _mm256_fmadd_ps(arg10, zmm1, var_b20)
            arg15 = _mm256_fmadd_ps(arg15, zmm1, var_b00)
            zmm1 = _mm256_fmadd_ps(zmm1, var_ae0, arg11)
            arg12 = __vaddps_ymmqq_ymmqq_memqq(arg9, var_ac0)
            float var_6a0_1[0x8] = __vaddps_ymmqq_ymmqq_memqq(arg10, var_aa0)
            arg11 = __vaddps_ymmqq_ymmqq_memqq(arg15, var_a80)
            zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_a60)
            arg9 = var_bc0
            var_c40 = arg9
            arg10 = var_ba0
            var_c20 = arg10
            var_c00 = var_b80
            var_be0 = var_b60
            float var_600_1[0x8] = var_b40
            int32_t var_5e0_1[0x8] = var_b20
            float var_5c0_1[0x8] = var_b00
            int32_t var_5a0_1[0x8] = var_ae0
            arg6 = __vsubps_ymmqq_ymmqq_memqq(var_d60_1, var_8a0_1)
            arg13 = _mm256_sub_ps(var_860_1, arg14)
            int32_t var_680_1[0x8] = arg12
            arg14 = var_6a0_1
            int32_t var_660_1[0x8] = arg14
            int32_t var_640_1[0x8] = arg11
            int32_t var_620_1[0x8] = zmm1
            zmm1 = _mm256_mul_ps(__vsubps_ymmqq_ymmqq_memqq(var_d40_1, var_880_1), zmm2)
            arg15 = __vmulps_ymmqq_ymmqq_memqq(zmm1, var_a00_2)
            arg5 = __vmulps_ymmqq_ymmqq_memqq(zmm1, var_a20_2)
            zmm1 = __vmulps_ymmqq_ymmqq_memqq(zmm1, var_a40_2)
            arg6 = _mm256_mul_ps(arg6, zmm2)
            arg7 = _mm256_mul_ps(arg6, arg9)
            arg8 = _mm256_mul_ps(arg6, arg10)
            arg6 = _mm256_mul_ps(arg6, var_b80)
            zmm5 = _mm256_broadcast_ss(nanf)
            arg7 = _mm256_add_ps(_mm256_and_ps(arg15, zmm5), _mm256_and_ps(arg7, zmm5))
            arg5 = _mm256_add_ps(_mm256_and_ps(arg5, zmm5), _mm256_and_ps(arg8, zmm5))
            zmm1 = _mm256_add_ps(_mm256_and_ps(zmm1, zmm5), _mm256_and_ps(arg6, zmm5))
            zmm2 = _mm256_mul_ps(arg13, zmm2)
            arg6 = __vmulps_ymmqq_ymmqq_memqq(zmm2, var_b40)
            arg8 = __vmulps_ymmqq_ymmqq_memqq(zmm2, var_b20)
            zmm2 = __vmulps_ymmqq_ymmqq_memqq(zmm2, var_b00)
            arg13 = _mm256_add_ps(arg7, _mm256_and_ps(arg6, zmm5))
            arg5 = _mm256_add_ps(arg5, _mm256_and_ps(arg8, zmm5))
            zmm2 = _mm256_and_ps(zmm2, zmm5)
            zmm1 = _mm256_add_ps(zmm1, zmm2)
            arg15 = _mm256_sub_ps(arg12, arg13)
            arg8 = _mm256_sub_ps(arg14, arg5)
            arg6 = _mm256_sub_ps(arg11, zmm1)
            arg16 = _mm256_add_ps(arg12, arg13)
            arg7 = _mm256_add_ps(arg14, arg5)
            arg12 = _mm256_add_ps(arg11, zmm1)
            arg14[0].o = __vpmovzxbw_xmmdq_memq(var_920)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            zmm1[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
            arg5[0].o = zmm1[0].o & not.o(var_8e0)
            zmm2[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
            zmm2[0].o = __vpsraw_xmmdq_xmmdq_immb(zmm2[0].o, 0xf)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zx.o(0))
            char temp0_214 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o)
            arg14[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
            zmm1[0].o ^= arg14[0].o
            zmm2 = _mm256_cvtepi16_epi32(zmm1[0].o)
            
            if (temp0_214 == 0)
                arg5[0].o = zx.o(0)
                arg10 = _mm256_cmpeq_epi32(arg10, arg10)
                zmm5 = __vandnps_ymmqq_ymmqq_memqq(zmm2, var_8c0_1)
                
                if (_mm256_movemask_ps(zmm5) != 0)
                label_14034b7b3:
                    zmm1 = zmm2 ^ arg10
                    var_c40 = _mm256_maskstore_ps(zmm1, arg15)
                    var_c20 = _mm256_maskstore_ps(zmm1, arg8)
                    var_c00 = _mm256_maskstore_ps(zmm1, arg6)
                    var_be0 = _mm256_maskstore_ps(zmm1, arg16)
                    var_bc0 = _mm256_maskstore_ps(zmm1, arg7)
                    var_ba0 = _mm256_maskstore_ps(zmm1, arg12)
                    char temp0_256 = _mm256_movemask_ps(zmm1)
                    
                    if ((temp0_256 & 1) == 0)
                        if ((temp0_256 & 2) != 0)
                            goto label_14034ad07
                        
                        goto label_14034b802
                    
                    var_b80[0].b = 1
                    
                    if ((temp0_256 & 2) != 0)
                    label_14034ad07:
                        var_b80[0]:1.b = 1
                        
                        if ((temp0_256 & 4) == 0)
                            goto label_14034b80c
                        
                        goto label_14034ad19
                    
                label_14034b802:
                    
                    if ((temp0_256 & 4) == 0)
                    label_14034b80c:
                        
                        if ((temp0_256 & 8) != 0)
                            goto label_14034ad2b
                        
                        goto label_14034b816
                    
                label_14034ad19:
                    var_b80[0]:2.b = 1
                    
                    if ((temp0_256 & 8) != 0)
                    label_14034ad2b:
                        var_b80[0]:3.b = 1
                        
                        if ((temp0_256 & 0x10) == 0)
                            goto label_14034b820
                        
                        goto label_14034ad3d
                    
                label_14034b816:
                    
                    if ((temp0_256 & 0x10) == 0)
                    label_14034b820:
                        
                        if ((temp0_256 & 0x20) != 0)
                            goto label_14034ad4f
                        
                        goto label_14034b82a
                    
                label_14034ad3d:
                    var_b80[1].b = 1
                    
                    if ((temp0_256 & 0x20) != 0)
                    label_14034ad4f:
                        var_b80[1]:1.b = 1
                        
                        if ((temp0_256 & 0x40) == 0)
                            goto label_14034b834
                        
                        goto label_14034ad61
                    
                label_14034b82a:
                    
                    if ((temp0_256 & 0x40) != 0)
                    label_14034ad61:
                        var_b80[1]:2.b = 1
                        
                        if (temp0_256 s< 0)
                            var_b80[1]:3.b = 1
                    else
                    label_14034b834:
                        
                        if (temp0_256 s< 0)
                            var_b80[1]:3.b = 1
                    
                    _mm256_movemask_ps(arg5 | zmm5)
            else
                var_d60_1[0].o = arg5[0].o
                var_c40 = _mm256_maskstore_ps(zmm2, _mm256_min_ps(var_9e0, arg15))
                var_c20 = _mm256_maskstore_ps(zmm2, _mm256_min_ps(var_9c0, arg8))
                var_c00 = _mm256_maskstore_ps(zmm2, _mm256_min_ps(var_9a0, arg6))
                var_be0 = _mm256_maskstore_ps(zmm2, _mm256_max_ps(var_980, arg16))
                var_bc0 = _mm256_maskstore_ps(zmm2, _mm256_max_ps(var_960, arg7))
                zmm1 = _mm256_max_ps(var_940, arg12)
                var_ba0 = _mm256_maskstore_ps(zmm2, zmm1)
                zmm1[0].o = arg14[0].o & data_142fc92e0
                zmm1[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                zmm1[0].o ^= arg14[0].o
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
                char temp0_231 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                
                if ((temp0_231 & 1) == 0)
                    if ((temp0_231 & 2) != 0)
                        goto label_14034b6f7
                    
                    goto label_14034b671
                
                var_b80[0].b = __vpextrb_memb_xmmdq_immb(arg14[0].o, 0)
                
                if ((temp0_231 & 2) != 0)
                label_14034b6f7:
                    var_b80[0]:1.b = __vpextrb_memb_xmmdq_immb(arg14[0].o, 2)
                    arg10 = _mm256_cmpeq_epi32(var_980, var_980)
                    arg15 = arg15
                    
                    if ((temp0_231 & 4) == 0)
                        goto label_14034b682
                    
                    goto label_14034b716
                
            label_14034b671:
                arg10 = _mm256_cmpeq_epi32(var_980, var_980)
                arg15 = arg15
                
                if ((temp0_231 & 4) == 0)
                label_14034b682:
                    
                    if ((temp0_231 & 8) != 0)
                        goto label_14034b72a
                    
                    goto label_14034b68b
                
            label_14034b716:
                var_b80[0]:2.b = __vpextrb_memb_xmmdq_immb(arg14[0].o, 4)
                
                if ((temp0_231 & 8) != 0)
                label_14034b72a:
                    var_b80[0]:3.b = __vpextrb_memb_xmmdq_immb(arg14[0].o, 6)
                    
                    if ((temp0_231 & 0x10) == 0)
                        goto label_14034b694
                    
                    goto label_14034b73e
                
            label_14034b68b:
                
                if ((temp0_231 & 0x10) == 0)
                label_14034b694:
                    
                    if ((temp0_231 & 0x20) != 0)
                        goto label_14034b752
                    
                    goto label_14034b69d
                
            label_14034b73e:
                var_b80[1].b = __vpextrb_memb_xmmdq_immb(arg14[0].o, 8)
                
                if ((temp0_231 & 0x20) != 0)
                label_14034b752:
                    var_b80[1]:1.b = __vpextrb_memb_xmmdq_immb(arg14[0].o, 0xa)
                    
                    if ((temp0_231 & 0x40) == 0)
                        goto label_14034b6a6
                    
                    goto label_14034b766
                
            label_14034b69d:
                
                if ((temp0_231 & 0x40) == 0)
                label_14034b6a6:
                    
                    if (temp0_231 s< 0)
                        goto label_14034b779
                    
                    goto label_14034b6ae
                
            label_14034b766:
                var_b80[1]:2.b = __vpextrb_memb_xmmdq_immb(arg14[0].o, 0xc)
                
                if (temp0_231 s>= 0)
                label_14034b6ae:
                    
                    if (temp0_67 != temp0_214)
                    label_14034b799:
                        arg5 = _mm256_srai_epi32(
                            _mm256_slli_epi32(__vpmovzxwd_ymmqq_memdq(var_d60_1[0].o), 0x1f), 0x1f)
                        zmm5 = __vandnps_ymmqq_ymmqq_memqq(zmm2, var_8c0_1)
                        
                        if (_mm256_movemask_ps(zmm5) != 0)
                            goto label_14034b7b3
                else
                label_14034b779:
                    var_b80[1]:3.b = __vpextrb_memb_xmmdq_immb(arg14[0].o, 0xe)
                    
                    if (temp0_67 != temp0_214)
                        goto label_14034b799
            
            arg9 = var_c40
            arg5 = var_c20
            arg6 = var_c00
            zmm5 = var_be0
            arg7 = var_bc0
            arg8 = var_ba0
            zmm2[0].o = __vpmovzxbw_xmmdq_memq(var_b80[0].q)
            arg13 = var_780_1
            arg11 = var_7a0_1
            arg12 = var_7c0_1
            arg14 = var_7e0_1
            arg15 = var_800_1
            arg16 = var_820_1
            zmm1 = var_8c0_1
            var_9e0 = _mm256_maskstore_ps(zmm1, arg9)
            var_9c0 = _mm256_maskstore_ps(zmm1, arg5)
            var_9a0 = _mm256_maskstore_ps(zmm1, arg6)
            var_980 = _mm256_maskstore_ps(zmm1, zmm5)
            var_960 = _mm256_maskstore_ps(zmm1, arg7)
            var_940 = _mm256_maskstore_ps(zmm1, arg8)
            
            if ((temp0_67 & 1) == 0)
                zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                
                if ((temp0_67 & 2) != 0)
                    goto label_14034ac59
                
                goto label_14034b919
            
            var_920[0] = __vpextrb_memb_xmmdq_immb(zmm2[0].o, 0)
            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
            
            if ((temp0_67 & 2) != 0)
            label_14034ac59:
                var_920[1] = __vpextrb_memb_xmmdq_immb(zmm2[0].o, 2)
                
                if ((temp0_67 & 4) == 0)
                    goto label_14034b923
                
                goto label_14034ac6e
            
        label_14034b919:
            
            if ((temp0_67 & 4) == 0)
            label_14034b923:
                
                if ((temp0_67 & 8) != 0)
                    goto label_14034ac83
                
                goto label_14034b92d
            
        label_14034ac6e:
            var_920[2] = __vpextrb_memb_xmmdq_immb(zmm2[0].o, 4)
            
            if ((temp0_67 & 8) != 0)
            label_14034ac83:
                var_920[3] = __vpextrb_memb_xmmdq_immb(zmm2[0].o, 6)
                
                if ((temp0_67 & 0x10) == 0)
                    goto label_14034b937
                
                goto label_14034ac98
            
        label_14034b92d:
            
            if ((temp0_67 & 0x10) == 0)
            label_14034b937:
                
                if ((temp0_67 & 0x20) != 0)
                    goto label_14034acad
                
                goto label_14034b941
            
        label_14034ac98:
            var_920[4] = __vpextrb_memb_xmmdq_immb(zmm2[0].o, 8)
            
            if ((temp0_67 & 0x20) != 0)
            label_14034acad:
                var_920[5] = __vpextrb_memb_xmmdq_immb(zmm2[0].o, 0xa)
                
                if ((temp0_67 & 0x40) == 0)
                    goto label_14034b94b
                
                goto label_14034acc2
            
        label_14034b941:
            
            if ((temp0_67 & 0x40) != 0)
            label_14034acc2:
                var_920[6] = __vpextrb_memb_xmmdq_immb(zmm2[0].o, 0xc)
                
                if (temp0_67 s< 0)
                label_14034acd6:
                    var_920[7] = __vpextrb_memb_xmmdq_immb(zmm2[0].o, 0xe)
                    r11 = zx.q(r11.d + 8)
                    
                    if (r11.d s>= rdx_4)
                        break
                    
                    continue
            else
            label_14034b94b:
                
                if (temp0_67 s< 0)
                    goto label_14034acd6
        
        r11 = zx.q(r11.d + 8)
        
        if (r11.d s>= rdx_4)
            break

if (r11.d s< arg19)
    zmm0[0].o = zx.o(r11.d)
    zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
    zmm1[0].o = zx.o(arg19)
    zmm1 = _mm256_broadcastd_epi32(zmm1[0])
    zmm2 = _mm256_mullo_epi32(zmm0, __vpbroadcastd_ymmqq_memd(7))
    arg11 = _mm256_cmpgt_epi32(zmm1, zmm0)
    arg5[0].o = zx.o(0)
    int32_t temp0_272
    int32_t temp1_23
    temp0_272, temp1_23 = _mm256_i32gather_ps(arg5, *(arg4 + (zmm2[0].q << 2)), arg11)
    arg5 = temp0_272
    int32_t var_d40_3[0x8] = arg5
    arg10 = __vpbroadcastd_ymmqq_memd(0x1c)
    zmm0 = _mm256_mullo_epi32(zmm0, arg10)
    arg12 = __vpbroadcastd_ymmqq_memd(4)
    zmm1 = _mm256_add_epi32(zmm0, arg12)
    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
    int32_t temp0_278
    int32_t temp1_24
    temp0_278, temp1_24 = _mm256_i32gather_ps(arg6, *(arg4 + zmm1[0].q), arg11)
    arg6 = temp0_278
    arg13 = __vpbroadcastd_ymmqq_memd(8)
    zmm1 = _mm256_add_epi32(zmm0, arg13)
    zmm5[0].o = zx.o(0)
    int32_t temp0_281
    int32_t temp1_25
    temp0_281, temp1_25 = _mm256_i32gather_ps(zmm5, *(arg4 + zmm1[0].q), arg11)
    zmm5 = temp0_281
    arg14 = __vpbroadcastd_ymmqq_memd(0xc)
    zmm1 = _mm256_add_epi32(zmm0, arg14)
    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
    int32_t temp0_285
    int32_t temp1_26
    temp0_285, temp1_26 = _mm256_i32gather_ps(arg5, *(arg4 + zmm1[0].q), arg11)
    arg5 = temp0_285
    float var_d60_2[0x8] = arg5
    arg15 = __vpbroadcastd_ymmqq_memd(0x10)
    zmm1 = _mm256_add_epi32(zmm0, arg15)
    arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
    int32_t temp0_289
    int32_t temp1_27
    temp0_289, temp1_27 = _mm256_i32gather_ps(arg8, *(arg4 + zmm1[0].q), arg11)
    arg8 = temp0_289
    arg16 = __vpbroadcastd_ymmqq_memd(0x14)
    zmm1 = _mm256_add_epi32(zmm0, arg16)
    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
    int32_t temp0_293
    int32_t temp1_28
    temp0_293, temp1_28 = _mm256_i32gather_ps(arg5, *(arg4 + zmm1[0].q), arg11)
    arg5 = temp0_293
    int32_t var_840_2[0x8] = arg5
    arg7 = __vpbroadcastd_ymmqq_memd(0x18)
    zmm0 = arg11 & _mm256_add_epi32(zmm0, arg7)
    int64_t r10_2 = sx.q(zmm0[0])
    int64_t r14_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
    int64_t r15_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
    int64_t rdi_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
    int64_t rsi_5 = sx.q(zmm0[0])
    int64_t rcx_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
    int64_t rdx_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
    int64_t rbx_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
    zmm0[0].o = zx.o(0)
    zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zx.o(0), arg4[r10_2], 0)
    zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, arg4[r14_2], 2)
    zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, arg4[r15_3], 4)
    zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, arg4[rdi_11], 6)
    zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, arg4[rsi_5], 8)
    zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, arg4[rcx_10], 0xa)
    zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, arg4[rdx_8], 0xc)
    zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, arg4[rbx_6], 0xe)
    int64_t rbx_7 = sx.q(r11.d << 2)
    zmm2 = _mm256_maskload_ps(arg11, *(arg1 + rbx_7))
    arg5 = _mm256_cmpeq_epi32(arg5, arg5)
    zmm2 = _mm256_cmpeq_epi32(zmm2, arg5) ^ arg5
    arg5[0].o = _mm256_extracti128_si256(zmm2, 1)
    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
    zmm0[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
    zmm1[0].o = _mm256_extracti128_si256(arg11, 1)
    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
    zmm0[0].o &= not.o(zmm1[0].o)
    zmm1[0].o = zmm0[0].o & zmm2[0].o
    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    char temp0_320 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
    arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
    
    if (temp0_320 != 0)
        int32_t var_8c0_2[0x8] = arg8
        int32_t var_8a0_2[0x8] = zmm5
        float var_880_2[0x8] = arg6
        int128_t var_6e0_1 = zmm1[0].o
        zmm5 = _mm256_cvtepi16_epi32(zmm1[0].o)
        zmm1 = _mm256_slli_epi32(_mm256_maskload_ps(arg11, *(arg2 + rbx_7)), 6)
        zmm0[0].o = zx.o(0)
        int32_t temp0_325
        int32_t temp1_29
        temp0_325, temp1_29 = _mm256_i32gather_ps(zmm0, *(arg3 + zmm1[0].q), zmm5)
        zmm0 = temp0_325
        float var_8e0_1[0x8] = zmm0
        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        int32_t temp0_327
        int32_t temp1_30
        temp0_327, temp1_30 = _mm256_i32gather_ps(zmm0, *(arg3 + (zmm1 | arg12)[0].q), zmm5)
        zmm0 = temp0_327
        float var_a00_3[0x8] = zmm0
        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        int32_t temp0_329
        int32_t temp1_31
        temp0_329, temp1_31 = _mm256_i32gather_ps(zmm0, *(arg3 + (zmm1 | arg13)[0].q), zmm5)
        zmm0 = temp0_329
        float var_a20_3[0x8] = zmm0
        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        int32_t temp0_331
        int32_t temp1_32
        temp0_331, temp1_32 = _mm256_i32gather_ps(zmm0, *(arg3 + (zmm1 | arg14)[0].q), zmm5)
        float var_a40_3[0x8] = temp0_331
        arg15[0].o = zx.o(0)
        int32_t temp0_332
        int32_t temp1_33
        temp0_332, temp1_33 = _mm256_i32gather_ps(arg15, *(arg3 + (zmm1 | arg15)[0].q), zmm5)
        arg15 = temp0_332
        arg16[0].o = zx.o(0)
        int32_t temp0_333
        int32_t temp1_34
        temp0_333, temp1_34 = _mm256_i32gather_ps(arg16, *(arg3 + (zmm1 | arg16)[0].q), zmm5)
        arg16 = temp0_333
        arg14[0].o = zx.o(0)
        int32_t temp0_334
        int32_t temp1_35
        temp0_334, temp1_35 = _mm256_i32gather_ps(arg14, *(arg3 + (zmm1 | arg7)[0].q), zmm5)
        arg14 = temp0_334
        arg13[0].o = zx.o(0)
        int32_t temp0_335
        int32_t temp1_36
        temp0_335, temp1_36 = _mm256_i32gather_ps(arg13, *(arg3 + (zmm1 | arg10)[0].q), zmm5)
        arg5 = _mm256_or_ps(zmm1, _mm256_broadcast_ss(4.48415509e-44f))
        arg12[0].o = zx.o(0)
        int32_t temp0_338
        int32_t temp1_37
        temp0_338, temp1_37 = _mm256_i32gather_ps(arg12, *(arg3 + arg5[0].q), zmm5)
        arg5 = _mm256_broadcast_ss(5.04467447e-44f)
        arg6 = _mm256_or_ps(zmm1, arg5)
        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
        int32_t temp0_342
        int32_t temp1_38
        temp0_342, temp1_38 = _mm256_i32gather_ps(arg11, *(arg3 + arg6[0].q), zmm5)
        arg6 = _mm256_broadcast_ss(5.60519386e-44f)
        zmm2 = _mm256_or_ps(zmm1, arg6)
        arg10[0].o = zx.o(0)
        int32_t temp0_345
        int32_t temp1_39
        temp0_345, temp1_39 = _mm256_i32gather_ps(arg10, *(arg3 + zmm2[0].q), zmm5)
        zmm0 = _mm256_or_ps(zmm1, _mm256_broadcast_ss(6.16571324e-44f))
        arg7[0].o = zx.o(0)
        int32_t temp0_348
        int32_t temp1_40
        temp0_348, temp1_40 = _mm256_i32gather_ps(arg7, *(arg3 + zmm0[0].q), zmm5)
        zmm0 = _mm256_broadcast_ss(6.72623263e-44f)
        zmm2 = _mm256_or_ps(zmm1, zmm0)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        int32_t temp0_352
        int32_t temp1_41
        temp0_352, temp1_41 = _mm256_i32gather_ps(arg6, *(arg3 + zmm2[0].q), zmm5)
        arg6 = temp0_352
        zmm2 = _mm256_or_ps(zmm1, _mm256_broadcast_ss(7.28675201e-44f))
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        int32_t temp0_356
        int32_t temp1_42
        temp0_356, temp1_42 = _mm256_i32gather_ps(arg5, *(arg3 + zmm2[0].q), zmm5)
        arg5 = temp0_356
        zmm2 = _mm256_or_ps(zmm1, _mm256_broadcast_ss(7.8472714e-44f))
        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        int32_t temp0_360
        int32_t temp1_43
        temp0_360, temp1_43 = _mm256_i32gather_ps(zmm0, *(arg3 + zmm2[0].q), zmm5)
        zmm0 = temp0_360
        arg8 = temp1_43
        zmm2 = _mm256_broadcast_ss(8.40779079e-44f)
        zmm1 = _mm256_or_ps(zmm1, zmm2)
        int32_t var_860_2[0x8] = zmm5
        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        int32_t temp0_364
        int32_t temp1_44
        temp0_364, temp1_44 = _mm256_i32gather_ps(arg8, *(arg3 + zmm1[0].q), zmm5)
        arg8 = temp0_364
        zmm5 = temp1_44
        int32_t var_580[0x8] = var_8e0_1
        int32_t var_560[0x8] = var_a00_3
        int32_t var_540[0x8] = var_a20_3
        int32_t var_520[0x8] = var_a40_3
        float var_500_1[0x8] = arg15
        float var_4e0_1[0x8] = arg16
        int32_t var_4c0_1[0x8] = arg14
        int32_t var_4a0_1[0x8] = temp0_335
        int32_t var_480_1[0x8] = temp0_338
        int32_t var_460_1[0x8] = temp0_342
        uint32_t var_440_1[0x8] = temp0_345
        float var_420_1[0x8] = temp0_348
        float var_400_1[0x8] = arg6
        int32_t var_3e0_1[0x8] = arg5
        float var_3c0_1[0x8] = zmm0
        int32_t var_3a0_1[0x8] = arg8
        zmm0[0].o = arg17[9]
        zmm2[0].o = arg17[0xd]
        arg5[0].o = arg17[2]
        arg14[0].o = arg17[3]
        zmm5[0].o = arg17[6]
        arg8[0].o = arg17[0xa]
        arg6[0].o = arg17[0xe]
        arg15[0].o = arg17[7]
        arg16[0].o = arg17[0xb]
        int64_t i_1 = 0
        zmm1 = _mm256_broadcastss_ps(zmm0[0].o)
        arg7 = _mm256_broadcastss_ps(zmm2[0].o)
        arg10 = _mm256_broadcastss_ps(arg5[0].o)
        arg11 = _mm256_broadcastss_ps(zmm5[0].o)
        arg12 = _mm256_broadcastss_ps(arg8[0].o)
        arg13 = _mm256_broadcastss_ps(arg6[0].o)
        arg14 = _mm256_broadcastss_ps(arg14[0].o)
        arg15 = _mm256_broadcastss_ps(arg15[0].o)
        arg16 = _mm256_broadcastss_ps(arg16[0].o)
        
        do
            zmm0 = _mm256_broadcast_ss(*arg17)
            zmm5 = *(&var_580 + i_1)
            arg6 = *(&var_560 + i_1)
            zmm2 = *(&var_540 + i_1)
            arg5 = *(&var_520 + i_1)
            zmm0 = _mm256_fmadd_ps(zmm0, zmm5, arg9)
            arg8 = _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[4]), arg6, zmm0)
            zmm0 = _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[8]), zmm2, arg8)
            *(&var_c40 + i_1) = _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[0xc]), arg5, zmm0)
            zmm0 = _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[1]), zmm5, arg9)
            *(&var_c20 + i_1) = _mm256_fmadd_ps(
                _mm256_fmadd_ps(_mm256_fmadd_ps(_mm256_broadcast_ss(arg17[5]), arg6, zmm0), zmm2, 
                    zmm1), 
                arg5, arg7)
            *(&var_c00 + i_1) = _mm256_fmadd_ps(
                _mm256_fmadd_ps(_mm256_fmadd_ps(_mm256_fmadd_ps(arg10, zmm5, arg9), arg6, arg11), 
                    zmm2, arg12), 
                arg5, arg13)
            zmm2 = _mm256_fmadd_ps(zmm2, arg16, 
                _mm256_fmadd_ps(arg6, arg15, _mm256_fmadd_ps(zmm5, arg14, arg9)))
            *(&var_be0 + i_1) = _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[0xf]), arg5, zmm2)
            i_1 -= -0x80
        while (i_1 != 0x200)
        
        arg10 = var_c40
        arg5 = var_c20
        int32_t var_a40_4[0x8] = arg5
        arg6 = var_bc0
        float var_900_3[0x8] = arg6
        zmm0 = __vaddps_ymmqq_ymmqq_memqq(var_d40_3, var_d60_2)
        zmm2 = _mm256_broadcast_ss(0.5f)
        zmm0 = _mm256_mul_ps(zmm0, zmm2)
        zmm5 = _mm256_mul_ps(zmm0, arg10)
        arg8 = _mm256_mul_ps(zmm0, arg5)
        arg11 = _mm256_mul_ps(__vaddps_ymmqq_ymmqq_memqq(var_880_2, var_8c0_2), zmm2)
        zmm5 = _mm256_fmadd_ps(zmm5, arg11, arg6)
        arg8 = _mm256_fmadd_ps(arg8, arg11, var_ba0)
        arg16 = var_c00
        zmm1 = var_b80
        int32_t var_760_2[0x8] = zmm1
        arg12 = _mm256_fmadd_ps(_mm256_mul_ps(zmm0, arg16), arg11, zmm1)
        arg9 = var_b60
        arg11 = _mm256_mul_ps(arg11, arg9)
        arg13 = var_be0
        zmm0 = _mm256_fmadd_ps(zmm0, arg13, arg11)
        arg15 = var_840_2
        arg11 = _mm256_mul_ps(__vaddps_ymmqq_ymmqq_memqq(arg15, var_8a0_2), zmm2)
        zmm5 = _mm256_fmadd_ps(zmm5, arg11, var_b40)
        arg8 = _mm256_fmadd_ps(arg8, arg11, var_b20)
        arg5 = var_b00
        arg12 = _mm256_fmadd_ps(arg12, arg11, arg5)
        int32_t var_a20_4[0x8] = arg5
        arg6 = var_ae0
        arg11 = _mm256_fmadd_ps(arg11, arg6, zmm0)
        float var_740_2[0x8] = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_ac0)
        arg14 = __vaddps_ymmqq_ymmqq_memqq(arg8, var_aa0)
        arg8 = __vaddps_ymmqq_ymmqq_memqq(arg12, var_a80)
        float var_720_2[0x8] = __vaddps_ymmqq_ymmqq_memqq(arg11, var_a60)
        var_c40 = arg10
        var_c20 = var_a40_4
        var_c00 = arg16
        var_be0 = arg13
        arg13 = var_900_3
        int32_t var_600_2[0x8] = arg13
        float var_5e0_2[0x8] = var_ba0
        int32_t var_5c0_2[0x8] = var_760_2
        float var_5a0_2[0x8] = arg9
        float var_680_2[0x8] = var_b40
        int32_t var_660_2[0x8] = var_b20
        int32_t var_640_2[0x8] = arg5
        float var_620_2[0x8] = arg6
        zmm1 = __vsubps_ymmqq_ymmqq_memqq(var_8c0_2, var_880_2)
        arg5 = __vsubps_ymmqq_ymmqq_memqq(arg15, var_8a0_2)
        arg12 = __vsubps_ymmqq_ymmqq_memqq(var_d60_2, var_d40_3)
        zmm1 = _mm256_mul_ps(zmm1, zmm2)
        arg12 = _mm256_mul_ps(arg12, zmm2)
        zmm2 = _mm256_mul_ps(arg5, zmm2)
        arg15 = var_740_2
        float var_180_1[0x8] = arg15
        int32_t var_160_1[0x8] = arg14
        int32_t var_140_1[0x8] = arg8
        int32_t var_120_1[0x8] = var_720_2
        arg5 = _mm256_mul_ps(arg12, arg10)
        arg11 = _mm256_mul_ps(arg12, var_a40_4)
        arg6 = _mm256_mul_ps(arg12, arg16)
        arg9 = _mm256_mul_ps(zmm1, arg13)
        arg10 = _mm256_mul_ps(zmm1, var_ba0)
        zmm1 = _mm256_mul_ps(zmm1, var_760_2)
        arg7 = _mm256_broadcast_ss(nanf)
        arg5 = _mm256_add_ps(_mm256_and_ps(arg5, arg7), _mm256_and_ps(arg9, arg7))
        arg9 = _mm256_add_ps(_mm256_and_ps(arg11, arg7), _mm256_and_ps(arg10, arg7))
        zmm1 = _mm256_add_ps(_mm256_and_ps(arg6, arg7), _mm256_and_ps(zmm1, arg7))
        arg6 = __vmulps_ymmqq_ymmqq_memqq(zmm2, var_b40)
        arg10 = __vmulps_ymmqq_ymmqq_memqq(zmm2, var_b20)
        zmm2 = __vmulps_ymmqq_ymmqq_memqq(zmm2, var_a20_4)
        arg5 = _mm256_add_ps(arg5, _mm256_and_ps(arg6, arg7))
        arg6 = _mm256_add_ps(arg9, _mm256_and_ps(arg10, arg7))
        zmm2 = _mm256_add_ps(zmm1, _mm256_and_ps(zmm2, arg7))
        arg11 = _mm256_sub_ps(arg15, arg5)
        zmm1 = arg14
        arg9 = _mm256_sub_ps(arg14, arg6)
        arg14 = _mm256_sub_ps(arg8, zmm2)
        arg10 = _mm256_add_ps(arg15, arg5)
        zmm5 = _mm256_add_ps(zmm1, arg6)
        zmm1[0].o = __vpmovzxbw_xmmdq_memq(var_920)
        arg12 = _mm256_add_ps(arg8, zmm2)
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        arg7[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
        arg15[0].o = arg7[0].o & not.o(var_6e0_1)
        arg6[0].o = __vpsllw_xmmdq_xmmdq_immb(arg15[0].o, 0xf)
        arg6[0].o = __vpsraw_xmmdq_xmmdq_immb(arg6[0].o, 0xf)
        arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, arg15[0].o)
        char temp0_463 = __vpmovmskb_gpr32d_xmmdq(arg6[0].o)
        arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        arg7[0].o ^= arg6[0].o
        arg7 = _mm256_cvtepi16_epi32(arg7[0].o)
        
        if (temp0_463 == 0)
            zmm1[0].o = zx.o(0)
            arg8 = var_860_2
            zmm2 = _mm256_andnot_ps(arg7, arg8)
            
            if (_mm256_movemask_ps(zmm2) != 0)
            label_14034c412:
                arg5 = arg7 ^ _mm256_cmpeq_epi32(arg5, arg5)
                var_c40 = _mm256_maskstore_ps(arg5, arg11)
                var_c20 = _mm256_maskstore_ps(arg5, arg9)
                var_c00 = _mm256_maskstore_ps(arg5, arg14)
                var_be0 = _mm256_maskstore_ps(arg5, arg10)
                var_bc0 = _mm256_maskstore_ps(arg5, zmm5)
                var_ba0 = _mm256_maskstore_ps(arg5, arg12)
                char temp0_503 = _mm256_movemask_ps(arg5)
                
                if ((temp0_503 & 1) == 0)
                    if ((temp0_503 & 2) != 0)
                        goto label_14034ca25
                    
                    goto label_14034c466
                
                var_b80[0].b = 1
                
                if ((temp0_503 & 2) != 0)
                label_14034ca25:
                    var_b80[0]:1.b = 1
                    
                    if ((temp0_503 & 4) == 0)
                        goto label_14034c46e
                    
                    goto label_14034ca35
                
            label_14034c466:
                
                if ((temp0_503 & 4) == 0)
                label_14034c46e:
                    
                    if ((temp0_503 & 8) != 0)
                        goto label_14034ca45
                    
                    goto label_14034c476
                
            label_14034ca35:
                var_b80[0]:2.b = 1
                
                if ((temp0_503 & 8) != 0)
                label_14034ca45:
                    var_b80[0]:3.b = 1
                    
                    if ((temp0_503 & 0x10) == 0)
                        goto label_14034c47e
                    
                    goto label_14034ca55
                
            label_14034c476:
                
                if ((temp0_503 & 0x10) == 0)
                label_14034c47e:
                    
                    if ((temp0_503 & 0x20) != 0)
                        goto label_14034ca65
                    
                    goto label_14034c486
                
            label_14034ca55:
                var_b80[1].b = 1
                
                if ((temp0_503 & 0x20) != 0)
                label_14034ca65:
                    var_b80[1]:1.b = 1
                    
                    if ((temp0_503 & 0x40) == 0)
                        goto label_14034c48e
                    
                    goto label_14034ca75
                
            label_14034c486:
                
                if ((temp0_503 & 0x40) != 0)
                label_14034ca75:
                    var_b80[1]:2.b = 1
                    
                    if (temp0_503 s< 0)
                        var_b80[1]:3.b = 1
                else
                label_14034c48e:
                    
                    if (temp0_503 s< 0)
                        var_b80[1]:3.b = 1
                
                _mm256_movemask_ps(zmm1 | zmm2)
        else
            var_d60_2[0].o = arg15[0].o
            zmm0 = var_9c0
            arg15 = var_980
            zmm2 = arg12
            arg16 = var_960
            var_c40 = _mm256_maskstore_ps(arg7, _mm256_min_ps(var_9e0, arg11))
            var_c20 = _mm256_maskstore_ps(arg7, _mm256_min_ps(zmm0, arg9))
            var_c00 = _mm256_maskstore_ps(arg7, _mm256_min_ps(var_9a0, arg14))
            arg12 = zmm2
            var_be0 = _mm256_maskstore_ps(arg7, _mm256_max_ps(arg15, arg10))
            arg13 = zmm5
            var_bc0 = _mm256_maskstore_ps(arg7, _mm256_max_ps(arg16, zmm5))
            zmm5 = _mm256_max_ps(var_940, zmm2)
            var_ba0 = _mm256_maskstore_ps(arg7, zmm5)
            zmm5[0].o = zmm1[0].o & data_142fc92e0
            arg5[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
            arg5[0].o ^= arg6[0].o
            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            char temp0_480 = __vpmovmskb_gpr32d_xmmdq(arg5[0].o)
            
            if ((temp0_480 & 1) != 0)
                var_b80[0].b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0)
            
            if ((temp0_480 & 2) != 0)
                var_b80[0]:1.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 2)
            
            arg8 = var_860_2
            zmm5 = arg13
            arg11 = arg11
            
            if ((temp0_480 & 4) == 0)
                if ((temp0_480 & 8) != 0)
                    goto label_14034c39b
                
                goto label_14034c349
            
            var_b80[0]:2.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 4)
            
            if ((temp0_480 & 8) != 0)
            label_14034c39b:
                var_b80[0]:3.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 6)
                
                if ((temp0_480 & 0x10) == 0)
                    goto label_14034c34e
                
                goto label_14034c3ab
            
        label_14034c349:
            
            if ((temp0_480 & 0x10) == 0)
            label_14034c34e:
                
                if ((temp0_480 & 0x20) != 0)
                    goto label_14034c3bb
                
                goto label_14034c353
            
        label_14034c3ab:
            var_b80[1].b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 8)
            
            if ((temp0_480 & 0x20) != 0)
            label_14034c3bb:
                var_b80[1]:1.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xa)
                
                if ((temp0_480 & 0x40) == 0)
                    goto label_14034c358
                
                goto label_14034c3cb
            
        label_14034c353:
            
            if ((temp0_480 & 0x40) == 0)
            label_14034c358:
                
                if (temp0_480 s< 0)
                    goto label_14034c3da
                
                goto label_14034c35c
            
        label_14034c3cb:
            var_b80[1]:2.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xc)
            
            if (temp0_480 s>= 0)
            label_14034c35c:
                
                if (temp0_320 != temp0_463)
                label_14034c3f9:
                    zmm1 = _mm256_srai_epi32(
                        _mm256_slli_epi32(__vpmovzxwd_ymmqq_memdq(var_d60_2[0].o), 0x1f), 0x1f)
                    zmm2 = _mm256_andnot_ps(arg7, arg8)
                    
                    if (_mm256_movemask_ps(zmm2) != 0)
                        goto label_14034c412
            else
            label_14034c3da:
                var_b80[1]:3.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xe)
                
                if (temp0_320 != temp0_463)
                    goto label_14034c3f9
        
        zmm2 = var_c40
        arg5 = var_c20
        arg6 = var_c00
        zmm5 = var_be0
        arg7 = var_bc0
        zmm0 = var_ba0
        zmm1[0].o = __vpmovzxbw_xmmdq_memq(var_b80[0].q)
        var_9e0 = _mm256_maskstore_ps(arg8, zmm2)
        var_9c0 = _mm256_maskstore_ps(arg8, arg5)
        var_9a0 = _mm256_maskstore_ps(arg8, arg6)
        var_980 = _mm256_maskstore_ps(arg8, zmm5)
        var_960 = _mm256_maskstore_ps(arg8, arg7)
        var_940 = _mm256_maskstore_ps(arg8, zmm0)
        
        if ((temp0_320 & 1) == 0)
            if ((temp0_320 & 2) != 0)
                goto label_14034c993
            
            goto label_14034c524
        
        var_920[0] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0)
        
        if ((temp0_320 & 2) != 0)
        label_14034c993:
            var_920[1] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 2)
            
            if ((temp0_320 & 4) == 0)
                goto label_14034c52c
            
            goto label_14034c9a6
        
    label_14034c524:
        
        if ((temp0_320 & 4) == 0)
        label_14034c52c:
            
            if ((temp0_320 & 8) != 0)
                goto label_14034c9b9
            
            goto label_14034c534
        
    label_14034c9a6:
        var_920[2] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 4)
        
        if ((temp0_320 & 8) != 0)
        label_14034c9b9:
            var_920[3] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 6)
            
            if ((temp0_320 & 0x10) == 0)
                goto label_14034c53c
            
            goto label_14034c9cc
        
    label_14034c534:
        
        if ((temp0_320 & 0x10) == 0)
        label_14034c53c:
            
            if ((temp0_320 & 0x20) != 0)
                goto label_14034c9df
            
            goto label_14034c544
        
    label_14034c9cc:
        var_920[4] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 8)
        
        if ((temp0_320 & 0x20) != 0)
        label_14034c9df:
            var_920[5] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xa)
            
            if ((temp0_320 & 0x40) == 0)
                goto label_14034c54c
            
            goto label_14034c9f2
        
    label_14034c544:
        
        if ((temp0_320 & 0x40) != 0)
        label_14034c9f2:
            var_920[6] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xc)
            
            if (temp0_320 s< 0)
                var_920[7] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xe)
        else
        label_14034c54c:
            
            if (temp0_320 s< 0)
                var_920[7] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xe)

zmm0[0].o = var_9e0[0].o
float var_d20 = zmm0[0]
float var_d04 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float var_ce8 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
float var_ccc = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
zmm0[0].o = var_9e0[4].o
float var_cb0 = zmm0[0]
float var_c94 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float var_c78 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
float var_c5c = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
zmm0[0].o = var_9c0[0].o
float var_d1c = zmm0[0]
float var_d00 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float var_ce4 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
float var_cc8 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
zmm0[0].o = var_9c0[4].o
float var_cac = zmm0[0]
float var_c90 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float var_c74 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
float var_c58 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
zmm0[0].o = var_9a0[0].o
float var_d18 = zmm0[0]
float var_cfc = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float var_ce0 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
float var_cc4 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
zmm0[0].o = var_9a0[4].o
float var_ca8 = zmm0[0]
float var_c8c = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float var_c70 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
float var_c54 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
zmm0[0].o = var_980[0].o
float var_d14 = zmm0[0]
float var_cf8 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float var_cdc = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
float var_cc0 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
zmm0[0].o = var_980[4].o
float var_ca4 = zmm0[0]
float var_c88 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float var_c6c = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
float var_c50 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
zmm0[0].o = var_960[0].o
float var_d10 = zmm0[0]
float var_cf4 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float var_cd8 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
float var_cbc = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
zmm0[0].o = var_960[4].o
float var_ca0 = zmm0[0]
float var_c84 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float var_c68 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
float var_c4c = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
zmm0[0].o = var_940[0].o
float var_d0c = zmm0[0]
float var_cf0 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float var_cd4 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
float var_cb8 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
zmm0[0].o = var_940[4].o
float var_c9c = zmm0[0]
float var_c80 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float var_c64 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
float var_c48 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
zmm0[0].o = zx.o(var_920)
char var_d08[0x4]
var_d08[0] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0)
uint8_t var_cec = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 1)
uint8_t var_cd0 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 2)
uint8_t var_cb4 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 3)
uint8_t var_c98 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 4)
uint8_t var_c7c = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 5)
uint8_t var_c60 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 6)
uint8_t var_c44 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 7)

for (uint64_t i_2 = 0xff; i_2 != 0; )
    uint64_t rcx_14 = _tzcnt_u64(i_2)
    i_2 &= not.q(1 << (rcx_14 u% 0x40))
    uint64_t rbx_10 = rcx_14 * 0x1c
    char rcx_15 = arg18[6].b
    char rdx_12 = var_d08[rbx_10]
    void var_d80
    
    if (rcx_15 != 0 && rdx_12 != 0)
        zmm0[0].o = *(&var_d80 + rbx_10 + 0x60)
        zmm1[0].o = __vmovsd_xmmdq_memq(*arg18)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg18[2], 0x20)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, (&var_d1c)[rcx_14 * 7], 0x10)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, (&var_d18)[rcx_14 * 7], 0x20)
        zmm2[0].o = __vmovsd_xmmdq_memq(*(arg18 + 0xc))
        zmm0 = _mm256_min_ps(zmm1, zmm0)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, arg18[5], 0x20)
        zmm1[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
        zmm2[0].o = __vmovsd_xmmdq_memq(*(&var_d14 + rbx_10))
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, (&var_d0c)[rcx_14 * 7], 0x20)
        zmm2[0].o = _mm_permute_pd(zmm0[0].o, 1)
        arg5 = _mm256_max_ps(arg5, arg6)
        arg6[0].o = __vmovshdup_xmmdq_xmmdq(arg5[0].o)
        zmm5[0].o = _mm_permute_pd(arg5[0].o, 1)
    else if (rdx_12 == 0)
        rcx_15 = arg18[6].b
        zmm5[0].o = arg18[5]
        arg6[0].o = arg18[4]
        arg5[0].o = arg18[3]
        zmm2[0].o = arg18[2]
        zmm0[0].o = *arg18
        zmm1[0].o = arg18[1]
    else
        zmm0[0].o = *(&var_d80 + rbx_10 + 0x60)
        zmm1[0].o = (&var_d1c)[rcx_14 * 7]
        zmm2[0].o = (&var_d18)[rcx_14 * 7]
        arg5[0].o = (&var_d14)[rcx_14 * 7]
        arg6[0].o = (&var_d10)[rcx_14 * 7]
        zmm5[0].o = (&var_d0c)[rcx_14 * 7]
        rcx_15 = rdx_12
    *arg18 = zmm0[0]
    arg18[1] = zmm1[0]
    arg18[2] = zmm2[0]
    arg18[3] = arg5[0]
    arg18[4] = arg6[0]
    arg18[5] = zmm5[0]
    arg18[6].b = rcx_15

arg7[0].o = var_e8
arg8[0].o = var_d8
arg9[0].o = var_c8
arg10[0].o = var_b8
arg11[0].o = var_a8
arg12[0].o = var_98
arg13[0].o = var_88
arg14[0].o = var_78
arg15[0].o = var_68
arg16[0].o = var_58
_mm256_zeroupper()
return arg18
