// 函数: sub_140346770
// 地址: 0x140346770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1358)
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
float zmm0[0x8] = *arg20
int32_t i_5 = _mm256_movemask_ps(zmm0)
uint64_t i_2
float var_13a0[0x8]
float var_1360[0x8]
uint32_t var_1340[0x8]
float var_1320[0x8]
float var_1300[0x8]
int32_t var_12e0[0x8]
uint32_t var_12c0[0x8]
uint32_t var_12a0[0x8]
float var_1280[0x8]
uint32_t var_1260[0x8]
uint32_t var_1240[0x8]
uint32_t var_1220[0x8]
uint32_t var_1200[0x8]
float var_11e0[0x8]
float var_11c0[0x8]
float var_11a0[0x8]
float var_1180[0x8]
int32_t (* var_10e0)[0x8]
uint32_t (* var_1040)[0x8]
float var_d60[0x8]
float zmm1[0x8]
int32_t zmm2[0x8]
int32_t zmm5[0x8]

if (i_5 != 0xff)
    int32_t rcx_23 = ((arg19 s>> 0x1f u>> 0x1d) + arg19) & 0xfffffff8
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    float var_bc0_1[0x8] = zmm0
    float var_be0_1[0x8] = zmm0
    float var_c00_1[0x8] = zmm0
    float var_c20_1[0x8] = zmm0
    float var_c40_1[0x8] = zmm0
    float var_c60_1[0x8] = zmm0
    uint8_t var_ba0_1[0x8] = 0
    uint64_t r10_3 = 0
    int32_t var_d80
    
    if (rcx_23 s> 0)
        float temp0_487[0x8] = _mm256_broadcast_ss(9.80908925e-45f)
        arg13 = __vpbroadcastd_ymmqq_memd(0x1c)
        arg10 = _mm256_cmpeq_epi32(arg10, arg10)
        arg11 = __vpbroadcastd_ymmqq_memd(4)
        arg12 = __vpbroadcastd_ymmqq_memd(8)
        arg14 = __vpbroadcastd_ymmqq_memd(0xc)
        arg15 = __vpbroadcastd_ymmqq_memd(0x10)
        arg16 = __vpbroadcastd_ymmqq_memd(0x14)
        zmm1 = __vpbroadcastd_ymmqq_memd(0x18)
        float var_1060_3[0x8] = zmm1
        zmm5[0].o = zx.o(0)
        uint32_t var_dc0_2[0x8] = arg13
        uint32_t var_de0_2[0x8] = arg11
        uint32_t var_e00_2[0x8] = arg12
        uint32_t var_ac0_1[0x8] = arg14
        uint32_t var_ae0_1[0x8] = arg15
        uint32_t var_b00_1[0x8] = arg16
        
        while (true)
            zmm1[0].o = zx.o(r10_3.d)
            zmm1 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm1[0]), data_142fc93a0)
            int32_t temp0_507[0x8] = __vpmulld_ymmqq_ymmqq_memqq(zmm1, temp0_487)
            uint32_t temp0_508[0x8] = _mm256_cmpeq_epi32(arg5, arg5)
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            float temp0_510[0x8]
            int32_t temp1_45
            temp0_510, temp1_45 =
                _mm256_i32gather_ps(arg7, *(arg4 + (temp0_507[0].q << 2)), temp0_508)
            arg7 = temp0_510
            arg5 = temp1_45
            int32_t temp0_511[0x8] = _mm256_mullo_epi32(zmm1, arg13)
            zmm1 = _mm256_add_epi32(temp0_511, arg11)
            uint32_t temp0_513[0x8] = _mm256_cmpeq_epi32(arg5, arg5)
            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
            float temp0_515[0x8]
            int32_t temp1_46
            temp0_515, temp1_46 = _mm256_i32gather_ps(arg8, *(arg4 + zmm1[0].q), temp0_513)
            arg8 = temp0_515
            arg5 = temp1_46
            zmm1 = _mm256_add_epi32(temp0_511, arg12)
            uint32_t temp0_517[0x8] = _mm256_cmpeq_epi32(arg5, arg5)
            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
            float temp0_519[0x8]
            int32_t temp1_47
            temp0_519, temp1_47 = _mm256_i32gather_ps(arg9, *(arg4 + zmm1[0].q), temp0_517)
            arg9 = temp0_519
            arg5 = temp1_47
            zmm1 = _mm256_add_epi32(temp0_511, arg14)
            uint32_t temp0_521[0x8] = _mm256_cmpeq_epi32(arg5, arg5)
            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            float temp0_523[0x8]
            int32_t temp1_48
            temp0_523, temp1_48 = _mm256_i32gather_ps(arg6, *(arg4 + zmm1[0].q), temp0_521)
            arg5 = temp1_48
            var_13a0 = temp0_523
            zmm1 = _mm256_add_epi32(temp0_511, arg15)
            uint32_t temp0_525[0x8] = _mm256_cmpeq_epi32(arg5, arg5)
            temp0_523[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_523[0].o, temp0_523[0].o)
            float temp0_527[0x8]
            int32_t temp1_49
            temp0_527, temp1_49 = _mm256_i32gather_ps(temp0_523, *(arg4 + zmm1[0].q), temp0_525)
            arg5 = _mm256_add_epi32(temp0_511, arg16)
            arg6 = _mm256_cmpeq_epi32(temp0_527, temp0_527)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            float temp0_531[0x8]
            int32_t temp1_50
            temp0_531, temp1_50 = _mm256_i32gather_ps(zmm1, *(arg4 + arg5[0].q), arg6)
            zmm1 = temp0_531
            arg6 = temp1_50
            var_d60 = zmm1
            int32_t temp0_532[0x8] = __vpaddd_ymmqq_ymmqq_memqq(temp0_511, var_1060_3)
            int64_t r14_2 = sx.q(temp0_532[0])
            int32_t temp0_533 = __vpextrd_gpr32d_xmmdq_immb(temp0_532[0].o, 1)
            int64_t rdi_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_532[0].o, 2))
            int64_t rdx_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_532[0].o, 3))
            temp0_532[0].o = _mm256_extracti128_si256(temp0_532, 1)
            int64_t r11_4 = sx.q(temp0_532[0])
            int32_t temp0_537 = __vpextrd_gpr32d_xmmdq_immb(temp0_532[0].o, 1)
            int64_t r15_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_532[0].o, 2))
            int32_t temp0_539 = __vpextrd_gpr32d_xmmdq_immb(temp0_532[0].o, 3)
            int64_t rsi_13 = sx.q((r10_3 << 2).d)
            zmm2 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg10, *(arg1 + rsi_13)) ^ arg10
            arg5[0].o = _mm256_extracti128_si256(zmm2, 1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
            arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, arg4[r14_2], 0)
            arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, arg4[sx.q(temp0_533)], 2)
            arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, arg4[rdi_6], 4)
            arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, arg4[rdx_10], 6)
            arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, arg4[r11_4], 8)
            arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, arg4[sx.q(temp0_537)], 0xa)
            arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, arg4[r15_4], 0xc)
            arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, arg4[sx.q(temp0_539)], 0xe)
            arg5[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
            zmm1[0].o = arg5[0].o & not.o(zmm2[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            char temp0_553 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o)
            
            if (temp0_553 != 0)
                float var_10a0_3[0x8] = arg9
                float var_1080_3[0x8] = arg8
                uint32_t var_1100_4[0x8] = arg7
                int128_t var_1120 = zmm1[0].o
                arg7 = _mm256_cvtepi16_epi32(zmm1[0].o)
                zmm5 = _mm256_slli_epi32(*(arg2 + rsi_13), 6)
                zmm1[0].o = zx.o(0)
                float temp0_556[0x8]
                int32_t temp1_51
                temp0_556, temp1_51 = _mm256_i32gather_ps(zmm1, *(arg3 + zmm5[0].q), arg7)
                zmm2 = temp1_51
                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                float temp0_558[0x8]
                int32_t temp1_52
                temp0_558, temp1_52 = _mm256_i32gather_ps(zmm2, *(arg3 + (zmm5 | arg11)[0].q), arg7)
                zmm1 = temp1_52
                int32_t var_10c0_4[0x8] = temp0_558
                zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                float temp0_560[0x8]
                int32_t temp1_53
                temp0_560, temp1_53 = _mm256_i32gather_ps(zmm1, *(arg3 + (zmm5 | arg12)[0].q), arg7)
                arg8 = temp1_53
                temp0_560[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_560[0].o, temp0_560[0].o)
                float temp0_562[0x8]
                int32_t temp1_54
                temp0_562, temp1_54 =
                    _mm256_i32gather_ps(temp0_560, *(arg3 + (zmm5 | arg14)[0].q), arg7)
                arg9 = temp1_54
                arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                float temp0_564[0x8]
                int32_t temp1_55
                temp0_564, temp1_55 = _mm256_i32gather_ps(arg9, *(arg3 + (zmm5 | arg15)[0].q), arg7)
                arg10 = temp1_55
                arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                float temp0_566[0x8]
                int32_t temp1_56
                temp0_566, temp1_56 =
                    _mm256_i32gather_ps(arg10, *(arg3 + (zmm5 | arg16)[0].q), arg7)
                arg10 = temp0_566
                arg11 = temp1_56
                arg6 = __vorps_ymmqq_ymmqq_memqq(zmm5, var_1060_3)
                arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                float temp0_569[0x8]
                int32_t temp1_57
                temp0_569, temp1_57 = _mm256_i32gather_ps(arg11, *(arg3 + arg6[0].q), arg7)
                arg11 = temp0_569
                arg14[0].o = zx.o(0)
                float temp0_570[0x8]
                int32_t temp1_58
                temp0_570, temp1_58 =
                    _mm256_i32gather_ps(arg14, *(arg3 + (zmm5 | arg13)[0].q), arg7)
                arg12 = temp1_58
                arg6 = _mm256_or_ps(zmm5, _mm256_broadcast_ss(4.48415509e-44f))
                arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                float temp0_574[0x8]
                int32_t temp1_59
                temp0_574, temp1_59 = _mm256_i32gather_ps(arg12, *(arg3 + arg6[0].q), arg7)
                float temp0_575[0x8] = _mm256_broadcast_ss(5.04467447e-44f)
                uint32_t temp0_576[0x8] = _mm256_or_ps(zmm5, temp0_575)
                arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                float temp0_578[0x8]
                int32_t temp1_60
                temp0_578, temp1_60 = _mm256_i32gather_ps(arg8, *(arg3 + temp0_576[0].q), arg7)
                arg13 = _mm256_broadcast_ss(5.60519386e-44f)
                uint32_t temp0_580[0x8] = _mm256_or_ps(zmm5, arg13)
                arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                float temp0_582[0x8]
                int32_t temp1_61
                temp0_582, temp1_61 = _mm256_i32gather_ps(arg13, *(arg3 + temp0_580[0].q), arg7)
                uint32_t temp0_584[0x8] = _mm256_or_ps(zmm5, _mm256_broadcast_ss(6.16571324e-44f))
                temp0_580[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_580[0].o, temp0_580[0].o)
                float temp0_586[0x8]
                int32_t temp1_62
                temp0_586, temp1_62 = _mm256_i32gather_ps(temp0_580, *(arg3 + temp0_584[0].q), arg7)
                arg16 = temp0_586
                float temp0_587[0x8] = _mm256_broadcast_ss(6.72623263e-44f)
                zmm2 = _mm256_or_ps(zmm5, temp0_587)
                temp0_575[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_575[0].o, temp0_575[0].o)
                float temp0_590[0x8]
                int32_t temp1_63
                temp0_590, temp1_63 = _mm256_i32gather_ps(temp0_575, *(arg3 + zmm2[0].q), arg7)
                zmm2 = _mm256_or_ps(zmm5, _mm256_broadcast_ss(7.28675201e-44f))
                arg5[0].o = zx.o(0)
                float temp0_593[0x8]
                int32_t temp1_64
                temp0_593, temp1_64 = _mm256_i32gather_ps(arg5, *(arg3 + zmm2[0].q), arg7)
                arg5 = temp0_593
                zmm2 = _mm256_or_ps(zmm5, _mm256_broadcast_ss(7.8472714e-44f))
                temp0_587[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_587[0].o, temp0_587[0].o)
                float temp0_597[0x8]
                int32_t temp1_65
                temp0_597, temp1_65 = _mm256_i32gather_ps(temp0_587, *(arg3 + zmm2[0].q), arg7)
                arg15 = temp1_65
                zmm2 = _mm256_or_ps(zmm5, _mm256_broadcast_ss(8.40779079e-44f))
                uint32_t var_e20_3[0x8] = arg7
                arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                float temp0_601[0x8]
                int32_t temp1_66
                temp0_601, temp1_66 = _mm256_i32gather_ps(arg15, *(arg3 + zmm2[0].q), arg7)
                arg7 = temp1_66
                int32_t var_700[0x8] = temp0_556
                int32_t var_6e0[0x8] = var_10c0_4
                int32_t var_6c0[0x8] = temp0_560
                zmm2 = temp0_562
                int32_t var_6a0[0x8] = zmm2
                float var_680_1[0x8] = temp0_564
                uint32_t var_660_1[0x8] = arg10
                uint32_t var_640_1[0x8] = arg11
                uint32_t var_620_1[0x8] = temp0_570
                uint32_t var_600_1[0x8] = temp0_574
                float var_5e0_1[0x8] = temp0_578
                uint32_t var_5c0_1[0x8] = temp0_582
                uint32_t var_5a0_1[0x8] = arg16
                float var_580_1[0x8] = temp0_590
                uint32_t var_560_1[0x8] = arg5
                float var_540_1[0x8] = temp0_597
                uint32_t var_520_1[0x8] = temp0_601
                arg5[0].o = arg17[9]
                zmm5[0].o = arg17[0xd]
                arg7[0].o = arg17[2]
                temp0_578[0].o = arg17[3]
                temp0_564[0].o = arg17[6]
                arg10[0].o = arg17[0xa]
                arg11[0].o = arg17[0xe]
                zmm2[0].o = arg17[7]
                arg16[0].o = arg17[0xb]
                
                for (int64_t i = 0; i != 0x200; i -= -0x80)
                    float temp0_602[0x8] = _mm256_broadcast_ss(*arg17)
                    arg6 = *(&var_700 + i)
                    arg13 = *(&var_6e0 + i)
                    arg12 = *(&var_6c0 + i)
                    arg14 = *(&var_6a0 + i)
                    float temp0_603[0x8] = _mm256_fmadd_ps(temp0_602, arg6, zmm0)
                    arg15 = _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[4]), arg13, temp0_603)
                    float temp0_607[0x8] =
                        _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[8]), arg12, arg15)
                    *(&var_1360 + i) =
                        _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[0xc]), arg14, temp0_607)
                    float temp0_611[0x8] =
                        _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[1]), arg6, zmm0)
                    arg15 = _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[5]), arg13, temp0_611)
                    float temp0_615[0x8] =
                        _mm256_fmadd_ps(_mm256_broadcastss_ps(arg5[0].o), arg12, arg15)
                    *(&var_1340 + i) =
                        _mm256_fmadd_ps(_mm256_broadcastss_ps(zmm5[0].o), arg14, temp0_615)
                    float temp0_619[0x8] =
                        _mm256_fmadd_ps(_mm256_broadcastss_ps(arg7[0].o), arg6, zmm0)
                    arg15 = _mm256_fmadd_ps(_mm256_broadcastss_ps(temp0_564[0].o), arg13, temp0_619)
                    float temp0_623[0x8] =
                        _mm256_fmadd_ps(_mm256_broadcastss_ps(arg10[0].o), arg12, arg15)
                    *(&var_1320 + i) =
                        _mm256_fmadd_ps(_mm256_broadcastss_ps(arg11[0].o), arg14, temp0_623)
                    float temp0_627[0x8] =
                        _mm256_fmadd_ps(_mm256_broadcastss_ps(temp0_578[0].o), arg6, zmm0)
                    float temp0_629[0x8] =
                        _mm256_fmadd_ps(_mm256_broadcastss_ps(zmm2[0].o), arg13, temp0_627)
                    float temp0_631[0x8] =
                        _mm256_fmadd_ps(_mm256_broadcastss_ps(arg16[0].o), arg12, temp0_629)
                    *(&var_1300 + i) =
                        _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[0xf]), arg14, temp0_631)
                
                arg5 = var_1360
                uint32_t var_1160_6[0x8] = arg5
                arg6 = var_1340
                float var_10c0_5[0x8] = arg6
                int64_t var_b20
                var_b20.32 = var_12e0
                float temp0_634[0x8] = __vaddps_ymmqq_ymmqq_memqq(var_1100_4, var_13a0)
                zmm2 = _mm256_broadcast_ss(0.5f)
                float temp0_636[0x8] = _mm256_mul_ps(temp0_634, zmm2)
                float temp0_637[0x8] = _mm256_mul_ps(temp0_636, arg5)
                arg10 = _mm256_mul_ps(temp0_636, arg6)
                arg11 = _mm256_mul_ps(__vaddps_ymmqq_ymmqq_memqq(var_1080_3, temp0_527), zmm2)
                float temp0_641[0x8] = _mm256_fmadd_ps(temp0_637, arg11, var_12e0)
                arg10 = _mm256_fmadd_ps(arg10, arg11, var_12c0)
                arg5 = var_1320
                uint32_t var_1000_4[0x8] = arg5
                arg15 = _mm256_fmadd_ps(_mm256_mul_ps(temp0_636, arg5), arg11, var_12a0)
                arg11 = __vfmadd231ps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg11, var_1280), temp0_636, 
                    var_1300)
                arg14 = var_10a0_3
                arg13 = var_d60
                float temp0_648[0x8] = _mm256_mul_ps(_mm256_add_ps(arg14, arg13), zmm2)
                float temp0_649[0x8] = _mm256_fmadd_ps(temp0_641, temp0_648, var_1260)
                arg10 = _mm256_fmadd_ps(arg10, temp0_648, var_1240)
                var_d80.32 = var_1240
                arg6 = var_1220
                arg15 = _mm256_fmadd_ps(arg15, temp0_648, arg6)
                zmm5 = var_1200
                float temp0_652[0x8] = _mm256_fmadd_ps(temp0_648, zmm5, arg11)
                arg12 = __vaddps_ymmqq_ymmqq_memqq(temp0_649, var_11e0)
                float temp0_654[0x8] = __vaddps_ymmqq_ymmqq_memqq(arg10, var_11c0)
                arg11 = __vaddps_ymmqq_ymmqq_memqq(arg15, var_11a0)
                float temp0_656[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_652, var_1180)
                arg9 = var_b20.32
                var_1360 = arg9
                var_1340 = var_12c0
                var_1320 = var_12a0
                var_1300 = var_1280
                uint32_t var_a00_3[0x8] = var_1260
                uint32_t var_9e0_3[0x8] = var_1240
                float var_9c0_3[0x8] = arg6
                int32_t var_9a0_3[0x8] = zmm5
                float temp0_657[0x8] = __vsubps_ymmqq_ymmqq_memqq(temp0_527, var_1080_3)
                arg13 = _mm256_sub_ps(arg13, arg14)
                uint32_t var_a80_3[0x8] = arg12
                arg14 = temp0_654
                uint32_t var_a60_3[0x8] = arg14
                uint32_t var_a40_3[0x8] = arg11
                float var_a20_3[0x8] = temp0_656
                float temp0_660[0x8] =
                    _mm256_mul_ps(__vsubps_ymmqq_ymmqq_memqq(var_13a0, var_1100_4), zmm2)
                arg15 = __vmulps_ymmqq_ymmqq_memqq(temp0_660, var_1160_6)
                arg5 = __vmulps_ymmqq_ymmqq_memqq(temp0_660, var_10c0_5)
                float temp0_663[0x8] = __vmulps_ymmqq_ymmqq_memqq(temp0_660, var_1000_4)
                float temp0_664[0x8] = _mm256_mul_ps(temp0_657, zmm2)
                arg7 = _mm256_mul_ps(temp0_664, arg9)
                float temp0_666[0x8] = _mm256_mul_ps(temp0_664, var_12c0)
                float temp0_667[0x8] = _mm256_mul_ps(temp0_664, var_12a0)
                zmm5 = _mm256_broadcast_ss(nanf)
                arg7 = _mm256_add_ps(_mm256_and_ps(arg15, zmm5), _mm256_and_ps(arg7, zmm5))
                arg5 = _mm256_add_ps(_mm256_and_ps(arg5, zmm5), _mm256_and_ps(temp0_666, zmm5))
                float temp0_677[0x8] =
                    _mm256_add_ps(_mm256_and_ps(temp0_663, zmm5), _mm256_and_ps(temp0_667, zmm5))
                zmm2 = _mm256_mul_ps(arg13, zmm2)
                float temp0_679[0x8] = __vmulps_ymmqq_ymmqq_memqq(zmm2, var_1260)
                float temp0_680[0x8] = __vmulps_ymmqq_ymmqq_memqq(zmm2, var_d80.32)
                zmm2 = __vmulps_ymmqq_ymmqq_memqq(zmm2, arg6)
                arg13 = _mm256_add_ps(arg7, _mm256_and_ps(temp0_679, zmm5))
                arg5 = _mm256_add_ps(arg5, _mm256_and_ps(temp0_680, zmm5))
                int32_t temp0_686[0x8] = _mm256_and_ps(zmm2, zmm5)
                float temp0_687[0x8] = _mm256_add_ps(temp0_677, temp0_686)
                arg15 = _mm256_sub_ps(arg12, arg13)
                zmm5 = arg14
                float temp0_689[0x8] = _mm256_sub_ps(arg14, arg5)
                float temp0_690[0x8] = _mm256_sub_ps(arg11, temp0_687)
                arg16 = _mm256_add_ps(arg12, arg13)
                arg7 = _mm256_add_ps(arg14, arg5)
                arg12 = _mm256_add_ps(arg11, temp0_687)
                zmm5[0].o = __vpmovzxbw_xmmdq_memq(var_ba0_1)
                temp0_687[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_687[0].o, temp0_687[0].o)
                temp0_687[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm5[0].o, temp0_687[0].o)
                arg5[0].o = temp0_687[0].o & not.o(var_1120)
                temp0_686[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                temp0_686[0].o = __vpsraw_xmmdq_xmmdq_immb(temp0_686[0].o, 0xf)
                temp0_686[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_686[0].o, zmm0[0].o)
                char temp0_700 = __vpmovmskb_gpr32d_xmmdq(temp0_686[0].o)
                arg14[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                temp0_687[0].o ^= arg14[0].o
                int32_t temp0_702[0x8] = _mm256_cvtepi16_epi32(temp0_687[0].o)
                
                if (temp0_700 == 0)
                    arg5[0].o = zx.o(0)
                    arg10 = _mm256_cmpeq_epi32(var_12c0, var_12c0)
                    zmm5 = __vandnps_ymmqq_ymmqq_memqq(temp0_702, var_e20_3)
                    
                    if (_mm256_movemask_ps(zmm5) != 0)
                    label_140348c99:
                        zmm1 = temp0_702 ^ arg10
                        var_1360 = _mm256_maskstore_ps(zmm1, arg15)
                        var_1340 = _mm256_maskstore_ps(zmm1, temp0_689)
                        var_1320 = _mm256_maskstore_ps(zmm1, temp0_690)
                        var_1300 = _mm256_maskstore_ps(zmm1, arg16)
                        var_12e0 = _mm256_maskstore_ps(zmm1, arg7)
                        var_12c0 = _mm256_maskstore_ps(zmm1, arg12)
                        char temp0_742 = _mm256_movemask_ps(zmm1)
                        
                        if ((temp0_742 & 1) == 0)
                            if ((temp0_742 & 2) != 0)
                                goto label_1403481e9
                            
                            goto label_140348ce2
                        
                        var_12a0[0].b = 1
                        
                        if ((temp0_742 & 2) != 0)
                        label_1403481e9:
                            var_12a0[0]:1.b = 1
                            
                            if ((temp0_742 & 4) == 0)
                                goto label_140348cec
                            
                            goto label_1403481fb
                        
                    label_140348ce2:
                        
                        if ((temp0_742 & 4) == 0)
                        label_140348cec:
                            
                            if ((temp0_742 & 8) != 0)
                                goto label_14034820d
                            
                            goto label_140348cf6
                        
                    label_1403481fb:
                        var_12a0[0]:2.b = 1
                        
                        if ((temp0_742 & 8) != 0)
                        label_14034820d:
                            var_12a0[0]:3.b = 1
                            
                            if ((temp0_742 & 0x10) == 0)
                                goto label_140348d00
                            
                            goto label_14034821f
                        
                    label_140348cf6:
                        
                        if ((temp0_742 & 0x10) == 0)
                        label_140348d00:
                            
                            if ((temp0_742 & 0x20) != 0)
                                goto label_140348231
                            
                            goto label_140348d0a
                        
                    label_14034821f:
                        var_12a0[1].b = 1
                        
                        if ((temp0_742 & 0x20) != 0)
                        label_140348231:
                            var_12a0[1]:1.b = 1
                            
                            if ((temp0_742 & 0x40) == 0)
                                goto label_140348d14
                            
                            goto label_140348243
                        
                    label_140348d0a:
                        
                        if ((temp0_742 & 0x40) != 0)
                        label_140348243:
                            var_12a0[1]:2.b = 1
                            
                            if (temp0_742 s< 0)
                                var_12a0[1]:3.b = 1
                        else
                        label_140348d14:
                            
                            if (temp0_742 s< 0)
                                var_12a0[1]:3.b = 1
                        
                        _mm256_movemask_ps(arg5 | zmm5)
                else
                    temp0_527[0].o = arg5[0].o
                    arg10 = var_c00_1
                    var_13a0 = arg15
                    var_1360 = _mm256_maskstore_ps(temp0_702, _mm256_min_ps(var_c60_1, arg15))
                    var_1340 = _mm256_maskstore_ps(temp0_702, _mm256_min_ps(var_c40_1, temp0_689))
                    var_1320 = _mm256_maskstore_ps(temp0_702, _mm256_min_ps(var_c20_1, temp0_690))
                    var_1300 = _mm256_maskstore_ps(temp0_702, _mm256_max_ps(arg10, arg16))
                    var_12e0 = _mm256_maskstore_ps(temp0_702, _mm256_max_ps(var_be0_1, arg7))
                    float temp0_713[0x8] = _mm256_max_ps(var_bc0_1, arg12)
                    var_12c0 = _mm256_maskstore_ps(temp0_702, temp0_713)
                    temp0_713[0].o = zmm5[0].o & data_142fc92e0
                    temp0_713[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(temp0_713[0].o, zx.o(0))
                    temp0_713[0].o ^= arg14[0].o
                    temp0_713[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_713[0].o, zmm0[0].o)
                    char temp0_717 = __vpmovmskb_gpr32d_xmmdq(temp0_713[0].o)
                    
                    if ((temp0_717 & 1) == 0)
                        if ((temp0_717 & 2) != 0)
                            goto label_140348bd8
                        
                        goto label_140348b4e
                    
                    var_12a0[0].b = __vpextrb_memb_xmmdq_immb(zmm5[0].o, 0)
                    
                    if ((temp0_717 & 2) != 0)
                    label_140348bd8:
                        var_12a0[0]:1.b = __vpextrb_memb_xmmdq_immb(zmm5[0].o, 2)
                        arg10 = _mm256_cmpeq_epi32(arg10, arg10)
                        arg15 = var_13a0
                        
                        if ((temp0_717 & 4) == 0)
                            goto label_140348b5e
                        
                        goto label_140348bf7
                    
                label_140348b4e:
                    arg10 = _mm256_cmpeq_epi32(arg10, arg10)
                    arg15 = var_13a0
                    
                    if ((temp0_717 & 4) == 0)
                    label_140348b5e:
                        
                        if ((temp0_717 & 8) != 0)
                            goto label_140348c0c
                        
                        goto label_140348b68
                    
                label_140348bf7:
                    var_12a0[0]:2.b = __vpextrb_memb_xmmdq_immb(zmm5[0].o, 4)
                    
                    if ((temp0_717 & 8) != 0)
                    label_140348c0c:
                        var_12a0[0]:3.b = __vpextrb_memb_xmmdq_immb(zmm5[0].o, 6)
                        
                        if ((temp0_717 & 0x10) == 0)
                            goto label_140348b72
                        
                        goto label_140348c21
                    
                label_140348b68:
                    
                    if ((temp0_717 & 0x10) == 0)
                    label_140348b72:
                        
                        if ((temp0_717 & 0x20) != 0)
                            goto label_140348c36
                        
                        goto label_140348b7c
                    
                label_140348c21:
                    var_12a0[1].b = __vpextrb_memb_xmmdq_immb(zmm5[0].o, 8)
                    
                    if ((temp0_717 & 0x20) != 0)
                    label_140348c36:
                        var_12a0[1]:1.b = __vpextrb_memb_xmmdq_immb(zmm5[0].o, 0xa)
                        
                        if ((temp0_717 & 0x40) == 0)
                            goto label_140348b86
                        
                        goto label_140348c4b
                    
                label_140348b7c:
                    
                    if ((temp0_717 & 0x40) == 0)
                    label_140348b86:
                        
                        if (temp0_717 s< 0)
                            goto label_140348c5f
                        
                        goto label_140348b8f
                    
                label_140348c4b:
                    var_12a0[1]:2.b = __vpextrb_memb_xmmdq_immb(zmm5[0].o, 0xc)
                    
                    if (temp0_717 s>= 0)
                    label_140348b8f:
                        
                        if (temp0_553 != temp0_700)
                        label_140348c7f:
                            arg5 = _mm256_srai_epi32(
                                _mm256_slli_epi32(__vpmovzxwd_ymmqq_memdq(temp0_527[0].o), 0x1f), 
                                0x1f)
                            zmm5 = __vandnps_ymmqq_ymmqq_memqq(temp0_702, var_e20_3)
                            
                            if (_mm256_movemask_ps(zmm5) != 0)
                                goto label_140348c99
                    else
                    label_140348c5f:
                        var_12a0[1]:3.b = __vpextrb_memb_xmmdq_immb(zmm5[0].o, 0xe)
                        
                        if (temp0_553 != temp0_700)
                            goto label_140348c7f
                
                arg9 = var_1360
                arg5 = var_1340
                arg6 = var_1320
                zmm5 = var_1300
                arg7 = var_12e0
                arg8 = var_12c0
                temp0_702[0].o = __vpmovzxbw_xmmdq_memq(var_12a0[0].q)
                arg13 = var_dc0_2
                arg11 = var_de0_2
                arg12 = var_e00_2
                arg14 = var_ac0_1
                arg15 = var_ae0_1
                arg16 = var_b00_1
                zmm1 = var_e20_3
                var_c60_1 = _mm256_maskstore_ps(zmm1, arg9)
                var_c40_1 = _mm256_maskstore_ps(zmm1, arg5)
                var_c20_1 = _mm256_maskstore_ps(zmm1, arg6)
                var_c00_1 = _mm256_maskstore_ps(zmm1, zmm5)
                var_be0_1 = _mm256_maskstore_ps(zmm1, arg7)
                var_bc0_1 = _mm256_maskstore_ps(zmm1, arg8)
                
                if ((temp0_553 & 1) == 0)
                    zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                    
                    if ((temp0_553 & 2) != 0)
                        goto label_140348139
                    
                    goto label_140348df1
                
                var_ba0_1[0] = __vpextrb_memb_xmmdq_immb(temp0_702[0].o, 0)
                zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                
                if ((temp0_553 & 2) != 0)
                label_140348139:
                    var_ba0_1[1] = __vpextrb_memb_xmmdq_immb(temp0_702[0].o, 2)
                    
                    if ((temp0_553 & 4) == 0)
                        goto label_140348dfb
                    
                    goto label_14034814e
                
            label_140348df1:
                
                if ((temp0_553 & 4) == 0)
                label_140348dfb:
                    
                    if ((temp0_553 & 8) != 0)
                        goto label_140348163
                    
                    goto label_140348e05
                
            label_14034814e:
                var_ba0_1[2] = __vpextrb_memb_xmmdq_immb(temp0_702[0].o, 4)
                
                if ((temp0_553 & 8) != 0)
                label_140348163:
                    var_ba0_1[3] = __vpextrb_memb_xmmdq_immb(temp0_702[0].o, 6)
                    
                    if ((temp0_553 & 0x10) == 0)
                        goto label_140348e0f
                    
                    goto label_140348178
                
            label_140348e05:
                
                if ((temp0_553 & 0x10) == 0)
                label_140348e0f:
                    
                    if ((temp0_553 & 0x20) != 0)
                        goto label_14034818d
                    
                    goto label_140348e19
                
            label_140348178:
                var_ba0_1[4] = __vpextrb_memb_xmmdq_immb(temp0_702[0].o, 8)
                
                if ((temp0_553 & 0x20) != 0)
                label_14034818d:
                    var_ba0_1[5] = __vpextrb_memb_xmmdq_immb(temp0_702[0].o, 0xa)
                    
                    if ((temp0_553 & 0x40) == 0)
                        goto label_140348e23
                    
                    goto label_1403481a2
                
            label_140348e19:
                
                if ((temp0_553 & 0x40) != 0)
                label_1403481a2:
                    var_ba0_1[6] = __vpextrb_memb_xmmdq_immb(temp0_702[0].o, 0xc)
                    
                    if (temp0_553 s< 0)
                    label_1403481b5:
                        var_ba0_1[7] = __vpextrb_memb_xmmdq_immb(temp0_702[0].o, 0xe)
                        r10_3 = zx.q(r10_3.d + 8)
                        
                        if (r10_3.d s>= rcx_23)
                            break
                        
                        continue
                else
                label_140348e23:
                    
                    if (temp0_553 s< 0)
                        goto label_1403481b5
            
            r10_3 = zx.q(r10_3.d + 8)
            
            if (r10_3.d s>= rcx_23)
                break
    
    if (r10_3.d s< arg19)
        zmm0[0].o = zx.o(r10_3.d)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
        zmm1[0].o = zx.o(arg19)
        zmm1 = _mm256_broadcastd_epi32(zmm1[0])
        int32_t temp0_756[0x8] = _mm256_mullo_epi32(zmm0, __vpbroadcastd_ymmqq_memd(7))
        arg11 = _mm256_cmpgt_epi32(zmm1, zmm0)
        arg5[0].o = zx.o(0)
        float temp0_758[0x8]
        int32_t temp1_67
        temp0_758, temp1_67 = _mm256_i32gather_ps(arg5, *(arg4 + (temp0_756[0].q << 2)), arg11)
        arg5 = temp0_758
        var_13a0 = arg5
        arg10 = __vpbroadcastd_ymmqq_memd(0x1c)
        zmm0 = _mm256_mullo_epi32(zmm0, arg10)
        arg12 = __vpbroadcastd_ymmqq_memd(4)
        zmm1 = _mm256_add_epi32(zmm0, arg12)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        float temp0_764[0x8]
        int32_t temp1_68
        temp0_764, temp1_68 = _mm256_i32gather_ps(arg6, *(arg4 + zmm1[0].q), arg11)
        arg13 = __vpbroadcastd_ymmqq_memd(8)
        zmm1 = _mm256_add_epi32(zmm0, arg13)
        zmm5[0].o = zx.o(0)
        float temp0_767[0x8]
        int32_t temp1_69
        temp0_767, temp1_69 = _mm256_i32gather_ps(zmm5, *(arg4 + zmm1[0].q), arg11)
        arg14 = __vpbroadcastd_ymmqq_memd(0xc)
        zmm1 = _mm256_add_epi32(zmm0, arg14)
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        float temp0_771[0x8]
        int32_t temp1_70
        temp0_771, temp1_70 = _mm256_i32gather_ps(arg5, *(arg4 + zmm1[0].q), arg11)
        arg5 = temp0_771
        uint32_t var_1380_4[0x8] = arg5
        arg15 = __vpbroadcastd_ymmqq_memd(0x10)
        zmm1 = _mm256_add_epi32(zmm0, arg15)
        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        float temp0_775[0x8]
        int32_t temp1_71
        temp0_775, temp1_71 = _mm256_i32gather_ps(arg8, *(arg4 + zmm1[0].q), arg11)
        arg8 = temp0_775
        arg16 = __vpbroadcastd_ymmqq_memd(0x14)
        zmm1 = _mm256_add_epi32(zmm0, arg16)
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        float temp0_779[0x8]
        int32_t temp1_72
        temp0_779, temp1_72 = _mm256_i32gather_ps(arg5, *(arg4 + zmm1[0].q), arg11)
        arg5 = temp0_779
        uint32_t var_e20_4[0x8] = arg5
        uint32_t temp0_780[0x8] = __vpbroadcastd_ymmqq_memd(0x18)
        zmm0 = arg11 & _mm256_add_epi32(zmm0, temp0_780)
        int64_t r11_5 = sx.q(zmm0[0])
        int64_t r14_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        int64_t r15_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        int64_t rdi_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
        int64_t rsi_18 = sx.q(zmm0[0])
        int64_t rcx_34 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        int64_t rdx_13 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        int64_t rbx_15 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = zx.o(0)
        zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zx.o(0), arg4[r11_5], 0)
        zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, arg4[r14_4], 2)
        zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, arg4[r15_5], 4)
        zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, arg4[rdi_8], 6)
        zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, arg4[rsi_18], 8)
        zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, arg4[rcx_34], 0xa)
        zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, arg4[rdx_13], 0xc)
        zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, arg4[rbx_15], 0xe)
        int64_t rbx_16 = sx.q(r10_3.d << 2)
        zmm2 = _mm256_maskload_ps(arg11, *(arg1 + rbx_16))
        uint32_t temp0_798[0x8] = _mm256_cmpeq_epi32(arg5, arg5)
        zmm2 = _mm256_cmpeq_epi32(zmm2, temp0_798) ^ temp0_798
        temp0_798[0].o = _mm256_extracti128_si256(zmm2, 1)
        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_798[0].o)
        zmm0[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zx.o(0))
        zmm1[0].o = _mm256_extracti128_si256(arg11, 1)
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
        zmm0[0].o &= not.o(zmm1[0].o)
        zmm1[0].o = zmm0[0].o & zmm2[0].o
        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        char temp0_806 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
        
        if (temp0_806 != 0)
            float var_1080_4[0x8] = arg8
            int32_t var_1100_5[0x8] = temp0_767
            var_1040.32 = temp0_764
            var_d60[0].o = zmm1[0].o
            int32_t temp0_808[0x8] = _mm256_cvtepi16_epi32(zmm1[0].o)
            zmm1 = _mm256_slli_epi32(_mm256_maskload_ps(arg11, *(arg2 + rbx_16)), 6)
            zmm0[0].o = zx.o(0)
            float temp0_811[0x8]
            int32_t temp1_73
            temp0_811, temp1_73 = _mm256_i32gather_ps(zmm0, *(arg3 + zmm1[0].q), temp0_808)
            var_10e0.32 = temp0_811
            temp0_811[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_811[0].o, temp0_811[0].o)
            float temp0_813[0x8]
            int32_t temp1_74
            temp0_813, temp1_74 =
                _mm256_i32gather_ps(temp0_811, *(arg3 + (zmm1 | arg12)[0].q), temp0_808)
            temp0_813[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_813[0].o, temp0_813[0].o)
            float temp0_815[0x8]
            int32_t temp1_75
            temp0_815, temp1_75 =
                _mm256_i32gather_ps(temp0_813, *(arg3 + (zmm1 | arg13)[0].q), temp0_808)
            temp0_815[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_815[0].o, temp0_815[0].o)
            float temp0_817[0x8]
            int32_t temp1_76
            temp0_817, temp1_76 =
                _mm256_i32gather_ps(temp0_815, *(arg3 + (zmm1 | arg14)[0].q), temp0_808)
            arg15[0].o = zx.o(0)
            float temp0_818[0x8]
            int32_t temp1_77
            temp0_818, temp1_77 =
                _mm256_i32gather_ps(arg15, *(arg3 + (zmm1 | arg15)[0].q), temp0_808)
            arg15 = temp0_818
            arg16[0].o = zx.o(0)
            float temp0_819[0x8]
            int32_t temp1_78
            temp0_819, temp1_78 =
                _mm256_i32gather_ps(arg16, *(arg3 + (zmm1 | arg16)[0].q), temp0_808)
            arg16 = temp0_819
            arg14[0].o = zx.o(0)
            float temp0_820[0x8]
            int32_t temp1_79
            temp0_820, temp1_79 =
                _mm256_i32gather_ps(arg14, *(arg3 + (zmm1 | temp0_780)[0].q), temp0_808)
            arg14 = temp0_820
            arg13[0].o = zx.o(0)
            float temp0_821[0x8]
            int32_t temp1_80
            temp0_821, temp1_80 =
                _mm256_i32gather_ps(arg13, *(arg3 + (zmm1 | arg10)[0].q), temp0_808)
            uint32_t temp0_823[0x8] = _mm256_or_ps(zmm1, _mm256_broadcast_ss(4.48415509e-44f))
            arg12[0].o = zx.o(0)
            float temp0_824[0x8]
            int32_t temp1_81
            temp0_824, temp1_81 = _mm256_i32gather_ps(arg12, *(arg3 + temp0_823[0].q), temp0_808)
            arg5 = _mm256_broadcast_ss(5.04467447e-44f)
            arg6 = _mm256_or_ps(zmm1, arg5)
            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
            float temp0_828[0x8]
            int32_t temp1_82
            temp0_828, temp1_82 = _mm256_i32gather_ps(arg11, *(arg3 + arg6[0].q), temp0_808)
            float temp0_829[0x8] = _mm256_broadcast_ss(5.60519386e-44f)
            zmm2 = _mm256_or_ps(zmm1, temp0_829)
            arg10[0].o = zx.o(0)
            float temp0_831[0x8]
            int32_t temp1_83
            temp0_831, temp1_83 = _mm256_i32gather_ps(arg10, *(arg3 + zmm2[0].q), temp0_808)
            zmm0 = _mm256_or_ps(zmm1, _mm256_broadcast_ss(6.16571324e-44f))
            temp0_780[0].o = zx.o(0)
            float temp0_834[0x8]
            int32_t temp1_84
            temp0_834, temp1_84 = _mm256_i32gather_ps(temp0_780, *(arg3 + zmm0[0].q), temp0_808)
            float temp0_835[0x8] = _mm256_broadcast_ss(6.72623263e-44f)
            zmm2 = _mm256_or_ps(zmm1, temp0_835)
            temp0_829[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_829[0].o, temp0_829[0].o)
            float temp0_838[0x8]
            int32_t temp1_85
            temp0_838, temp1_85 = _mm256_i32gather_ps(temp0_829, *(arg3 + zmm2[0].q), temp0_808)
            zmm2 = _mm256_or_ps(zmm1, _mm256_broadcast_ss(7.28675201e-44f))
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            float temp0_842[0x8]
            int32_t temp1_86
            temp0_842, temp1_86 = _mm256_i32gather_ps(arg5, *(arg3 + zmm2[0].q), temp0_808)
            arg5 = temp0_842
            zmm2 = _mm256_or_ps(zmm1, _mm256_broadcast_ss(7.8472714e-44f))
            temp0_835[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_835[0].o, temp0_835[0].o)
            float temp0_846[0x8]
            int32_t temp1_87
            temp0_846, temp1_87 = _mm256_i32gather_ps(temp0_835, *(arg3 + zmm2[0].q), temp0_808)
            arg8 = temp1_87
            zmm2 = _mm256_broadcast_ss(8.40779079e-44f)
            zmm1 = _mm256_or_ps(zmm1, zmm2)
            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
            float temp0_850[0x8]
            int32_t temp1_88
            temp0_850, temp1_88 = _mm256_i32gather_ps(arg8, *(arg3 + zmm1[0].q), temp0_808)
            zmm5 = temp1_88
            float var_900[0x8] = var_10e0.32
            float var_8e0[0x8] = temp0_813
            float var_8c0[0x8] = temp0_815
            float var_8a0[0x8] = temp0_817
            uint32_t var_880_1[0x8] = arg15
            uint32_t var_860_1[0x8] = arg16
            uint32_t var_840_1[0x8] = arg14
            uint32_t var_820_1[0x8] = temp0_821
            uint32_t var_800_1[0x8] = temp0_824
            uint32_t var_7e0_1[0x8] = temp0_828
            uint32_t var_7c0_1[0x8] = temp0_831
            uint32_t var_7a0_1[0x8] = temp0_834
            float var_780_1[0x8] = temp0_838
            uint32_t var_760_1[0x8] = arg5
            float var_740_1[0x8] = temp0_846
            float var_720_1[0x8] = temp0_850
            temp0_846[0].o = arg17[9]
            zmm2[0].o = arg17[0xd]
            arg5[0].o = arg17[2]
            arg14[0].o = arg17[3]
            zmm5[0].o = arg17[6]
            temp0_850[0].o = arg17[0xa]
            temp0_838[0].o = arg17[0xe]
            arg15[0].o = arg17[7]
            arg16[0].o = arg17[0xb]
            int64_t i_1 = 0
            float temp0_851[0x8] = _mm256_broadcastss_ps(temp0_846[0].o)
            arg7 = _mm256_broadcastss_ps(zmm2[0].o)
            arg10 = _mm256_broadcastss_ps(arg5[0].o)
            arg11 = _mm256_broadcastss_ps(zmm5[0].o)
            arg12 = _mm256_broadcastss_ps(temp0_850[0].o)
            arg13 = _mm256_broadcastss_ps(temp0_838[0].o)
            arg14 = _mm256_broadcastss_ps(arg14[0].o)
            arg15 = _mm256_broadcastss_ps(arg15[0].o)
            arg16 = _mm256_broadcastss_ps(arg16[0].o)
            
            do
                float temp0_860[0x8] = _mm256_broadcast_ss(*arg17)
                zmm5 = *(&var_900 + i_1)
                arg6 = *(&var_8e0 + i_1)
                zmm2 = *(&var_8c0 + i_1)
                arg5 = *(&var_8a0 + i_1)
                float temp0_861[0x8] = _mm256_fmadd_ps(temp0_860, zmm5, arg9)
                float temp0_863[0x8] =
                    _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[4]), arg6, temp0_861)
                float temp0_865[0x8] =
                    _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[8]), zmm2, temp0_863)
                *(&var_1360 + i_1) =
                    _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[0xc]), arg5, temp0_865)
                float temp0_869[0x8] = _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[1]), zmm5, arg9)
                *(&var_1340 + i_1) = _mm256_fmadd_ps(
                    _mm256_fmadd_ps(
                        _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[5]), arg6, temp0_869), zmm2, 
                        temp0_851), 
                    arg5, arg7)
                *(&var_1320 + i_1) = _mm256_fmadd_ps(
                    _mm256_fmadd_ps(
                        _mm256_fmadd_ps(_mm256_fmadd_ps(arg10, zmm5, arg9), arg6, arg11), zmm2, 
                        arg12), 
                    arg5, arg13)
                zmm2 = _mm256_fmadd_ps(zmm2, arg16, 
                    _mm256_fmadd_ps(arg6, arg15, _mm256_fmadd_ps(zmm5, arg14, arg9)))
                *(&var_1300 + i_1) = _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[0xf]), arg5, zmm2)
                i_1 -= -0x80
            while (i_1 != 0x200)
            
            arg10 = var_1360
            arg5 = var_1340
            uint32_t var_1160_8[0x8] = arg5
            arg6 = var_12e0
            float var_10c0_6[0x8] = arg6
            float temp0_883[0x8] = __vaddps_ymmqq_ymmqq_memqq(var_13a0, var_1380_4)
            zmm2 = _mm256_broadcast_ss(0.5f)
            float temp0_885[0x8] = _mm256_mul_ps(temp0_883, zmm2)
            zmm5 = _mm256_mul_ps(temp0_885, arg10)
            float temp0_887[0x8] = _mm256_mul_ps(temp0_885, arg5)
            arg11 = _mm256_mul_ps(__vaddps_ymmqq_ymmqq_memqq(var_1040.32, var_1080_4), zmm2)
            zmm5 = _mm256_fmadd_ps(zmm5, arg11, arg6)
            float temp0_891[0x8] = _mm256_fmadd_ps(temp0_887, arg11, var_12c0)
            arg16 = var_1320
            zmm1 = var_12a0
            float var_da0_4[0x8] = zmm1
            arg12 = _mm256_fmadd_ps(_mm256_mul_ps(temp0_885, arg16), arg11, zmm1)
            arg11 = _mm256_mul_ps(arg11, var_1280)
            arg13 = var_1300
            float temp0_895[0x8] = _mm256_fmadd_ps(temp0_885, arg13, arg11)
            arg11 = _mm256_mul_ps(__vaddps_ymmqq_ymmqq_memqq(var_e20_4, var_1100_5), zmm2)
            zmm5 = _mm256_fmadd_ps(zmm5, arg11, var_1260)
            var_10e0.32 = var_1260
            zmm1 = var_1240
            float temp0_899[0x8] = _mm256_fmadd_ps(temp0_891, arg11, zmm1)
            arg12 = _mm256_fmadd_ps(arg12, arg11, var_1220)
            arg6 = var_1200
            arg11 = _mm256_fmadd_ps(arg11, arg6, temp0_895)
            var_d80.32 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_11e0)
            arg14 = __vaddps_ymmqq_ymmqq_memqq(temp0_899, var_11c0)
            float temp0_904[0x8] = __vaddps_ymmqq_ymmqq_memqq(arg12, var_11a0)
            float temp0_905[0x8] = __vaddps_ymmqq_ymmqq_memqq(arg11, var_1180)
            var_1360 = arg10
            var_1340 = var_1160_8
            var_1320 = arg16
            var_1300 = arg13
            arg13 = var_10c0_6
            uint32_t var_a00_4[0x8] = arg13
            zmm0 = var_12c0
            float var_9e0_4[0x8] = zmm0
            zmm5 = var_da0_4
            int32_t var_9c0_4[0x8] = zmm5
            float var_9a0_4[0x8] = var_1280
            uint32_t var_a80_4[0x8] = var_1260
            float var_a60_4[0x8] = zmm1
            uint32_t var_a40_4[0x8] = var_1220
            float var_a20_4[0x8] = arg6
            float temp0_906[0x8] = __vsubps_ymmqq_ymmqq_memqq(var_1080_4, var_1040.32)
            arg5 = __vsubps_ymmqq_ymmqq_memqq(var_e20_4, var_1100_5)
            arg12 = __vsubps_ymmqq_ymmqq_memqq(var_1380_4, var_13a0)
            float temp0_909[0x8] = _mm256_mul_ps(temp0_906, zmm2)
            arg12 = _mm256_mul_ps(arg12, zmm2)
            zmm2 = _mm256_mul_ps(arg5, zmm2)
            arg15 = var_d80.32
            uint32_t var_980_2[0x8] = arg15
            uint32_t var_960_2[0x8] = arg14
            float var_940_2[0x8] = temp0_904
            uint32_t var_920_2[0x8] = temp0_905
            arg5 = _mm256_mul_ps(arg12, arg10)
            arg11 = _mm256_mul_ps(arg12, var_1160_8)
            float temp0_914[0x8] = _mm256_mul_ps(arg12, arg16)
            float temp0_915[0x8] = _mm256_mul_ps(temp0_909, arg13)
            arg10 = _mm256_mul_ps(temp0_909, zmm0)
            float temp0_917[0x8] = _mm256_mul_ps(temp0_909, zmm5)
            arg7 = _mm256_broadcast_ss(nanf)
            arg5 = _mm256_add_ps(_mm256_and_ps(arg5, arg7), _mm256_and_ps(temp0_915, arg7))
            float temp0_924[0x8] =
                _mm256_add_ps(_mm256_and_ps(arg11, arg7), _mm256_and_ps(arg10, arg7))
            float temp0_927[0x8] =
                _mm256_add_ps(_mm256_and_ps(temp0_914, arg7), _mm256_and_ps(temp0_917, arg7))
            float temp0_928[0x8] = __vmulps_ymmqq_ymmqq_memqq(zmm2, var_10e0.32)
            arg10 = __vmulps_ymmqq_ymmqq_memqq(zmm2, zmm1)
            zmm2 = __vmulps_ymmqq_ymmqq_memqq(zmm2, var_1220)
            arg5 = _mm256_add_ps(arg5, _mm256_and_ps(temp0_928, arg7))
            float temp0_934[0x8] = _mm256_add_ps(temp0_924, _mm256_and_ps(arg10, arg7))
            zmm2 = _mm256_add_ps(temp0_927, _mm256_and_ps(zmm2, arg7))
            zmm0 = arg15
            arg11 = _mm256_sub_ps(arg15, arg5)
            zmm1 = arg14
            arg9 = _mm256_sub_ps(arg14, temp0_934)
            arg14 = _mm256_sub_ps(temp0_904, zmm2)
            arg10 = _mm256_add_ps(arg15, arg5)
            zmm5 = _mm256_add_ps(zmm1, temp0_934)
            zmm1[0].o = __vpmovzxbw_xmmdq_memq(var_ba0_1)
            arg12 = _mm256_add_ps(temp0_904, zmm2)
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            arg7[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
            zmm0[0].o = arg7[0].o & not.o(var_d60[0].o)
            temp0_934[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
            temp0_934[0].o = __vpsraw_xmmdq_xmmdq_immb(temp0_934[0].o, 0xf)
            temp0_934[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_934[0].o, zmm0[0].o)
            char temp0_949 = __vpmovmskb_gpr32d_xmmdq(temp0_934[0].o)
            temp0_934[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_934[0].o, temp0_934[0].o)
            arg7[0].o ^= temp0_934[0].o
            arg7 = _mm256_cvtepi16_epi32(arg7[0].o)
            
            if (temp0_949 == 0)
                zmm1[0].o = zx.o(0)
                arg8 = temp0_808
                zmm2 = _mm256_andnot_ps(arg7, arg8)
                
                if (_mm256_movemask_ps(zmm2) != 0)
                label_140349f8e:
                    arg5 = arg7 ^ _mm256_cmpeq_epi32(arg5, arg5)
                    var_1360 = _mm256_maskstore_ps(arg5, arg11)
                    var_1340 = _mm256_maskstore_ps(arg5, arg9)
                    var_1320 = _mm256_maskstore_ps(arg5, arg14)
                    var_1300 = _mm256_maskstore_ps(arg5, arg10)
                    var_12e0 = _mm256_maskstore_ps(arg5, zmm5)
                    var_12c0 = _mm256_maskstore_ps(arg5, arg12)
                    char temp0_1084 = _mm256_movemask_ps(arg5)
                    
                    if ((temp0_1084 & 1) == 0)
                        if ((temp0_1084 & 2) != 0)
                            goto label_14034aa36
                        
                        goto label_140349fdc
                    
                    var_12a0[0].b = 1
                    
                    if ((temp0_1084 & 2) != 0)
                    label_14034aa36:
                        var_12a0[0]:1.b = 1
                        
                        if ((temp0_1084 & 4) == 0)
                            goto label_140349fe4
                        
                        goto label_14034aa46
                    
                label_140349fdc:
                    
                    if ((temp0_1084 & 4) == 0)
                    label_140349fe4:
                        
                        if ((temp0_1084 & 8) != 0)
                            goto label_14034aa56
                        
                        goto label_140349fec
                    
                label_14034aa46:
                    var_12a0[0]:2.b = 1
                    
                    if ((temp0_1084 & 8) != 0)
                    label_14034aa56:
                        var_12a0[0]:3.b = 1
                        
                        if ((temp0_1084 & 0x10) == 0)
                            goto label_140349ff4
                        
                        goto label_14034aa66
                    
                label_140349fec:
                    
                    if ((temp0_1084 & 0x10) == 0)
                    label_140349ff4:
                        
                        if ((temp0_1084 & 0x20) != 0)
                            goto label_14034aa76
                        
                        goto label_140349ffc
                    
                label_14034aa66:
                    var_12a0[1].b = 1
                    
                    if ((temp0_1084 & 0x20) != 0)
                    label_14034aa76:
                        var_12a0[1]:1.b = 1
                        
                        if ((temp0_1084 & 0x40) == 0)
                            goto label_14034a004
                        
                        goto label_14034aa86
                    
                label_140349ffc:
                    
                    if ((temp0_1084 & 0x40) != 0)
                    label_14034aa86:
                        var_12a0[1]:2.b = 1
                        
                        if (temp0_1084 s< 0)
                            var_12a0[1]:3.b = 1
                    else
                    label_14034a004:
                        
                        if (temp0_1084 s< 0)
                            var_12a0[1]:3.b = 1
                    
                    _mm256_movemask_ps(zmm1 | zmm2)
            else
                var_1380_4[0].o = zmm0[0].o
                arg15 = var_c00_1
                zmm2 = arg12
                var_13a0 = arg11
                float temp0_952[0x8] = _mm256_min_ps(var_c60_1, arg11)
                arg16 = var_be0_1
                arg11 = zmm5
                var_1360 = _mm256_maskstore_ps(arg7, temp0_952)
                var_1340 = _mm256_maskstore_ps(arg7, _mm256_min_ps(var_c40_1, arg9))
                var_1320 = _mm256_maskstore_ps(arg7, _mm256_min_ps(var_c20_1, arg14))
                arg12 = zmm2
                var_1300 = _mm256_maskstore_ps(arg7, _mm256_max_ps(arg15, arg10))
                arg13 = arg11
                var_12e0 = _mm256_maskstore_ps(arg7, _mm256_max_ps(arg16, arg11))
                zmm5 = _mm256_max_ps(var_bc0_1, zmm2)
                var_12c0 = _mm256_maskstore_ps(arg7, zmm5)
                zmm5[0].o = zmm1[0].o & data_142fc92e0
                arg5[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                arg5[0].o ^= temp0_934[0].o
                arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, var_c40_1[0].o)
                char temp0_966 = __vpmovmskb_gpr32d_xmmdq(arg5[0].o)
                
                if ((temp0_966 & 1) != 0)
                    var_12a0[0].b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0)
                
                if ((temp0_966 & 2) != 0)
                    var_12a0[0]:1.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 2)
                
                arg8 = temp0_808
                zmm5 = arg13
                arg11 = var_13a0
                
                if ((temp0_966 & 4) == 0)
                    if ((temp0_966 & 8) != 0)
                        goto label_140349f07
                    
                    goto label_140349815
                
                var_12a0[0]:2.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 4)
                
                if ((temp0_966 & 8) != 0)
                label_140349f07:
                    var_12a0[0]:3.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 6)
                    
                    if ((temp0_966 & 0x10) == 0)
                        goto label_14034981e
                    
                    goto label_140349f1b
                
            label_140349815:
                
                if ((temp0_966 & 0x10) == 0)
                label_14034981e:
                    
                    if ((temp0_966 & 0x20) != 0)
                        goto label_140349f2f
                    
                    goto label_140349827
                
            label_140349f1b:
                var_12a0[1].b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 8)
                
                if ((temp0_966 & 0x20) != 0)
                label_140349f2f:
                    var_12a0[1]:1.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xa)
                    
                    if ((temp0_966 & 0x40) == 0)
                        goto label_140349830
                    
                    goto label_140349f43
                
            label_140349827:
                
                if ((temp0_966 & 0x40) == 0)
                label_140349830:
                    
                    if (temp0_966 s< 0)
                        goto label_140349f56
                    
                    goto label_140349838
                
            label_140349f43:
                var_12a0[1]:2.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xc)
                
                if (temp0_966 s>= 0)
                label_140349838:
                    
                    if (temp0_806 != temp0_949)
                    label_140349f75:
                        zmm1 = _mm256_srai_epi32(
                            _mm256_slli_epi32(__vpmovzxwd_ymmqq_memdq(var_1380_4[0].o), 0x1f), 0x1f)
                        zmm2 = _mm256_andnot_ps(arg7, arg8)
                        
                        if (_mm256_movemask_ps(zmm2) != 0)
                            goto label_140349f8e
                else
                label_140349f56:
                    var_12a0[1]:3.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xe)
                    
                    if (temp0_806 != temp0_949)
                        goto label_140349f75
            
            zmm2 = var_1360
            arg5 = var_1340
            arg6 = var_1320
            zmm5 = var_1300
            zmm0 = var_12c0
            zmm1[0].o = __vpmovzxbw_xmmdq_memq(var_12a0[0].q)
            var_c60_1 = _mm256_maskstore_ps(arg8, zmm2)
            var_c40_1 = _mm256_maskstore_ps(arg8, arg5)
            var_c20_1 = _mm256_maskstore_ps(arg8, arg6)
            var_c00_1 = _mm256_maskstore_ps(arg8, zmm5)
            var_be0_1 = _mm256_maskstore_ps(arg8, var_12e0)
            var_bc0_1 = _mm256_maskstore_ps(arg8, zmm0)
            
            if ((temp0_806 & 1) == 0)
                if ((temp0_806 & 2) != 0)
                    goto label_14034a927
                
                goto label_14034a094
            
            var_ba0_1[0] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0)
            
            if ((temp0_806 & 2) != 0)
            label_14034a927:
                var_ba0_1[1] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 2)
                
                if ((temp0_806 & 4) == 0)
                    goto label_14034a09c
                
                goto label_14034a93a
            
        label_14034a094:
            
            if ((temp0_806 & 4) == 0)
            label_14034a09c:
                
                if ((temp0_806 & 8) != 0)
                    goto label_14034a94d
                
                goto label_14034a0a4
            
        label_14034a93a:
            var_ba0_1[2] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 4)
            
            if ((temp0_806 & 8) != 0)
            label_14034a94d:
                var_ba0_1[3] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 6)
                
                if ((temp0_806 & 0x10) == 0)
                    goto label_14034a0ac
                
                goto label_14034a960
            
        label_14034a0a4:
            
            if ((temp0_806 & 0x10) == 0)
            label_14034a0ac:
                
                if ((temp0_806 & 0x20) != 0)
                    goto label_14034a973
                
                goto label_14034a0b4
            
        label_14034a960:
            var_ba0_1[4] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 8)
            
            if ((temp0_806 & 0x20) != 0)
            label_14034a973:
                var_ba0_1[5] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xa)
                
                if ((temp0_806 & 0x40) == 0)
                    goto label_14034a0bc
                
                goto label_14034a986
            
        label_14034a0b4:
            
            if ((temp0_806 & 0x40) != 0)
            label_14034a986:
                var_ba0_1[6] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xc)
                
                if (temp0_806 s< 0)
                    var_ba0_1[7] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xe)
            else
            label_14034a0bc:
                
                if (temp0_806 s< 0)
                    var_ba0_1[7] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xe)
    
    arg7 = var_c60_1
    zmm5 = var_c40_1
    arg5 = var_c00_1
    zmm2 = var_be0_1
    zmm0[0].o = __vpmovzxbw_xmmdq_memq(var_ba0_1)
    i_2 = zx.q(i_5)
    float* rsi_20
    
    if ((i_2.b & 1) == 0)
        rsi_20 = arg18
        
        if ((i_2.b & 2) != 0)
            goto label_14034a488
        
        goto label_14034a124
    
    uint32_t var_fe0_1 = arg7[0]
    rsi_20 = arg18
    
    if ((i_2.b & 2) != 0)
    label_14034a488:
        float var_fc4_1 = __vextractps_memd_xmmdq_immb(arg7[0].o, 1)
        
        if ((i_2.b & 4) == 0)
            goto label_14034a12c
        
        goto label_14034a49b
    
label_14034a124:
    
    if ((i_2.b & 4) == 0)
    label_14034a12c:
        
        if ((i_2.b & 8) != 0)
            goto label_14034a4ae
        
        goto label_14034a134
    
label_14034a49b:
    float var_fa8_1 = __vextractps_memd_xmmdq_immb(arg7[0].o, 2)
    
    if ((i_2.b & 8) != 0)
    label_14034a4ae:
        float var_f8c_1 = __vextractps_memd_xmmdq_immb(arg7[0].o, 3)
        
        if ((i_2.b & 0x10) == 0)
            goto label_14034a13c
        
        goto label_14034a4c1
    
label_14034a134:
    
    if ((i_2.b & 0x10) == 0)
    label_14034a13c:
        
        if ((i_2.b & 0x20) != 0)
            goto label_14034a4d8
        
        goto label_14034a144
    
label_14034a4c1:
    arg8[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
    float var_f70_1 = arg8[0]
    
    if ((i_2.b & 0x20) != 0)
    label_14034a4d8:
        arg8[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
        float var_f54_1 = __vextractps_memd_xmmdq_immb(arg8[0].o, 1)
        
        if ((i_2.b & 0x40) == 0)
            goto label_14034a14c
        
        goto label_14034a4f1
    
label_14034a144:
    
    if ((i_2.b & 0x40) == 0)
    label_14034a14c:
        
        if (i_5.b s< 0)
            goto label_14034a50a
        
        goto label_14034a154
    
label_14034a4f1:
    arg8[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
    float var_f38_1 = __vextractps_memd_xmmdq_immb(arg8[0].o, 2)
    
    if (i_5.b s< 0)
    label_14034a50a:
        arg7[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
        float var_f1c_1 = __vextractps_memd_xmmdq_immb(arg7[0].o, 3)
        
        if ((i_2.b & 1) == 0)
            goto label_14034a15c
        
        goto label_14034a523
    
label_14034a154:
    
    if ((i_2.b & 1) == 0)
    label_14034a15c:
        
        if ((i_2.b & 2) != 0)
            goto label_14034a534
        
        goto label_14034a164
    
label_14034a523:
    int32_t var_fdc = zmm5[0]
    
    if ((i_2.b & 2) != 0)
    label_14034a534:
        float var_fc0_1 = __vextractps_memd_xmmdq_immb(zmm5[0].o, 1)
        
        if ((i_2.b & 4) == 0)
            goto label_14034a16c
        
        goto label_14034a547
    
label_14034a164:
    
    if ((i_2.b & 4) == 0)
    label_14034a16c:
        
        if ((i_2.b & 8) != 0)
            goto label_14034a55a
        
        goto label_14034a174
    
label_14034a547:
    float var_fa4_1 = __vextractps_memd_xmmdq_immb(zmm5[0].o, 2)
    
    if ((i_2.b & 8) != 0)
    label_14034a55a:
        float var_f88_1 = __vextractps_memd_xmmdq_immb(zmm5[0].o, 3)
        
        if ((i_2.b & 0x10) == 0)
            goto label_14034a17c
        
        goto label_14034a56d
    
label_14034a174:
    
    if ((i_2.b & 0x10) == 0)
    label_14034a17c:
        
        if ((i_2.b & 0x20) != 0)
            goto label_14034a584
        
        goto label_14034a184
    
label_14034a56d:
    arg7[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
    uint32_t var_f6c_1 = arg7[0]
    
    if ((i_2.b & 0x20) != 0)
    label_14034a584:
        arg7[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
        float var_f50_1 = __vextractps_memd_xmmdq_immb(arg7[0].o, 1)
        
        if ((i_2.b & 0x40) == 0)
            goto label_14034a18c
        
        goto label_14034a59d
    
label_14034a184:
    
    if ((i_2.b & 0x40) == 0)
    label_14034a18c:
        
        if (i_5.b s< 0)
            goto label_14034a5b6
        
        goto label_14034a194
    
label_14034a59d:
    arg7[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
    float var_f34_1 = __vextractps_memd_xmmdq_immb(arg7[0].o, 2)
    
    if (i_5.b s< 0)
    label_14034a5b6:
        zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
        float var_f18_1 = __vextractps_memd_xmmdq_immb(zmm5[0].o, 3)
        
        if ((i_2.b & 1) == 0)
            goto label_14034a19c
        
        goto label_14034a5cf
    
label_14034a194:
    
    if ((i_2.b & 1) == 0)
    label_14034a19c:
        
        if ((i_2.b & 2) != 0)
            goto label_14034a5e0
        
        goto label_14034a1a4
    
label_14034a5cf:
    float var_fd8 = var_c20_1[0]
    
    if ((i_2.b & 2) != 0)
    label_14034a5e0:
        float var_fbc_1 = __vextractps_memd_xmmdq_immb(var_c20_1[0].o, 1)
        
        if ((i_2.b & 4) == 0)
            goto label_14034a1ac
        
        goto label_14034a5f3
    
label_14034a1a4:
    
    if ((i_2.b & 4) == 0)
    label_14034a1ac:
        
        if ((i_2.b & 8) != 0)
            goto label_14034a606
        
        goto label_14034a1b4
    
label_14034a5f3:
    float var_fa0_1 = __vextractps_memd_xmmdq_immb(var_c20_1[0].o, 2)
    
    if ((i_2.b & 8) != 0)
    label_14034a606:
        float var_f84_1 = __vextractps_memd_xmmdq_immb(var_c20_1[0].o, 3)
        
        if ((i_2.b & 0x10) == 0)
            goto label_14034a1bc
        
        goto label_14034a619
    
label_14034a1b4:
    
    if ((i_2.b & 0x10) == 0)
    label_14034a1bc:
        
        if ((i_2.b & 0x20) != 0)
            goto label_14034a630
        
        goto label_14034a1c4
    
label_14034a619:
    zmm5[0].o = _mm256_extractf128_ps(var_c20_1[0].o, 1)
    int32_t var_f68_1 = zmm5[0]
    
    if ((i_2.b & 0x20) != 0)
    label_14034a630:
        zmm5[0].o = _mm256_extractf128_ps(var_c20_1[0].o, 1)
        float var_f4c_1 = __vextractps_memd_xmmdq_immb(zmm5[0].o, 1)
        
        if ((i_2.b & 0x40) == 0)
            goto label_14034a1cc
        
        goto label_14034a649
    
label_14034a1c4:
    
    if ((i_2.b & 0x40) == 0)
    label_14034a1cc:
        
        if (i_5.b s< 0)
            goto label_14034a662
        
        goto label_14034a1d4
    
label_14034a649:
    zmm5[0].o = _mm256_extractf128_ps(var_c20_1[0].o, 1)
    float var_f30_1 = __vextractps_memd_xmmdq_immb(zmm5[0].o, 2)
    
    if (i_5.b s< 0)
    label_14034a662:
        var_c20_1[0].o = _mm256_extractf128_ps(var_c20_1[0].o, 1)
        float var_f14_1 = __vextractps_memd_xmmdq_immb(var_c20_1[0].o, 3)
        
        if ((i_2.b & 1) == 0)
            goto label_14034a1dc
        
        goto label_14034a67b
    
label_14034a1d4:
    
    if ((i_2.b & 1) == 0)
    label_14034a1dc:
        
        if ((i_2.b & 2) != 0)
            goto label_14034a68c
        
        goto label_14034a1e4
    
label_14034a67b:
    uint32_t var_fd4 = arg5[0]
    
    if ((i_2.b & 2) != 0)
    label_14034a68c:
        float var_fb8_1 = __vextractps_memd_xmmdq_immb(arg5[0].o, 1)
        
        if ((i_2.b & 4) == 0)
            goto label_14034a1ec
        
        goto label_14034a69f
    
label_14034a1e4:
    
    if ((i_2.b & 4) == 0)
    label_14034a1ec:
        
        if ((i_2.b & 8) != 0)
            goto label_14034a6b2
        
        goto label_14034a1f4
    
label_14034a69f:
    float var_f9c_1 = __vextractps_memd_xmmdq_immb(arg5[0].o, 2)
    
    if ((i_2.b & 8) != 0)
    label_14034a6b2:
        float var_f80_1 = __vextractps_memd_xmmdq_immb(arg5[0].o, 3)
        
        if ((i_2.b & 0x10) == 0)
            goto label_14034a1fc
        
        goto label_14034a6c5
    
label_14034a1f4:
    
    if ((i_2.b & 0x10) == 0)
    label_14034a1fc:
        
        if ((i_2.b & 0x20) != 0)
            goto label_14034a6dc
        
        goto label_14034a204
    
label_14034a6c5:
    var_c20_1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
    float var_f64_1 = var_c20_1[0]
    
    if ((i_2.b & 0x20) != 0)
    label_14034a6dc:
        var_c20_1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
        float var_f48_1 = __vextractps_memd_xmmdq_immb(var_c20_1[0].o, 1)
        
        if ((i_2.b & 0x40) == 0)
            goto label_14034a20c
        
        goto label_14034a6f5
    
label_14034a204:
    
    if ((i_2.b & 0x40) == 0)
    label_14034a20c:
        
        if (i_5.b s< 0)
            goto label_14034a70e
        
        goto label_14034a214
    
label_14034a6f5:
    var_c20_1[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
    float var_f2c_1 = __vextractps_memd_xmmdq_immb(var_c20_1[0].o, 2)
    
    if (i_5.b s< 0)
    label_14034a70e:
        arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
        float var_f10_1 = __vextractps_memd_xmmdq_immb(arg5[0].o, 3)
        
        if ((i_2.b & 1) == 0)
            goto label_14034a21c
        
        goto label_14034a727
    
label_14034a214:
    
    if ((i_2.b & 1) == 0)
    label_14034a21c:
        
        if ((i_2.b & 2) != 0)
            goto label_14034a738
        
        goto label_14034a224
    
label_14034a727:
    int32_t var_fd0 = zmm2[0]
    
    if ((i_2.b & 2) != 0)
    label_14034a738:
        float var_fb4_1 = __vextractps_memd_xmmdq_immb(zmm2[0].o, 1)
        
        if ((i_2.b & 4) == 0)
            goto label_14034a22c
        
        goto label_14034a74b
    
label_14034a224:
    
    if ((i_2.b & 4) == 0)
    label_14034a22c:
        
        if ((i_2.b & 8) != 0)
            goto label_14034a75e
        
        goto label_14034a234
    
label_14034a74b:
    float var_f98_1 = __vextractps_memd_xmmdq_immb(zmm2[0].o, 2)
    
    if ((i_2.b & 8) != 0)
    label_14034a75e:
        float var_f7c_1 = __vextractps_memd_xmmdq_immb(zmm2[0].o, 3)
        
        if ((i_2.b & 0x10) == 0)
            goto label_14034a23c
        
        goto label_14034a771
    
label_14034a234:
    
    if ((i_2.b & 0x10) == 0)
    label_14034a23c:
        
        if ((i_2.b & 0x20) != 0)
            goto label_14034a788
        
        goto label_14034a244
    
label_14034a771:
    arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
    uint32_t var_f60_1 = arg5[0]
    
    if ((i_2.b & 0x20) != 0)
    label_14034a788:
        arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        float var_f44_1 = __vextractps_memd_xmmdq_immb(arg5[0].o, 1)
        
        if ((i_2.b & 0x40) == 0)
            goto label_14034a24c
        
        goto label_14034a7a1
    
label_14034a244:
    
    if ((i_2.b & 0x40) == 0)
    label_14034a24c:
        
        if (i_5.b s< 0)
            goto label_14034a7ba
        
        goto label_14034a254
    
label_14034a7a1:
    arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
    float var_f28_1 = __vextractps_memd_xmmdq_immb(arg5[0].o, 2)
    
    if (i_5.b s< 0)
    label_14034a7ba:
        zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        float var_f0c_1 = __vextractps_memd_xmmdq_immb(zmm2[0].o, 3)
        
        if ((i_2.b & 1) == 0)
            goto label_14034a25c
        
        goto label_14034a7d3
    
label_14034a254:
    
    if ((i_2.b & 1) == 0)
    label_14034a25c:
        
        if ((i_2.b & 2) != 0)
            goto label_14034a7e4
        
        goto label_14034a264
    
label_14034a7d3:
    float var_fcc = var_bc0_1[0]
    
    if ((i_2.b & 2) != 0)
    label_14034a7e4:
        float var_fb0_1 = __vextractps_memd_xmmdq_immb(var_bc0_1[0].o, 1)
        
        if ((i_2.b & 4) == 0)
            goto label_14034a26c
        
        goto label_14034a7f7
    
label_14034a264:
    
    if ((i_2.b & 4) == 0)
    label_14034a26c:
        
        if ((i_2.b & 8) != 0)
            goto label_14034a80a
        
        goto label_14034a274
    
label_14034a7f7:
    float var_f94_1 = __vextractps_memd_xmmdq_immb(var_bc0_1[0].o, 2)
    
    if ((i_2.b & 8) != 0)
    label_14034a80a:
        float var_f78_1 = __vextractps_memd_xmmdq_immb(var_bc0_1[0].o, 3)
        
        if ((i_2.b & 0x10) == 0)
            goto label_14034a27c
        
        goto label_14034a81d
    
label_14034a274:
    
    if ((i_2.b & 0x10) == 0)
    label_14034a27c:
        
        if ((i_2.b & 0x20) != 0)
            goto label_14034a834
        
        goto label_14034a284
    
label_14034a81d:
    zmm2[0].o = _mm256_extractf128_ps(var_bc0_1[0].o, 1)
    int32_t var_f5c_1 = zmm2[0]
    
    if ((i_2.b & 0x20) != 0)
    label_14034a834:
        zmm2[0].o = _mm256_extractf128_ps(var_bc0_1[0].o, 1)
        float var_f40_1 = __vextractps_memd_xmmdq_immb(zmm2[0].o, 1)
        
        if ((i_2.b & 0x40) == 0)
            goto label_14034a28c
        
        goto label_14034a84d
    
label_14034a284:
    
    if ((i_2.b & 0x40) == 0)
    label_14034a28c:
        
        if (i_5.b s< 0)
            goto label_14034a866
        
        goto label_14034a294
    
label_14034a84d:
    zmm2[0].o = _mm256_extractf128_ps(var_bc0_1[0].o, 1)
    float var_f24_1 = __vextractps_memd_xmmdq_immb(zmm2[0].o, 2)
    
    if (i_5.b s< 0)
    label_14034a866:
        var_bc0_1[0].o = _mm256_extractf128_ps(var_bc0_1[0].o, 1)
        float var_f08_1 = __vextractps_memd_xmmdq_immb(var_bc0_1[0].o, 3)
        
        if ((i_2.b & 1) == 0)
            goto label_14034a29c
        
        goto label_14034a87f
    
label_14034a294:
    
    if ((i_2.b & 1) == 0)
    label_14034a29c:
        
        if ((i_2.b & 2) != 0)
            goto label_14034a892
        
        goto label_14034a2a4
    
label_14034a87f:
    char var_fc8[0x4]
    var_fc8[0] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0)
    
    if ((i_2.b & 2) != 0)
    label_14034a892:
        uint8_t var_fac_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 2)
        
        if ((i_2.b & 4) == 0)
            goto label_14034a2ac
        
        goto label_14034a8a5
    
label_14034a2a4:
    
    if ((i_2.b & 4) == 0)
    label_14034a2ac:
        
        if ((i_2.b & 8) != 0)
            goto label_14034a8b8
        
        goto label_14034a2b4
    
label_14034a8a5:
    uint8_t var_f90_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 4)
    
    if ((i_2.b & 8) != 0)
    label_14034a8b8:
        uint8_t var_f74_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 6)
        
        if ((i_2.b & 0x10) == 0)
            goto label_14034a2bc
        
        goto label_14034a8cb
    
label_14034a2b4:
    
    if ((i_2.b & 0x10) == 0)
    label_14034a2bc:
        
        if ((i_2.b & 0x20) != 0)
            goto label_14034a8de
        
        goto label_14034a2c4
    
label_14034a8cb:
    uint8_t var_f58_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 8)
    
    if ((i_2.b & 0x20) != 0)
    label_14034a8de:
        uint8_t var_f3c_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xa)
        
        if ((i_2.b & 0x40) == 0)
            goto label_14034a2cc
        
        goto label_14034a8f1
    
label_14034a2c4:
    uint8_t var_f04_1
    
    if ((i_2.b & 0x40) != 0)
    label_14034a8f1:
        uint8_t var_f20_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xc)
        
        if (i_5.b s< 0)
            var_f04_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xe)
    else
    label_14034a2cc:
        
        if (i_5.b s< 0)
            var_f04_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xe)
    
    do
        uint64_t rcx_42 = _tzcnt_u64(i_2)
        i_2 &= not.q(1 << (rcx_42 u% 0x40))
        uint64_t rdx_21 = rcx_42 * 0x1c
        char rbx_20 = rsi_20[6].b
        char rcx_43 = var_fc8[rdx_21]
        
        if (rbx_20 != 0 && rcx_43 != 0)
            zmm0[0].o = var_13a0[rcx_42 * 7 + 0xf0]
            var_bc0_1[0].o = __vmovsd_xmmdq_memq(*rsi_20)
            var_bc0_1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_bc0_1[0].o, rsi_20[2], 0x20)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, (&var_fdc)[rcx_42 * 7], 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, (&var_fd8)[rcx_42 * 7], 0x20)
            zmm2[0].o = __vmovsd_xmmdq_memq(*(rsi_20 + 0xc))
            zmm0 = _mm256_min_ps(var_bc0_1, zmm0)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, rsi_20[5], 0x20)
            var_bc0_1[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
            zmm2[0].o = __vmovsd_xmmdq_memq(*(&var_fd4 + rdx_21))
            var_c20_1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, (&var_fcc)[rcx_42 * 7], 0x20)
            zmm2[0].o = _mm_permute_pd(zmm0[0].o, 1)
            arg5 = _mm256_max_ps(arg5, var_c20_1)
            var_c20_1[0].o = __vmovshdup_xmmdq_xmmdq(arg5[0].o)
            zmm5[0].o = _mm_permute_pd(arg5[0].o, 1)
        else if (rcx_43 == 0)
            rbx_20 = rsi_20[6].b
            zmm5[0].o = rsi_20[5]
            var_c20_1[0].o = rsi_20[4]
            arg5[0].o = rsi_20[3]
            zmm2[0].o = rsi_20[2]
            zmm0[0].o = *rsi_20
            var_bc0_1[0].o = rsi_20[1]
        else
            zmm0[0].o = var_13a0[rcx_42 * 7 + 0xf0]
            var_bc0_1[0].o = (&var_fdc)[rcx_42 * 7]
            zmm2[0].o = (&var_fd8)[rcx_42 * 7]
            arg5[0].o = (&var_fd4)[rcx_42 * 7]
            var_c20_1[0].o = (&var_fd0)[rcx_42 * 7]
            zmm5[0].o = (&var_fcc)[rcx_42 * 7]
            rbx_20 = rcx_43
        
        *rsi_20 = zmm0[0]
        rsi_20[1] = var_bc0_1[0]
        rsi_20[2] = zmm2[0]
        rsi_20[3] = arg5[0]
        rsi_20[4] = var_c20_1[0]
        rsi_20[5] = zmm5[0]
        rsi_20[6].b = rbx_20
    while (i_2 != 0)
else
    int32_t rcx_5 = ((arg19 s>> 0x1f u>> 0x1d) + arg19) & 0xfffffff8
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    float var_ca0_1[0x8] = zmm0
    float var_cc0_1[0x8] = zmm0
    float var_ce0_1[0x8] = zmm0
    float var_d00_1[0x8] = zmm0
    float var_d20_1[0x8] = zmm0
    float var_d40_1[0x8] = zmm0
    uint8_t var_c80_1[0x8] = 0
    uint64_t r8 = 0
    
    if (rcx_5 s> 0)
        zmm1 = __vpbroadcastd_ymmqq_memd(7)
        float var_da0_1[0x8] = zmm1
        arg13 = __vpbroadcastd_ymmqq_memd(0x1c)
        arg10 = _mm256_cmpeq_epi32(arg10, arg10)
        arg11 = __vpbroadcastd_ymmqq_memd(4)
        arg12 = __vpbroadcastd_ymmqq_memd(8)
        arg14 = __vpbroadcastd_ymmqq_memd(0xc)
        arg15 = __vpbroadcastd_ymmqq_memd(0x10)
        arg16 = __vpbroadcastd_ymmqq_memd(0x14)
        arg7 = __vpbroadcastd_ymmqq_memd(0x18)
        zmm5[0].o = zx.o(0)
        uint32_t var_b40_1[0x8] = arg13
        int32_t var_b60
        var_b60.32 = arg11
        uint32_t var_b80_1[0x8] = arg12
        uint32_t var_dc0_1[0x8] = arg14
        uint32_t var_de0_1[0x8] = arg15
        uint32_t var_e00_1[0x8] = arg16
        uint32_t var_aa0_1[0x8] = arg7
        
        while (true)
            zmm1[0].o = zx.o(r8.d)
            zmm1 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm1[0]), data_142fc93a0)
            int32_t temp0_21[0x8] = __vpmulld_ymmqq_ymmqq_memqq(zmm1, var_da0_1)
            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            uint32_t temp0_23[0x8] = _mm256_cmpeq_epi32(arg5, arg5)
            float temp0_24[0x8]
            int32_t temp1_1
            temp0_24, temp1_1 = _mm256_i32gather_ps(zmm0, *(arg4 + (temp0_21[0].q << 2)), temp0_23)
            zmm0 = temp0_24
            arg5 = temp1_1
            int32_t temp0_25[0x8] = _mm256_mullo_epi32(zmm1, arg13)
            zmm1 = _mm256_add_epi32(temp0_25, arg11)
            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
            uint32_t temp0_28[0x8] = _mm256_cmpeq_epi32(arg5, arg5)
            float temp0_29[0x8]
            int32_t temp1_2
            temp0_29, temp1_2 = _mm256_i32gather_ps(arg8, *(arg4 + zmm1[0].q), temp0_28)
            arg8 = temp0_29
            arg5 = temp1_2
            zmm1 = _mm256_add_epi32(temp0_25, arg12)
            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
            uint32_t temp0_32[0x8] = _mm256_cmpeq_epi32(arg5, arg5)
            float temp0_33[0x8]
            int32_t temp1_3
            temp0_33, temp1_3 = _mm256_i32gather_ps(arg9, *(arg4 + zmm1[0].q), temp0_32)
            arg9 = temp0_33
            arg5 = temp1_3
            zmm1 = _mm256_add_epi32(temp0_25, arg14)
            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            uint32_t temp0_36[0x8] = _mm256_cmpeq_epi32(arg5, arg5)
            float temp0_37[0x8]
            int32_t temp1_4
            temp0_37, temp1_4 = _mm256_i32gather_ps(arg6, *(arg4 + zmm1[0].q), temp0_36)
            arg5 = temp1_4
            var_13a0 = temp0_37
            zmm1 = _mm256_add_epi32(temp0_25, arg15)
            temp0_37[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_37[0].o, temp0_37[0].o)
            uint32_t temp0_40[0x8] = _mm256_cmpeq_epi32(arg5, arg5)
            float temp0_41[0x8]
            int32_t temp1_5
            temp0_41, temp1_5 = _mm256_i32gather_ps(temp0_37, *(arg4 + zmm1[0].q), temp0_40)
            arg5 = _mm256_add_epi32(temp0_25, arg16)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            arg6 = _mm256_cmpeq_epi32(temp0_41, temp0_41)
            float temp0_45[0x8]
            int32_t temp1_6
            temp0_45, temp1_6 = _mm256_i32gather_ps(zmm1, *(arg4 + arg5[0].q), arg6)
            zmm1 = temp0_45
            arg6 = temp1_6
            float var_1060_1[0x8] = zmm1
            int32_t temp0_46[0x8] = _mm256_add_epi32(temp0_25, arg7)
            int64_t r13_1 = sx.q(temp0_46[0])
            int32_t temp0_47 = __vpextrd_gpr32d_xmmdq_immb(temp0_46[0].o, 1)
            int64_t rbx_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_46[0].o, 2))
            int64_t r11_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_46[0].o, 3))
            temp0_46[0].o = _mm256_extracti128_si256(temp0_46, 1)
            int64_t rcx_6 = sx.q(temp0_46[0])
            int32_t temp0_51 = __vpextrd_gpr32d_xmmdq_immb(temp0_46[0].o, 1)
            int64_t rdx_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_46[0].o, 2))
            int32_t temp0_53 = __vpextrd_gpr32d_xmmdq_immb(temp0_46[0].o, 3)
            int64_t rsi_3 = sx.q((r8 << 2).d)
            zmm2 = __vpcmpeqd_ymmqq_ymmqq_memqq(arg10, *(arg1 + rsi_3)) ^ arg10
            arg5[0].o = _mm256_extracti128_si256(zmm2, 1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
            arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, arg4[r13_1], 0)
            arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, arg4[sx.q(temp0_47)], 2)
            arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, arg4[rbx_3], 4)
            arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, arg4[r11_2], 6)
            arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, arg4[rcx_6], 8)
            arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, arg4[sx.q(temp0_51)], 0xa)
            arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, arg4[rdx_2], 0xc)
            arg5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg5[0].o, arg4[sx.q(temp0_53)], 0xe)
            arg5[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
            zmm1[0].o = arg5[0].o & not.o(zmm2[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            char temp0_67 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o)
            
            if (temp0_67 != 0)
                var_d60 = arg9
                float var_1100_1[0x8] = arg8
                float var_1380_1[0x8] = zmm0
                int128_t var_10a0 = zmm1[0].o
                int32_t temp0_68[0x8] = _mm256_cvtepi16_epi32(zmm1[0].o)
                zmm0 = _mm256_slli_epi32(*(arg2 + rsi_3), 6)
                zmm1[0].o = zx.o(0)
                float temp0_70[0x8]
                int32_t temp1_7
                temp0_70, temp1_7 = _mm256_i32gather_ps(zmm1, *(arg3 + zmm0[0].q), temp0_68)
                temp0_70[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_70[0].o, temp0_70[0].o)
                float temp0_72[0x8]
                int32_t temp1_8
                temp0_72, temp1_8 =
                    _mm256_i32gather_ps(temp0_70, *(arg3 + (zmm0 | arg11)[0].q), temp0_68)
                temp0_72[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_72[0].o, temp0_72[0].o)
                float temp0_74[0x8]
                int32_t temp1_9
                temp0_74, temp1_9 =
                    _mm256_i32gather_ps(temp0_72, *(arg3 + (zmm0 | arg12)[0].q), temp0_68)
                arg8 = temp1_9
                arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                float temp0_76[0x8]
                int32_t temp1_10
                temp0_76, temp1_10 =
                    _mm256_i32gather_ps(arg8, *(arg3 + (zmm0 | arg14)[0].q), temp0_68)
                arg9 = temp1_10
                arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                float temp0_78[0x8]
                int32_t temp1_11
                temp0_78, temp1_11 =
                    _mm256_i32gather_ps(arg9, *(arg3 + (zmm0 | arg15)[0].q), temp0_68)
                arg10 = temp1_11
                arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                float temp0_80[0x8]
                int32_t temp1_12
                temp0_80, temp1_12 =
                    _mm256_i32gather_ps(arg10, *(arg3 + (zmm0 | arg16)[0].q), temp0_68)
                arg10 = temp0_80
                arg11 = temp1_12
                arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                float temp0_82[0x8]
                int32_t temp1_13
                temp0_82, temp1_13 =
                    _mm256_i32gather_ps(arg11, *(arg3 + (zmm0 | arg7)[0].q), temp0_68)
                arg11 = temp0_82
                arg16[0].o = zx.o(0)
                float temp0_83[0x8]
                int32_t temp1_14
                temp0_83, temp1_14 =
                    _mm256_i32gather_ps(arg16, *(arg3 + (zmm0 | arg13)[0].q), temp0_68)
                arg16 = temp0_83
                arg12 = temp1_14
                arg6 = _mm256_or_ps(zmm0, _mm256_broadcast_ss(4.48415509e-44f))
                arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                float temp0_87[0x8]
                int32_t temp1_15
                temp0_87, temp1_15 = _mm256_i32gather_ps(arg12, *(arg3 + arg6[0].q), temp0_68)
                float temp0_88[0x8] = _mm256_broadcast_ss(5.04467447e-44f)
                uint32_t temp0_89[0x8] = _mm256_or_ps(zmm0, temp0_88)
                temp0_88[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_88[0].o, temp0_88[0].o)
                float temp0_91[0x8]
                int32_t temp1_16
                temp0_91, temp1_16 =
                    _mm256_i32gather_ps(temp0_88, *(arg3 + temp0_89[0].q), temp0_68)
                arg13 = _mm256_broadcast_ss(5.60519386e-44f)
                uint32_t temp0_93[0x8] = _mm256_or_ps(zmm0, arg13)
                arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                float temp0_95[0x8]
                int32_t temp1_17
                temp0_95, temp1_17 = _mm256_i32gather_ps(arg13, *(arg3 + temp0_93[0].q), temp0_68)
                arg14 = _mm256_broadcast_ss(6.16571324e-44f)
                uint32_t temp0_97[0x8] = _mm256_or_ps(zmm0, arg14)
                arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                float temp0_99[0x8]
                int32_t temp1_18
                temp0_99, temp1_18 = _mm256_i32gather_ps(arg14, *(arg3 + temp0_97[0].q), temp0_68)
                zmm1 = _mm256_or_ps(zmm0, _mm256_broadcast_ss(6.72623263e-44f))
                temp0_97[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_97[0].o, temp0_97[0].o)
                float temp0_103[0x8]
                int32_t temp1_19
                temp0_103, temp1_19 = _mm256_i32gather_ps(temp0_97, *(arg3 + zmm1[0].q), temp0_68)
                arg5 = temp1_19
                zmm1 = _mm256_or_ps(zmm0, _mm256_broadcast_ss(7.28675201e-44f))
                arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                float temp0_107[0x8]
                int32_t temp1_20
                temp0_107, temp1_20 = _mm256_i32gather_ps(arg5, *(arg3 + zmm1[0].q), temp0_68)
                arg5 = temp0_107
                arg7 = temp1_20
                zmm1 = _mm256_or_ps(zmm0, _mm256_broadcast_ss(7.8472714e-44f))
                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                float temp0_111[0x8]
                int32_t temp1_21
                temp0_111, temp1_21 = _mm256_i32gather_ps(arg7, *(arg3 + zmm1[0].q), temp0_68)
                arg7 = temp0_111
                zmm2 = temp1_21
                zmm1 = _mm256_or_ps(zmm0, _mm256_broadcast_ss(8.40779079e-44f))
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                float temp0_116[0x8]
                int32_t temp1_22
                temp0_116, temp1_22 = _mm256_i32gather_ps(zmm2, *(arg3 + zmm1[0].q), temp0_68)
                zmm2 = temp0_116
                zmm5 = temp1_22
                float var_300[0x8] = temp0_70
                float var_2e0[0x8] = temp0_72
                float var_2c0[0x8] = temp0_74
                float var_2a0[0x8] = temp0_76
                float var_280_1[0x8] = temp0_78
                uint32_t var_260_1[0x8] = arg10
                uint32_t var_240_1[0x8] = arg11
                uint32_t var_220_1[0x8] = arg16
                uint32_t var_200_1[0x8] = temp0_87
                float var_1e0_1[0x8] = temp0_91
                uint32_t var_1c0_1[0x8] = temp0_95
                uint32_t var_1a0_1[0x8] = temp0_99
                uint32_t var_180_1[0x8] = temp0_103
                uint32_t var_160_1[0x8] = arg5
                uint32_t var_140_1[0x8] = arg7
                int32_t var_120_1[0x8] = zmm2
                arg5[0].o = arg17[9]
                zmm5[0].o = arg17[0xd]
                arg7[0].o = arg17[2]
                temp0_76[0].o = arg17[3]
                temp0_78[0].o = arg17[6]
                arg10[0].o = arg17[0xa]
                arg11[0].o = arg17[0xe]
                zmm2[0].o = arg17[7]
                arg16[0].o = arg17[0xb]
                
                for (int64_t i_3 = 0; i_3 != 0x200; i_3 -= -0x80)
                    float temp0_117[0x8] = _mm256_broadcast_ss(*arg17)
                    arg6 = *(&var_300 + i_3)
                    arg13 = *(&var_2e0 + i_3)
                    arg12 = *(&var_2c0 + i_3)
                    arg14 = *(&var_2a0 + i_3)
                    float temp0_118[0x8] = _mm256_fmadd_ps(temp0_117, arg6, zmm0)
                    arg15 = _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[4]), arg13, temp0_118)
                    float temp0_122[0x8] =
                        _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[8]), arg12, arg15)
                    *(&var_1360 + i_3) =
                        _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[0xc]), arg14, temp0_122)
                    float temp0_126[0x8] =
                        _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[1]), arg6, zmm0)
                    arg15 = _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[5]), arg13, temp0_126)
                    float temp0_130[0x8] =
                        _mm256_fmadd_ps(_mm256_broadcastss_ps(arg5[0].o), arg12, arg15)
                    *(&var_1340 + i_3) =
                        _mm256_fmadd_ps(_mm256_broadcastss_ps(zmm5[0].o), arg14, temp0_130)
                    float temp0_134[0x8] =
                        _mm256_fmadd_ps(_mm256_broadcastss_ps(arg7[0].o), arg6, zmm0)
                    arg15 = _mm256_fmadd_ps(_mm256_broadcastss_ps(temp0_78[0].o), arg13, temp0_134)
                    float temp0_138[0x8] =
                        _mm256_fmadd_ps(_mm256_broadcastss_ps(arg10[0].o), arg12, arg15)
                    *(&var_1320 + i_3) =
                        _mm256_fmadd_ps(_mm256_broadcastss_ps(arg11[0].o), arg14, temp0_138)
                    float temp0_142[0x8] =
                        _mm256_fmadd_ps(_mm256_broadcastss_ps(temp0_76[0].o), arg6, zmm0)
                    float temp0_144[0x8] =
                        _mm256_fmadd_ps(_mm256_broadcastss_ps(zmm2[0].o), arg13, temp0_142)
                    float temp0_146[0x8] =
                        _mm256_fmadd_ps(_mm256_broadcastss_ps(arg16[0].o), arg12, temp0_144)
                    *(&var_1300 + i_3) =
                        _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[0xf]), arg14, temp0_146)
                
                zmm0 = var_1360
                float var_1120_2[0x8] = zmm0
                arg5 = var_1340
                float temp0_149[0x8] = __vaddps_ymmqq_ymmqq_memqq(var_1380_1, var_13a0)
                zmm2 = _mm256_broadcast_ss(0.5f)
                float temp0_151[0x8] = _mm256_mul_ps(temp0_149, zmm2)
                float temp0_152[0x8] = _mm256_mul_ps(temp0_151, zmm0)
                arg10 = _mm256_mul_ps(temp0_151, arg5)
                arg11 = _mm256_mul_ps(__vaddps_ymmqq_ymmqq_memqq(temp0_41, var_1100_1), zmm2)
                float temp0_156[0x8] = _mm256_fmadd_ps(temp0_152, arg11, var_12e0)
                arg10 = _mm256_fmadd_ps(arg10, arg11, var_12c0)
                zmm0 = var_1320
                arg15 = _mm256_fmadd_ps(_mm256_mul_ps(temp0_151, zmm0), arg11, var_12a0)
                arg11 = __vfmadd231ps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg11, var_1280), temp0_151, 
                    var_1300)
                arg7 = var_d60
                float temp0_163[0x8] = _mm256_mul_ps(_mm256_add_ps(arg7, var_1060_1), zmm2)
                float temp0_164[0x8] = _mm256_fmadd_ps(temp0_156, temp0_163, var_1260)
                arg10 = _mm256_fmadd_ps(arg10, temp0_163, var_1240)
                arg15 = _mm256_fmadd_ps(arg15, temp0_163, var_1220)
                float temp0_167[0x8] = _mm256_fmadd_ps(temp0_163, var_1200, arg11)
                float temp0_168[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_164, var_11e0)
                arg10 = __vaddps_ymmqq_ymmqq_memqq(arg10, var_11c0)
                arg11 = __vaddps_ymmqq_ymmqq_memqq(arg15, var_11a0)
                float temp0_171[0x8] = __vaddps_ymmqq_ymmqq_memqq(temp0_167, var_1180)
                var_1360 = var_12e0
                zmm5 = var_12c0
                var_1340 = zmm5
                var_1320 = var_12a0
                var_1300 = var_1280
                uint32_t var_a00_1[0x8] = var_1260
                uint32_t var_9e0_1[0x8] = var_1240
                uint32_t var_9c0_1[0x8] = var_1220
                uint32_t var_9a0_1[0x8] = var_1200
                float temp0_172[0x8] = __vsubps_ymmqq_ymmqq_memqq(temp0_41, var_1100_1)
                float temp0_173[0x8] = _mm256_sub_ps(var_1060_1, arg7)
                float var_a80_1[0x8] = temp0_168
                uint32_t var_a60_1[0x8] = arg10
                uint32_t var_a40_1[0x8] = arg11
                float var_a20_1[0x8] = temp0_171
                float temp0_175[0x8] =
                    _mm256_mul_ps(__vsubps_ymmqq_ymmqq_memqq(var_13a0, var_1380_1), zmm2)
                arg15 = __vmulps_ymmqq_ymmqq_memqq(temp0_175, var_1120_2)
                arg5 = __vmulps_ymmqq_ymmqq_memqq(temp0_175, arg5)
                float temp0_178[0x8] = __vmulps_ymmqq_ymmqq_memqq(temp0_175, zmm0)
                float temp0_179[0x8] = _mm256_mul_ps(temp0_172, zmm2)
                arg7 = __vmulps_ymmqq_ymmqq_memqq(temp0_179, var_12e0)
                float temp0_181[0x8] = _mm256_mul_ps(temp0_179, zmm5)
                float temp0_182[0x8] = _mm256_mul_ps(temp0_179, var_12a0)
                zmm5 = _mm256_broadcast_ss(nanf)
                arg7 = _mm256_add_ps(_mm256_and_ps(arg15, zmm5), _mm256_and_ps(arg7, zmm5))
                arg5 = _mm256_add_ps(_mm256_and_ps(arg5, zmm5), _mm256_and_ps(temp0_181, zmm5))
                float temp0_192[0x8] =
                    _mm256_add_ps(_mm256_and_ps(temp0_178, zmm5), _mm256_and_ps(temp0_182, zmm5))
                zmm2 = __vmulps_ymmqq_ymmqq_memqq(zmm2, temp0_173)
                float temp0_194[0x8] = _mm256_mul_ps(zmm2, var_1260)
                float temp0_195[0x8] = _mm256_mul_ps(zmm2, var_1240)
                zmm2 = _mm256_mul_ps(zmm2, var_1220)
                arg13 = _mm256_add_ps(arg7, _mm256_and_ps(temp0_194, zmm5))
                arg5 = _mm256_add_ps(arg5, _mm256_and_ps(temp0_195, zmm5))
                int32_t temp0_201[0x8] = _mm256_and_ps(zmm2, zmm5)
                zmm1 = _mm256_add_ps(temp0_192, temp0_201)
                arg15 = _mm256_sub_ps(temp0_168, arg13)
                float temp0_204[0x8] = _mm256_sub_ps(arg10, arg5)
                float temp0_205[0x8] = _mm256_sub_ps(arg11, zmm1)
                arg14 = _mm256_add_ps(temp0_168, arg13)
                float temp0_207[0x8] = _mm256_add_ps(arg10, arg5)
                arg11 = _mm256_add_ps(arg11, zmm1)
                zmm5[0].o = __vpmovzxbw_xmmdq_memq(var_c80_1)
                var_1260[0].o = __vxorps_xmmdq_xmmdq_xmmdq(var_1260[0].o, var_1260[0].o)
                zmm1[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm5[0].o, var_1260[0].o)
                arg5[0].o = zmm1[0].o & not.o(var_10a0)
                temp0_201[0].o = __vpsllw_xmmdq_xmmdq_immb(arg5[0].o, 0xf)
                temp0_201[0].o = __vpsraw_xmmdq_xmmdq_immb(temp0_201[0].o, 0xf)
                temp0_201[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_201[0].o, temp0_205[0].o)
                char temp0_215 = __vpmovmskb_gpr32d_xmmdq(temp0_201[0].o)
                arg7[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                zmm1[0].o ^= arg7[0].o
                zmm2 = _mm256_cvtepi16_epi32(zmm1[0].o)
                
                if (temp0_215 == 0)
                    arg5[0].o = zx.o(0)
                    arg10 = _mm256_cmpeq_epi32(arg10, arg10)
                    zmm5 = __vandnps_ymmqq_ymmqq_memqq(zmm2, temp0_68)
                    
                    if (_mm256_movemask_ps(zmm5) != 0)
                    label_140347451:
                        zmm1 = zmm2 ^ arg10
                        var_1360 = _mm256_maskstore_ps(zmm1, arg15)
                        var_1340 = _mm256_maskstore_ps(zmm1, temp0_204)
                        var_1320 = _mm256_maskstore_ps(zmm1, temp0_205)
                        var_1300 = _mm256_maskstore_ps(zmm1, arg14)
                        var_12e0 = _mm256_maskstore_ps(zmm1, temp0_207)
                        var_12c0 = _mm256_maskstore_ps(zmm1, arg11)
                        char temp0_257 = _mm256_movemask_ps(zmm1)
                        
                        if ((temp0_257 & 1) == 0)
                            if ((temp0_257 & 2) != 0)
                                goto label_140346a03
                            
                            goto label_14034749a
                        
                        var_12a0[0].b = 1
                        
                        if ((temp0_257 & 2) != 0)
                        label_140346a03:
                            var_12a0[0]:1.b = 1
                            
                            if ((temp0_257 & 4) == 0)
                                goto label_1403474a4
                            
                            goto label_140346a15
                        
                    label_14034749a:
                        
                        if ((temp0_257 & 4) == 0)
                        label_1403474a4:
                            
                            if ((temp0_257 & 8) != 0)
                                goto label_140346a27
                            
                            goto label_1403474ae
                        
                    label_140346a15:
                        var_12a0[0]:2.b = 1
                        
                        if ((temp0_257 & 8) != 0)
                        label_140346a27:
                            var_12a0[0]:3.b = 1
                            
                            if ((temp0_257 & 0x10) == 0)
                                goto label_1403474b8
                            
                            goto label_140346a39
                        
                    label_1403474ae:
                        
                        if ((temp0_257 & 0x10) == 0)
                        label_1403474b8:
                            
                            if ((temp0_257 & 0x20) != 0)
                                goto label_140346a4b
                            
                            goto label_1403474c2
                        
                    label_140346a39:
                        var_12a0[1].b = 1
                        
                        if ((temp0_257 & 0x20) != 0)
                        label_140346a4b:
                            var_12a0[1]:1.b = 1
                            
                            if ((temp0_257 & 0x40) == 0)
                                goto label_1403474cc
                            
                            goto label_140346a5d
                        
                    label_1403474c2:
                        
                        if ((temp0_257 & 0x40) != 0)
                        label_140346a5d:
                            var_12a0[1]:2.b = 1
                            
                            if (temp0_257 s< 0)
                                var_12a0[1]:3.b = 1
                        else
                        label_1403474cc:
                            
                            if (temp0_257 s< 0)
                                var_12a0[1]:3.b = 1
                        
                        zmm1 = arg5 | zmm5
                        _mm256_movemask_ps(zmm1)
                else
                    var_13a0[0].o = arg5[0].o
                    arg10 = var_ce0_1
                    arg5 = arg11
                    var_1360 = _mm256_maskstore_ps(zmm2, _mm256_min_ps(var_d40_1, arg15))
                    var_1340 = _mm256_maskstore_ps(zmm2, _mm256_min_ps(var_d20_1, temp0_204))
                    var_1320 = _mm256_maskstore_ps(zmm2, _mm256_min_ps(var_d00_1, temp0_205))
                    var_1300 = _mm256_maskstore_ps(zmm2, _mm256_max_ps(arg10, arg14))
                    arg11 = arg5
                    var_12e0 = _mm256_maskstore_ps(zmm2, _mm256_max_ps(var_cc0_1, temp0_207))
                    zmm1 = _mm256_max_ps(var_ca0_1, arg5)
                    var_12c0 = _mm256_maskstore_ps(zmm2, zmm1)
                    zmm1[0].o = zmm5[0].o & data_142fc92e0
                    zmm1[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm1[0].o, var_1260[0].o)
                    zmm1[0].o ^= arg7[0].o
                    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_205[0].o)
                    char temp0_232 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                    
                    if ((temp0_232 & 1) == 0)
                        if ((temp0_232 & 2) != 0)
                            goto label_140347397
                        
                        goto label_14034730c
                    
                    var_12a0[0].b = __vpextrb_memb_xmmdq_immb(zmm5[0].o, 0)
                    
                    if ((temp0_232 & 2) != 0)
                    label_140347397:
                        var_12a0[0]:1.b = __vpextrb_memb_xmmdq_immb(zmm5[0].o, 2)
                        arg10 = _mm256_cmpeq_epi32(arg10, arg10)
                        arg15 = arg15
                        
                        if ((temp0_232 & 4) == 0)
                            goto label_14034731c
                        
                        goto label_1403473b5
                    
                label_14034730c:
                    arg10 = _mm256_cmpeq_epi32(arg10, arg10)
                    arg15 = arg15
                    
                    if ((temp0_232 & 4) == 0)
                    label_14034731c:
                        
                        if ((temp0_232 & 8) != 0)
                            goto label_1403473c9
                        
                        goto label_140347325
                    
                label_1403473b5:
                    var_12a0[0]:2.b = __vpextrb_memb_xmmdq_immb(zmm5[0].o, 4)
                    
                    if ((temp0_232 & 8) != 0)
                    label_1403473c9:
                        var_12a0[0]:3.b = __vpextrb_memb_xmmdq_immb(zmm5[0].o, 6)
                        
                        if ((temp0_232 & 0x10) == 0)
                            goto label_14034732e
                        
                        goto label_1403473dd
                    
                label_140347325:
                    
                    if ((temp0_232 & 0x10) == 0)
                    label_14034732e:
                        
                        if ((temp0_232 & 0x20) != 0)
                            goto label_1403473f1
                        
                        goto label_140347337
                    
                label_1403473dd:
                    var_12a0[1].b = __vpextrb_memb_xmmdq_immb(zmm5[0].o, 8)
                    
                    if ((temp0_232 & 0x20) != 0)
                    label_1403473f1:
                        var_12a0[1]:1.b = __vpextrb_memb_xmmdq_immb(zmm5[0].o, 0xa)
                        
                        if ((temp0_232 & 0x40) == 0)
                            goto label_140347340
                        
                        goto label_140347405
                    
                label_140347337:
                    
                    if ((temp0_232 & 0x40) == 0)
                    label_140347340:
                        
                        if (temp0_232 s< 0)
                            goto label_140347418
                        
                        goto label_140347348
                    
                label_140347405:
                    var_12a0[1]:2.b = __vpextrb_memb_xmmdq_immb(zmm5[0].o, 0xc)
                    
                    if (temp0_232 s>= 0)
                    label_140347348:
                        
                        if (temp0_67 != temp0_215)
                        label_140347432:
                            zmm1 = _mm256_slli_epi32(__vpmovzxwd_ymmqq_memdq(var_13a0[0].o), 0x1f)
                            arg5 = _mm256_srai_epi32(zmm1, 0x1f)
                            zmm5 = __vandnps_ymmqq_ymmqq_memqq(zmm2, temp0_68)
                            
                            if (_mm256_movemask_ps(zmm5) != 0)
                                goto label_140347451
                    else
                    label_140347418:
                        var_12a0[1]:3.b = __vpextrb_memb_xmmdq_immb(zmm5[0].o, 0xe)
                        
                        if (temp0_67 != temp0_215)
                            goto label_140347432
                
                arg9 = var_1360
                arg5 = var_1340
                arg6 = var_1320
                zmm5 = var_1300
                arg8 = var_12c0
                zmm2[0].o = __vpmovzxbw_xmmdq_memq(var_12a0[0].q)
                arg13 = var_b40_1
                arg11 = var_b60.32
                arg12 = var_b80_1
                arg14 = var_dc0_1
                arg15 = var_de0_1
                arg16 = var_e00_1
                zmm0 = temp0_68
                var_d40_1 = _mm256_maskstore_ps(zmm0, arg9)
                var_d20_1 = _mm256_maskstore_ps(zmm0, arg5)
                var_d00_1 = _mm256_maskstore_ps(zmm0, arg6)
                var_ce0_1 = _mm256_maskstore_ps(zmm0, zmm5)
                var_cc0_1 = _mm256_maskstore_ps(zmm0, var_12e0)
                var_ca0_1 = _mm256_maskstore_ps(zmm0, arg8)
                
                if ((temp0_67 & 1) == 0)
                    arg7 = var_aa0_1
                    zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                    
                    if ((temp0_67 & 2) != 0)
                        goto label_140346952
                    
                    goto label_1403475b4
                
                var_c80_1[0] = __vpextrb_memb_xmmdq_immb(zmm2[0].o, 0)
                arg7 = var_aa0_1
                zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                
                if ((temp0_67 & 2) != 0)
                label_140346952:
                    var_c80_1[1] = __vpextrb_memb_xmmdq_immb(zmm2[0].o, 2)
                    
                    if ((temp0_67 & 4) == 0)
                        goto label_1403475be
                    
                    goto label_140346967
                
            label_1403475b4:
                
                if ((temp0_67 & 4) == 0)
                label_1403475be:
                    
                    if ((temp0_67 & 8) != 0)
                        goto label_14034697c
                    
                    goto label_1403475c8
                
            label_140346967:
                var_c80_1[2] = __vpextrb_memb_xmmdq_immb(zmm2[0].o, 4)
                
                if ((temp0_67 & 8) != 0)
                label_14034697c:
                    var_c80_1[3] = __vpextrb_memb_xmmdq_immb(zmm2[0].o, 6)
                    
                    if ((temp0_67 & 0x10) == 0)
                        goto label_1403475d2
                    
                    goto label_140346991
                
            label_1403475c8:
                
                if ((temp0_67 & 0x10) == 0)
                label_1403475d2:
                    
                    if ((temp0_67 & 0x20) != 0)
                        goto label_1403469a6
                    
                    goto label_1403475dc
                
            label_140346991:
                var_c80_1[4] = __vpextrb_memb_xmmdq_immb(zmm2[0].o, 8)
                
                if ((temp0_67 & 0x20) != 0)
                label_1403469a6:
                    var_c80_1[5] = __vpextrb_memb_xmmdq_immb(zmm2[0].o, 0xa)
                    
                    if ((temp0_67 & 0x40) == 0)
                        goto label_1403475e6
                    
                    goto label_1403469bb
                
            label_1403475dc:
                
                if ((temp0_67 & 0x40) != 0)
                label_1403469bb:
                    var_c80_1[6] = __vpextrb_memb_xmmdq_immb(zmm2[0].o, 0xc)
                    
                    if (temp0_67 s< 0)
                    label_1403469cf:
                        var_c80_1[7] = __vpextrb_memb_xmmdq_immb(zmm2[0].o, 0xe)
                        r8 = zx.q(r8.d + 8)
                        
                        if (r8.d s>= rcx_5)
                            break
                        
                        continue
                else
                label_1403475e6:
                    
                    if (temp0_67 s< 0)
                        goto label_1403469cf
            
            r8 = zx.q(r8.d + 8)
            
            if (r8.d s>= rcx_5)
                break
    
    if (r8.d s< arg19)
        zmm0[0].o = zx.o(r8.d)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
        zmm1[0].o = zx.o(arg19)
        zmm1 = _mm256_broadcastd_epi32(zmm1[0])
        int32_t temp0_271[0x8] = _mm256_mullo_epi32(zmm0, __vpbroadcastd_ymmqq_memd(7))
        arg11 = _mm256_cmpgt_epi32(zmm1, zmm0)
        arg5[0].o = zx.o(0)
        float temp0_273[0x8]
        int32_t temp1_23
        temp0_273, temp1_23 = _mm256_i32gather_ps(arg5, *(arg4 + (temp0_271[0].q << 2)), arg11)
        arg5 = temp0_273
        var_13a0 = arg5
        arg10 = __vpbroadcastd_ymmqq_memd(0x1c)
        zmm0 = _mm256_mullo_epi32(zmm0, arg10)
        arg12 = __vpbroadcastd_ymmqq_memd(4)
        zmm1 = _mm256_add_epi32(zmm0, arg12)
        zmm5[0].o = zx.o(0)
        float temp0_278[0x8]
        int32_t temp1_24
        temp0_278, temp1_24 = _mm256_i32gather_ps(zmm5, *(arg4 + zmm1[0].q), arg11)
        zmm5 = temp0_278
        arg13 = __vpbroadcastd_ymmqq_memd(8)
        zmm1 = _mm256_add_epi32(zmm0, arg13)
        arg7[0].o = zx.o(0)
        float temp0_281[0x8]
        int32_t temp1_25
        temp0_281, temp1_25 = _mm256_i32gather_ps(arg7, *(arg4 + zmm1[0].q), arg11)
        arg7 = temp0_281
        arg14 = __vpbroadcastd_ymmqq_memd(0xc)
        zmm1 = _mm256_add_epi32(zmm0, arg14)
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        float temp0_285[0x8]
        int32_t temp1_26
        temp0_285, temp1_26 = _mm256_i32gather_ps(arg5, *(arg4 + zmm1[0].q), arg11)
        arg5 = temp0_285
        uint32_t var_1380_2[0x8] = arg5
        arg15 = __vpbroadcastd_ymmqq_memd(0x10)
        zmm1 = _mm256_add_epi32(zmm0, arg15)
        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        float temp0_289[0x8]
        int32_t temp1_27
        temp0_289, temp1_27 = _mm256_i32gather_ps(arg8, *(arg4 + zmm1[0].q), arg11)
        arg8 = temp0_289
        arg16 = __vpbroadcastd_ymmqq_memd(0x14)
        zmm1 = _mm256_add_epi32(zmm0, arg16)
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        float temp0_293[0x8]
        int32_t temp1_28
        temp0_293, temp1_28 = _mm256_i32gather_ps(arg5, *(arg4 + zmm1[0].q), arg11)
        arg5 = temp0_293
        uint32_t var_e20_2[0x8] = arg5
        arg6 = __vpbroadcastd_ymmqq_memd(0x18)
        zmm0 = arg11 & _mm256_add_epi32(zmm0, arg6)
        int64_t r10_2 = sx.q(zmm0[0])
        int64_t r11_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        int64_t r15_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        int64_t rdi_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
        int64_t rsi_8 = sx.q(zmm0[0])
        int64_t rcx_16 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        int64_t rdx_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
        int64_t rbx_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = zx.o(0)
        zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zx.o(0), arg4[r10_2], 0)
        zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, arg4[r11_3], 2)
        zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, arg4[r15_2], 4)
        zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, arg4[rdi_4], 6)
        zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, arg4[rsi_8], 8)
        zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, arg4[rcx_16], 0xa)
        zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, arg4[rdx_5], 0xc)
        zmm1[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm1[0].o, arg4[rbx_7], 0xe)
        int64_t rbx_8 = sx.q(r8.d << 2)
        zmm2 = _mm256_maskload_ps(arg11, *(arg1 + rbx_8))
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
            float var_1080_2[0x8] = arg8
            uint32_t var_1100_3[0x8] = arg7
            var_1040.32 = zmm5
            var_d60[0].o = zmm1[0].o
            arg7 = _mm256_cvtepi16_epi32(zmm1[0].o)
            zmm1 = _mm256_slli_epi32(_mm256_maskload_ps(arg11, *(arg2 + rbx_8)), 6)
            zmm0[0].o = zx.o(0)
            float temp0_325[0x8]
            int32_t temp1_29
            temp0_325, temp1_29 = _mm256_i32gather_ps(zmm0, *(arg3 + zmm1[0].q), arg7)
            var_10e0.32 = temp0_325
            temp0_325[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_325[0].o, temp0_325[0].o)
            float temp0_327[0x8]
            int32_t temp1_30
            temp0_327, temp1_30 =
                _mm256_i32gather_ps(temp0_325, *(arg3 + (zmm1 | arg12)[0].q), arg7)
            temp0_327[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_327[0].o, temp0_327[0].o)
            float temp0_329[0x8]
            int32_t temp1_31
            temp0_329, temp1_31 =
                _mm256_i32gather_ps(temp0_327, *(arg3 + (zmm1 | arg13)[0].q), arg7)
            temp0_329[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_329[0].o, temp0_329[0].o)
            float temp0_331[0x8]
            int32_t temp1_32
            temp0_331, temp1_32 =
                _mm256_i32gather_ps(temp0_329, *(arg3 + (zmm1 | arg14)[0].q), arg7)
            arg15[0].o = zx.o(0)
            float temp0_332[0x8]
            int32_t temp1_33
            temp0_332, temp1_33 = _mm256_i32gather_ps(arg15, *(arg3 + (zmm1 | arg15)[0].q), arg7)
            arg15 = temp0_332
            arg16[0].o = zx.o(0)
            float temp0_333[0x8]
            int32_t temp1_34
            temp0_333, temp1_34 = _mm256_i32gather_ps(arg16, *(arg3 + (zmm1 | arg16)[0].q), arg7)
            arg16 = temp0_333
            arg14[0].o = zx.o(0)
            float temp0_334[0x8]
            int32_t temp1_35
            temp0_334, temp1_35 = _mm256_i32gather_ps(arg14, *(arg3 + (zmm1 | arg6)[0].q), arg7)
            arg14 = temp0_334
            arg10[0].o = zx.o(0)
            float temp0_335[0x8]
            int32_t temp1_36
            temp0_335, temp1_36 = _mm256_i32gather_ps(arg10, *(arg3 + (zmm1 | arg10)[0].q), arg7)
            zmm2 = _mm256_broadcast_ss(4.48415509e-44f)
            uint32_t temp0_337[0x8] = _mm256_or_ps(zmm1, zmm2)
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            float temp0_339[0x8]
            int32_t temp1_37
            temp0_339, temp1_37 = _mm256_i32gather_ps(zmm2, *(arg3 + temp0_337[0].q), arg7)
            zmm2 = temp0_339
            arg5 = _mm256_broadcast_ss(5.04467447e-44f)
            arg6 = _mm256_or_ps(zmm1, arg5)
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            float temp0_343[0x8]
            int32_t temp1_38
            temp0_343, temp1_38 = _mm256_i32gather_ps(arg5, *(arg3 + arg6[0].q), arg7)
            arg5 = temp0_343
            float temp0_344[0x8] = _mm256_broadcast_ss(5.60519386e-44f)
            zmm5 = _mm256_or_ps(zmm1, temp0_344)
            temp0_344[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_344[0].o, temp0_344[0].o)
            float temp0_347[0x8]
            int32_t temp1_39
            temp0_347, temp1_39 = _mm256_i32gather_ps(temp0_344, *(arg3 + zmm5[0].q), arg7)
            zmm0 = _mm256_or_ps(zmm1, _mm256_broadcast_ss(6.16571324e-44f))
            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
            float temp0_351[0x8]
            int32_t temp1_40
            temp0_351, temp1_40 = _mm256_i32gather_ps(zmm5, *(arg3 + zmm0[0].q), arg7)
            zmm5 = temp0_351
            arg8 = temp1_40
            zmm0 = _mm256_or_ps(zmm1, _mm256_broadcast_ss(6.72623263e-44f))
            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
            float temp0_355[0x8]
            int32_t temp1_41
            temp0_355, temp1_41 = _mm256_i32gather_ps(arg8, *(arg3 + zmm0[0].q), arg7)
            arg11 = temp1_41
            zmm0 = _mm256_or_ps(zmm1, _mm256_broadcast_ss(7.28675201e-44f))
            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
            float temp0_359[0x8]
            int32_t temp1_42
            temp0_359, temp1_42 = _mm256_i32gather_ps(arg11, *(arg3 + zmm0[0].q), arg7)
            arg12 = temp1_42
            zmm0 = _mm256_or_ps(zmm1, _mm256_broadcast_ss(7.8472714e-44f))
            arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            float temp0_363[0x8]
            int32_t temp1_43
            temp0_363, temp1_43 = _mm256_i32gather_ps(arg12, *(arg3 + zmm0[0].q), arg7)
            zmm0 = _mm256_or_ps(zmm1, _mm256_broadcast_ss(8.40779079e-44f))
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            uint32_t var_1060_2[0x8] = arg7
            float temp0_367[0x8]
            int32_t temp1_44
            temp0_367, temp1_44 = _mm256_i32gather_ps(zmm1, *(arg3 + zmm0[0].q), arg7)
            float var_500[0x8] = var_10e0.32
            float var_4e0[0x8] = temp0_327
            float var_4c0[0x8] = temp0_329
            float var_4a0[0x8] = temp0_331
            uint32_t var_480_1[0x8] = arg15
            uint32_t var_460_1[0x8] = arg16
            uint32_t var_440_1[0x8] = arg14
            uint32_t var_420_1[0x8] = temp0_335
            int32_t var_400_1[0x8] = zmm2
            uint32_t var_3e0_1[0x8] = arg5
            float var_3c0_1[0x8] = temp0_347
            int32_t var_3a0_1[0x8] = zmm5
            float var_380_1[0x8] = temp0_355
            uint32_t var_360_1[0x8] = temp0_359
            uint32_t var_340_1[0x8] = temp0_363
            float var_320_1[0x8] = temp0_367
            temp0_331[0].o = arg17[9]
            zmm2[0].o = arg17[0xd]
            arg5[0].o = arg17[2]
            arg14[0].o = arg17[3]
            zmm5[0].o = arg17[6]
            temp0_355[0].o = arg17[0xa]
            temp0_347[0].o = arg17[0xe]
            arg15[0].o = arg17[7]
            arg16[0].o = arg17[0xb]
            int64_t i_4 = 0
            float temp0_368[0x8] = _mm256_broadcastss_ps(temp0_331[0].o)
            arg7 = _mm256_broadcastss_ps(zmm2[0].o)
            arg10 = _mm256_broadcastss_ps(arg5[0].o)
            arg11 = _mm256_broadcastss_ps(zmm5[0].o)
            arg12 = _mm256_broadcastss_ps(temp0_355[0].o)
            arg13 = _mm256_broadcastss_ps(temp0_347[0].o)
            arg14 = _mm256_broadcastss_ps(arg14[0].o)
            arg15 = _mm256_broadcastss_ps(arg15[0].o)
            arg16 = _mm256_broadcastss_ps(arg16[0].o)
            
            do
                float temp0_377[0x8] = _mm256_broadcast_ss(*arg17)
                zmm5 = *(&var_500 + i_4)
                arg6 = *(&var_4e0 + i_4)
                zmm2 = *(&var_4c0 + i_4)
                arg5 = *(&var_4a0 + i_4)
                float temp0_378[0x8] = _mm256_fmadd_ps(temp0_377, zmm5, arg9)
                float temp0_380[0x8] =
                    _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[4]), arg6, temp0_378)
                float temp0_382[0x8] =
                    _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[8]), zmm2, temp0_380)
                *(&var_1360 + i_4) =
                    _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[0xc]), arg5, temp0_382)
                float temp0_386[0x8] = _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[1]), zmm5, arg9)
                *(&var_1340 + i_4) = _mm256_fmadd_ps(
                    _mm256_fmadd_ps(
                        _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[5]), arg6, temp0_386), zmm2, 
                        temp0_368), 
                    arg5, arg7)
                *(&var_1320 + i_4) = _mm256_fmadd_ps(
                    _mm256_fmadd_ps(
                        _mm256_fmadd_ps(_mm256_fmadd_ps(arg10, zmm5, arg9), arg6, arg11), zmm2, 
                        arg12), 
                    arg5, arg13)
                zmm2 = _mm256_fmadd_ps(zmm2, arg16, 
                    _mm256_fmadd_ps(arg6, arg15, _mm256_fmadd_ps(zmm5, arg14, arg9)))
                *(&var_1300 + i_4) = _mm256_fmadd_ps(_mm256_broadcast_ss(arg17[0xf]), arg5, zmm2)
                i_4 -= -0x80
            while (i_4 != 0x200)
            
            arg10 = var_1360
            arg5 = var_1340
            uint32_t var_1160_4[0x8] = arg5
            arg6 = var_12e0
            float var_10c0_3[0x8] = arg6
            float temp0_400[0x8] = __vaddps_ymmqq_ymmqq_memqq(var_13a0, var_1380_2)
            zmm2 = _mm256_broadcast_ss(0.5f)
            float temp0_402[0x8] = _mm256_mul_ps(temp0_400, zmm2)
            zmm5 = _mm256_mul_ps(temp0_402, arg10)
            float temp0_404[0x8] = _mm256_mul_ps(temp0_402, arg5)
            arg11 = _mm256_mul_ps(__vaddps_ymmqq_ymmqq_memqq(var_1040.32, var_1080_2), zmm2)
            zmm5 = _mm256_fmadd_ps(zmm5, arg11, arg6)
            float temp0_408[0x8] = _mm256_fmadd_ps(temp0_404, arg11, var_12c0)
            arg16 = var_1320
            zmm1 = var_12a0
            float var_da0_2[0x8] = zmm1
            arg12 = _mm256_fmadd_ps(_mm256_mul_ps(temp0_402, arg16), arg11, zmm1)
            arg11 = _mm256_mul_ps(arg11, var_1280)
            arg13 = var_1300
            float temp0_412[0x8] = _mm256_fmadd_ps(temp0_402, arg13, arg11)
            arg11 = _mm256_mul_ps(__vaddps_ymmqq_ymmqq_memqq(var_e20_2, var_1100_3), zmm2)
            zmm5 = _mm256_fmadd_ps(zmm5, arg11, var_1260)
            var_10e0.32 = var_1260
            zmm1 = var_1240
            float temp0_416[0x8] = _mm256_fmadd_ps(temp0_408, arg11, zmm1)
            arg12 = _mm256_fmadd_ps(arg12, arg11, var_1220)
            arg6 = var_1200
            arg11 = _mm256_fmadd_ps(arg11, arg6, temp0_412)
            int32_t var_d80_1
            var_d80_1.32 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_11e0)
            arg14 = __vaddps_ymmqq_ymmqq_memqq(temp0_416, var_11c0)
            float temp0_421[0x8] = __vaddps_ymmqq_ymmqq_memqq(arg12, var_11a0)
            float temp0_422[0x8] = __vaddps_ymmqq_ymmqq_memqq(arg11, var_1180)
            var_1360 = arg10
            var_1340 = var_1160_4
            var_1320 = arg16
            var_1300 = arg13
            arg13 = var_10c0_3
            uint32_t var_a00_2[0x8] = arg13
            zmm0 = var_12c0
            float var_9e0_2[0x8] = zmm0
            zmm5 = var_da0_2
            int32_t var_9c0_2[0x8] = zmm5
            float var_9a0_2[0x8] = var_1280
            uint32_t var_a80_2[0x8] = var_1260
            float var_a60_2[0x8] = zmm1
            uint32_t var_a40_2[0x8] = var_1220
            float var_a20_2[0x8] = arg6
            float temp0_423[0x8] = __vsubps_ymmqq_ymmqq_memqq(var_1080_2, var_1040.32)
            arg5 = __vsubps_ymmqq_ymmqq_memqq(var_e20_2, var_1100_3)
            arg12 = __vsubps_ymmqq_ymmqq_memqq(var_1380_2, var_13a0)
            float temp0_426[0x8] = _mm256_mul_ps(temp0_423, zmm2)
            arg12 = _mm256_mul_ps(arg12, zmm2)
            zmm2 = _mm256_mul_ps(arg5, zmm2)
            arg15 = var_d80_1.32
            uint32_t var_980_1[0x8] = arg15
            uint32_t var_960_1[0x8] = arg14
            float var_940_1[0x8] = temp0_421
            uint32_t var_920_1[0x8] = temp0_422
            arg5 = _mm256_mul_ps(arg12, arg10)
            arg11 = _mm256_mul_ps(arg12, var_1160_4)
            float temp0_431[0x8] = _mm256_mul_ps(arg12, arg16)
            float temp0_432[0x8] = _mm256_mul_ps(temp0_426, arg13)
            arg10 = _mm256_mul_ps(temp0_426, zmm0)
            float temp0_434[0x8] = _mm256_mul_ps(temp0_426, zmm5)
            arg7 = _mm256_broadcast_ss(nanf)
            arg5 = _mm256_add_ps(_mm256_and_ps(arg5, arg7), _mm256_and_ps(temp0_432, arg7))
            float temp0_441[0x8] =
                _mm256_add_ps(_mm256_and_ps(arg11, arg7), _mm256_and_ps(arg10, arg7))
            float temp0_444[0x8] =
                _mm256_add_ps(_mm256_and_ps(temp0_431, arg7), _mm256_and_ps(temp0_434, arg7))
            float temp0_445[0x8] = __vmulps_ymmqq_ymmqq_memqq(zmm2, var_10e0.32)
            arg10 = __vmulps_ymmqq_ymmqq_memqq(zmm2, zmm1)
            zmm2 = __vmulps_ymmqq_ymmqq_memqq(zmm2, var_1220)
            arg5 = _mm256_add_ps(arg5, _mm256_and_ps(temp0_445, arg7))
            float temp0_451[0x8] = _mm256_add_ps(temp0_441, _mm256_and_ps(arg10, arg7))
            zmm2 = _mm256_add_ps(temp0_444, _mm256_and_ps(zmm2, arg7))
            zmm0 = arg15
            arg11 = _mm256_sub_ps(arg15, arg5)
            zmm1 = arg14
            arg9 = _mm256_sub_ps(arg14, temp0_451)
            arg14 = _mm256_sub_ps(temp0_421, zmm2)
            arg10 = _mm256_add_ps(arg15, arg5)
            zmm5 = _mm256_add_ps(zmm1, temp0_451)
            zmm1[0].o = __vpmovzxbw_xmmdq_memq(var_c80_1)
            arg12 = _mm256_add_ps(temp0_421, zmm2)
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            arg7[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
            zmm0[0].o = arg7[0].o & not.o(var_d60[0].o)
            temp0_451[0].o = __vpsllw_xmmdq_xmmdq_immb(zmm0[0].o, 0xf)
            temp0_451[0].o = __vpsraw_xmmdq_xmmdq_immb(temp0_451[0].o, 0xf)
            temp0_451[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_451[0].o, zmm0[0].o)
            char temp0_466 = __vpmovmskb_gpr32d_xmmdq(temp0_451[0].o)
            temp0_451[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_451[0].o, temp0_451[0].o)
            arg7[0].o ^= temp0_451[0].o
            arg7 = _mm256_cvtepi16_epi32(arg7[0].o)
            
            if (temp0_466 == 0)
                zmm1[0].o = zx.o(0)
                arg8 = var_1060_2
                zmm2 = _mm256_andnot_ps(arg7, arg8)
                
                if (_mm256_movemask_ps(zmm2) != 0)
                label_140349924:
                    arg5 = arg7 ^ _mm256_cmpeq_epi32(arg5, arg5)
                    var_1360 = _mm256_maskstore_ps(arg5, arg11)
                    var_1340 = _mm256_maskstore_ps(arg5, arg9)
                    var_1320 = _mm256_maskstore_ps(arg5, arg14)
                    var_1300 = _mm256_maskstore_ps(arg5, arg10)
                    var_12e0 = _mm256_maskstore_ps(arg5, zmm5)
                    var_12c0 = _mm256_maskstore_ps(arg5, arg12)
                    char temp0_991 = _mm256_movemask_ps(arg5)
                    
                    if ((temp0_991 & 1) == 0)
                        if ((temp0_991 & 2) != 0)
                            goto label_14034a9b9
                        
                        goto label_140349972
                    
                    var_12a0[0].b = 1
                    
                    if ((temp0_991 & 2) != 0)
                    label_14034a9b9:
                        var_12a0[0]:1.b = 1
                        
                        if ((temp0_991 & 4) == 0)
                            goto label_14034997a
                        
                        goto label_14034a9c9
                    
                label_140349972:
                    
                    if ((temp0_991 & 4) == 0)
                    label_14034997a:
                        
                        if ((temp0_991 & 8) != 0)
                            goto label_14034a9d9
                        
                        goto label_140349982
                    
                label_14034a9c9:
                    var_12a0[0]:2.b = 1
                    
                    if ((temp0_991 & 8) != 0)
                    label_14034a9d9:
                        var_12a0[0]:3.b = 1
                        
                        if ((temp0_991 & 0x10) == 0)
                            goto label_14034998a
                        
                        goto label_14034a9e9
                    
                label_140349982:
                    
                    if ((temp0_991 & 0x10) == 0)
                    label_14034998a:
                        
                        if ((temp0_991 & 0x20) != 0)
                            goto label_14034a9f9
                        
                        goto label_140349992
                    
                label_14034a9e9:
                    var_12a0[1].b = 1
                    
                    if ((temp0_991 & 0x20) != 0)
                    label_14034a9f9:
                        var_12a0[1]:1.b = 1
                        
                        if ((temp0_991 & 0x40) == 0)
                            goto label_14034999a
                        
                        goto label_14034aa09
                    
                label_140349992:
                    
                    if ((temp0_991 & 0x40) != 0)
                    label_14034aa09:
                        var_12a0[1]:2.b = 1
                        
                        if (temp0_991 s< 0)
                            var_12a0[1]:3.b = 1
                    else
                    label_14034999a:
                        
                        if (temp0_991 s< 0)
                            var_12a0[1]:3.b = 1
                    
                    _mm256_movemask_ps(zmm1 | zmm2)
            else
                var_1380_2[0].o = zmm0[0].o
                arg15 = var_ce0_1
                zmm2 = arg12
                var_13a0 = arg11
                float temp0_469[0x8] = _mm256_min_ps(var_d40_1, arg11)
                arg16 = var_cc0_1
                arg11 = zmm5
                var_1360 = _mm256_maskstore_ps(arg7, temp0_469)
                var_1340 = _mm256_maskstore_ps(arg7, _mm256_min_ps(var_d20_1, arg9))
                var_1320 = _mm256_maskstore_ps(arg7, _mm256_min_ps(var_d00_1, arg14))
                arg12 = zmm2
                var_1300 = _mm256_maskstore_ps(arg7, _mm256_max_ps(arg15, arg10))
                arg13 = arg11
                var_12e0 = _mm256_maskstore_ps(arg7, _mm256_max_ps(arg16, arg11))
                zmm5 = _mm256_max_ps(var_ca0_1, zmm2)
                var_12c0 = _mm256_maskstore_ps(arg7, zmm5)
                zmm5[0].o = zmm1[0].o & data_142fc92e0
                arg5[0].o = __vpcmpeqw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
                arg5[0].o ^= temp0_451[0].o
                arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, var_d20_1[0].o)
                char temp0_483 = __vpmovmskb_gpr32d_xmmdq(arg5[0].o)
                
                if ((temp0_483 & 1) != 0)
                    var_12a0[0].b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0)
                
                if ((temp0_483 & 2) != 0)
                    var_12a0[0]:1.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 2)
                
                arg8 = var_1060_2
                zmm5 = arg13
                arg11 = var_13a0
                
                if ((temp0_483 & 4) == 0)
                    if ((temp0_483 & 8) != 0)
                        goto label_14034989d
                    
                    goto label_140347fe5
                
                var_12a0[0]:2.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 4)
                
                if ((temp0_483 & 8) != 0)
                label_14034989d:
                    var_12a0[0]:3.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 6)
                    
                    if ((temp0_483 & 0x10) == 0)
                        goto label_140347fee
                    
                    goto label_1403498b1
                
            label_140347fe5:
                
                if ((temp0_483 & 0x10) == 0)
                label_140347fee:
                    
                    if ((temp0_483 & 0x20) != 0)
                        goto label_1403498c5
                    
                    goto label_140347ff7
                
            label_1403498b1:
                var_12a0[1].b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 8)
                
                if ((temp0_483 & 0x20) != 0)
                label_1403498c5:
                    var_12a0[1]:1.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xa)
                    
                    if ((temp0_483 & 0x40) == 0)
                        goto label_140348000
                    
                    goto label_1403498d9
                
            label_140347ff7:
                
                if ((temp0_483 & 0x40) == 0)
                label_140348000:
                    
                    if (temp0_483 s< 0)
                        goto label_1403498ec
                    
                    goto label_140348008
                
            label_1403498d9:
                var_12a0[1]:2.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xc)
                
                if (temp0_483 s>= 0)
                label_140348008:
                    
                    if (temp0_320 != temp0_466)
                    label_14034990b:
                        zmm1 = _mm256_srai_epi32(
                            _mm256_slli_epi32(__vpmovzxwd_ymmqq_memdq(var_1380_2[0].o), 0x1f), 0x1f)
                        zmm2 = _mm256_andnot_ps(arg7, arg8)
                        
                        if (_mm256_movemask_ps(zmm2) != 0)
                            goto label_140349924
                else
                label_1403498ec:
                    var_12a0[1]:3.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xe)
                    
                    if (temp0_320 != temp0_466)
                        goto label_14034990b
            
            zmm2 = var_1360
            arg5 = var_1340
            arg6 = var_1320
            zmm5 = var_1300
            arg7 = var_12e0
            zmm0 = var_12c0
            zmm1[0].o = __vpmovzxbw_xmmdq_memq(var_12a0[0].q)
            var_d40_1 = _mm256_maskstore_ps(arg8, zmm2)
            var_d20_1 = _mm256_maskstore_ps(arg8, arg5)
            var_d00_1 = _mm256_maskstore_ps(arg8, arg6)
            var_ce0_1 = _mm256_maskstore_ps(arg8, zmm5)
            var_cc0_1 = _mm256_maskstore_ps(arg8, arg7)
            var_ca0_1 = _mm256_maskstore_ps(arg8, zmm0)
            
            if ((temp0_320 & 1) == 0)
                if ((temp0_320 & 2) != 0)
                    goto label_140349e71
                
                goto label_140349a2a
            
            var_c80_1[0] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0)
            
            if ((temp0_320 & 2) != 0)
            label_140349e71:
                var_c80_1[1] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 2)
                
                if ((temp0_320 & 4) == 0)
                    goto label_140349a32
                
                goto label_140349e84
            
        label_140349a2a:
            
            if ((temp0_320 & 4) == 0)
            label_140349a32:
                
                if ((temp0_320 & 8) != 0)
                    goto label_140349e97
                
                goto label_140349a3a
            
        label_140349e84:
            var_c80_1[2] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 4)
            
            if ((temp0_320 & 8) != 0)
            label_140349e97:
                var_c80_1[3] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 6)
                
                if ((temp0_320 & 0x10) == 0)
                    goto label_140349a42
                
                goto label_140349eaa
            
        label_140349a3a:
            
            if ((temp0_320 & 0x10) == 0)
            label_140349a42:
                
                if ((temp0_320 & 0x20) != 0)
                    goto label_140349ebd
                
                goto label_140349a4a
            
        label_140349eaa:
            var_c80_1[4] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 8)
            
            if ((temp0_320 & 0x20) != 0)
            label_140349ebd:
                var_c80_1[5] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xa)
                
                if ((temp0_320 & 0x40) == 0)
                    goto label_140349a52
                
                goto label_140349ed0
            
        label_140349a4a:
            
            if ((temp0_320 & 0x40) != 0)
            label_140349ed0:
                var_c80_1[6] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xc)
                
                if (temp0_320 s< 0)
                    var_c80_1[7] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xe)
            else
            label_140349a52:
                
                if (temp0_320 s< 0)
                    var_c80_1[7] = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xe)
    
    zmm0[0].o = var_d40_1[0].o
    float var_f00_1 = zmm0[0]
    float var_ee4_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float var_ec8_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    float var_eac_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
    zmm0[0].o = var_d40_1[4].o
    float var_e90_1 = zmm0[0]
    float var_e74_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float var_e58_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    float var_e3c_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
    zmm0[0].o = var_d20_1[0].o
    float var_efc = zmm0[0]
    float var_ee0_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float var_ec4_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    float var_ea8_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
    zmm0[0].o = var_d20_1[4].o
    float var_e8c_1 = zmm0[0]
    float var_e70_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float var_e54_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    float var_e38_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
    zmm0[0].o = var_d00_1[0].o
    float var_ef8 = zmm0[0]
    float var_edc_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float var_ec0_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    float var_ea4_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
    zmm0[0].o = var_d00_1[4].o
    float var_e88_1 = zmm0[0]
    float var_e6c_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float var_e50_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    float var_e34_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
    zmm0[0].o = var_ce0_1[0].o
    float var_ef4 = zmm0[0]
    float var_ed8_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float var_ebc_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    float var_ea0_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
    zmm0[0].o = var_ce0_1[4].o
    float var_e84_1 = zmm0[0]
    float var_e68_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float var_e4c_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    float var_e30_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
    zmm0[0].o = var_cc0_1[0].o
    float var_ef0 = zmm0[0]
    float var_ed4_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float var_eb8_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    float var_e9c_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
    zmm0[0].o = var_cc0_1[4].o
    float var_e80_1 = zmm0[0]
    float var_e64_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float var_e48_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    float var_e2c_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
    zmm0[0].o = var_ca0_1[0].o
    float var_eec = zmm0[0]
    float var_ed0_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float var_eb4_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    float var_e98_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
    zmm0[0].o = var_ca0_1[4].o
    float var_e7c_1 = zmm0[0]
    float var_e60_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
    float var_e44_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
    float var_e28_1 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 3)
    zmm0[0].o = zx.o(var_c80_1)
    char var_ee8[0x4]
    var_ee8[0] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0)
    uint8_t var_ecc_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 1)
    uint8_t var_eb0_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 2)
    uint8_t var_e94_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 3)
    uint8_t var_e78_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 4)
    uint8_t var_e5c_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 5)
    uint8_t var_e40_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 6)
    uint8_t var_e24_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 7)
    
    for (i_2 = 0xff; i_2 != 0; )
        uint64_t rcx_38 = _tzcnt_u64(i_2)
        i_2 &= not.q(1 << (rcx_38 u% 0x40))
        uint64_t rdx_18 = rcx_38 * 0x1c
        char rbx_19 = arg18[3].b
        char rcx_39 = var_ee8[rdx_18]
        
        if (rbx_19 != 0 && rcx_39 != 0)
            zmm0[0].o = var_13a0[rcx_38 * 7 + 0x128]
            zmm1[0].o = __vmovsd_xmmdq_memq(*arg18)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg18[1].d, 0x20)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, (&var_efc)[rcx_38 * 7], 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, (&var_ef8)[rcx_38 * 7], 0x20)
            zmm2[0].o = __vmovsd_xmmdq_memq(*(arg18 + 0xc))
            zmm0 = _mm256_min_ps(zmm1, zmm0)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg18 + 0x14), 0x20)
            zmm1[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
            zmm2[0].o = __vmovsd_xmmdq_memq(*(&var_ef4 + rdx_18))
            arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, (&var_eec)[rcx_38 * 7], 0x20)
            zmm2[0].o = _mm_permute_pd(zmm0[0].o, 1)
            arg5 = _mm256_max_ps(arg5, arg6)
            arg6[0].o = __vmovshdup_xmmdq_xmmdq(arg5[0].o)
            zmm5[0].o = _mm_permute_pd(arg5[0].o, 1)
        else if (rcx_39 == 0)
            rbx_19 = arg18[3].b
            zmm5[0].o = *(arg18 + 0x14)
            arg6[0].o = arg18[2].d
            arg5[0].o = *(arg18 + 0xc)
            zmm2[0].o = arg18[1].d
            zmm0[0].o = *arg18
            zmm1[0].o = *(arg18 + 4)
        else
            zmm0[0].o = var_13a0[rcx_38 * 7 + 0x128]
            zmm1[0].o = (&var_efc)[rcx_38 * 7]
            zmm2[0].o = (&var_ef8)[rcx_38 * 7]
            arg5[0].o = (&var_ef4)[rcx_38 * 7]
            arg6[0].o = (&var_ef0)[rcx_38 * 7]
            zmm5[0].o = (&var_eec)[rcx_38 * 7]
            rbx_19 = rcx_39
        
        *arg18 = zmm0[0]
        *(arg18 + 4) = zmm1[0]
        arg18[1].d = zmm2[0]
        *(arg18 + 0xc) = arg5[0]
        arg18[2].d = arg6[0]
        *(arg18 + 0x14) = zmm5[0]
        arg18[3].b = rbx_19
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
return i_2
