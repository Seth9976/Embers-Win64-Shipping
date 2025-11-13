// 函数: sub_140344d20
// 地址: 0x140344d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg17[0].o
int128_t var_68 = arg16[0].o
int128_t var_78 = arg15[0].o
int128_t var_88 = arg14[0].o
int128_t var_98 = arg13[0].o
int128_t var_a8 = arg12[0].o
int128_t var_b8 = arg11[0].o
int128_t var_c8 = arg10[0].o
int128_t var_d8 = arg9[0].o
int32_t rdx_4 = ((arg34 s>> 0x1f u>> 0x1d) + arg34) & 0xfffffff8
arg29[0].o = _mm_mask_xor_ps(arg5, arg29[0].o, arg29[0].o)
float var_780[0x8] = _mm256_mask_store_ps(arg5, arg29)
float var_7a0[0x8] = _mm256_mask_store_ps(arg5, arg29)
float var_7c0[0x8] = _mm256_mask_store_ps(arg5, arg29)
float var_7e0[0x8] = _mm256_mask_store_ps(arg5, arg29)
float var_800[0x8] = _mm256_mask_store_ps(arg5, arg29)
uint32_t var_820[0x8] = _mm256_mask_store_ps(arg5, arg29)
int64_t var_760 = 0
uint32_t zmm0[0x8]
float zmm16[0x8]
uint32_t var_a20[0x8]
float var_a00[0x8]
float var_9e0[0x8]
float var_9c0[0x8]
float var_9a0[0x8]
float var_980[0x8]
float var_960[0x8]
float var_940[0x8]
float var_920[0x8]
float var_900[0x8]
float var_8e0[0x8]
float var_8c0[0x8]
float var_8a0[0x8]
float var_880[0x8]
float var_860[0x8]
float var_840[0x8]
uint32_t rcx_7
uint64_t r11
float zmm1[0x8]
float zmm2[0x8]
float zmm17[0x8]

if (rdx_4 s<= 0)
    r11 = 0
    rcx_7 = arg34
    
    if (0 s< rcx_7)
    label_1403459a4:
        zmm1 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_mask_set1_epi32(arg5, r11.d), data_142fc93a0)
        zmm0 = _mm256_mask_set1_epi32(arg5, rcx_7)
        uint64_t k2_6 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, zmm0, zmm1)
        zmm2 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 7)
        int64_t k1_16
        char temp0_254
        temp0_254, k1_16 = _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k2_6), 
            *(arg4 + (zmm2[0].q << 2)))
        arg11 = temp0_254
        zmm16 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 0x1c)
        zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm16, 4)
        int64_t k1_17 = __kmovq_maskmskw_masku64_avx512(k2_6)
        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
        int64_t k1_18
        char temp0_258
        temp0_258, k1_18 = _mm256_mmask_i32gather_ps(k1_17, *(arg4 + zmm2[0].q))
        arg12 = temp0_258
        arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm16, 8)
        int64_t k1_19 = __kmovq_maskmskw_masku64_avx512(k2_6)
        arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
        int64_t k1_20
        char temp0_261
        temp0_261, k1_20 = _mm256_mmask_i32gather_ps(k1_19, *(arg4 + arg6[0].q))
        arg13 = temp0_261
        arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm16, 0xc)
        int64_t k1_21 = __kmovq_maskmskw_masku64_avx512(k2_6)
        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
        int64_t k1_22
        char temp0_264
        temp0_264, k1_22 = _mm256_mmask_i32gather_ps(k1_21, *(arg4 + arg7[0].q))
        arg14 = temp0_264
        arg8 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm16, 0x10)
        int64_t k1_23 = __kmovq_maskmskw_masku64_avx512(k2_6)
        arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
        int64_t k1_24
        char temp0_267
        temp0_267, k1_24 = _mm256_mmask_i32gather_ps(k1_23, *(arg4 + arg8[0].q))
        arg15 = temp0_267
        zmm17 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm16, 0x14)
        int64_t k1_25 = __kmovq_maskmskw_masku64_avx512(k2_6)
        arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
        int64_t k1_26
        char temp0_270
        temp0_270, k1_26 = _mm256_mmask_i32gather_ps(k1_25, *(arg4 + zmm17[0].q))
        arg16 = temp0_270
        int32_t r11_1 = r11.d << 2
        zmm17 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k2_6, zmm16, 0x18)
        zmm16[0].o = _mm_mask_xor_epi32(arg5, zmm16[0].o, zmm16[0].o)
        int64_t r10_3 = sx.q(zmm17[0])
        int64_t r14_3 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(zmm17[0].o, 1))
        int64_t r15_2 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(zmm17[0].o, 2))
        int64_t rdi_9 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(zmm17[0].o, 3))
        arg10[0].o = _mm256_extracti32x4_epi32(arg5, zmm17, 1)
        int64_t rsi_5 = sx.q(arg10[0])
        int64_t rcx_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 1))
        int64_t rdx_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 2))
        int32_t rbx_5 = __vpextrd_gpr32d_xmmdq_immb(arg10[0].o, 3)
        arg10[0].o = zx.o(0)
        arg10[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zx.o(0), arg4[r10_3], 0)
        arg10[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg10[0].o, arg4[r14_3], 2)
        arg10[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg10[0].o, arg4[r15_2], 4)
        arg10[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg10[0].o, arg4[rdi_9], 6)
        arg10[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg10[0].o, arg4[rsi_5], 8)
        arg10[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg10[0].o, arg4[rcx_10], 0xa)
        arg10[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg10[0].o, arg4[rdx_9], 0xc)
        arg10[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(arg10[0].o, arg4[sx.q(rbx_5)], 0xe)
        int64_t rbx_6 = sx.q(r11_1)
        zmm17 = _mm256_mask_loadu_epi32(k2_6, *(arg1 + rbx_6))
        arg9 = _mm256_cmpeq_epi32(arg9, arg9)
        uint64_t k1_28 = _mm256_cmp_epi32_mask(
            _mm_mask_test_epi16_mask(k2_6, arg10[0].o, arg10[0].o), zmm17, arg9, 4)
        _kortest_mask8_u8(k1_28, k1_28)
        
        if (r11_1 != 0)
            char temp0_290 = _cvtmask32_u32(k1_28)
            zmm17 = _mm256_mask_slli_epi32(arg5, _mm256_mask_loadu_epi32(k2_6, *(arg2 + rbx_6)), 6)
            int64_t k2_7 = __kmovq_maskmskw_masku64_avx512(k1_28)
            int64_t k3_31 = __kmovq_maskmskw_masku64_avx512(k1_28)
            arg18[0].o = _mm_mask_xor_ps(arg5, arg18[0].o, arg18[0].o)
            int64_t k3_32
            char temp0_294
            temp0_294, k3_32 = _mm256_mmask_i32gather_ps(k3_31, *(arg3 + zmm17[0].q))
            arg19 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm17, 4)
            int64_t k3_33 = __kmovq_maskmskw_masku64_avx512(k1_28)
            arg20[0].o = _mm_mask_xor_ps(arg5, arg20[0].o, arg20[0].o)
            int64_t k3_34
            char temp0_297
            temp0_297, k3_34 = _mm256_mmask_i32gather_ps(k3_33, *(arg3 + arg19[0].q))
            arg19 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm17, 8)
            int64_t k3_35 = __kmovq_maskmskw_masku64_avx512(k1_28)
            arg21[0].o = _mm_mask_xor_ps(arg5, arg21[0].o, arg21[0].o)
            int64_t k3_36
            char temp0_300
            temp0_300, k3_36 = _mm256_mmask_i32gather_ps(k3_35, *(arg3 + arg19[0].q))
            arg19 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm17, 0xc)
            int64_t k3_37 = __kmovq_maskmskw_masku64_avx512(k1_28)
            arg22[0].o = _mm_mask_xor_ps(arg5, arg22[0].o, arg22[0].o)
            int64_t k3_38
            char temp0_303
            temp0_303, k3_38 = _mm256_mmask_i32gather_ps(k3_37, *(arg3 + arg19[0].q))
            arg19 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm17, 0x10)
            int64_t k3_39 = __kmovq_maskmskw_masku64_avx512(k1_28)
            arg23[0].o = _mm_mask_xor_ps(arg5, arg23[0].o, arg23[0].o)
            int64_t k3_40
            char temp0_306
            temp0_306, k3_40 = _mm256_mmask_i32gather_ps(k3_39, *(arg3 + arg19[0].q))
            arg23 = temp0_306
            arg19 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm17, 0x14)
            int64_t k3_41 = __kmovq_maskmskw_masku64_avx512(k1_28)
            arg24[0].o = _mm_mask_xor_epi32(arg5, arg24[0].o, arg24[0].o)
            int64_t k3_42
            char temp0_309
            temp0_309, k3_42 = _mm256_mmask_i32gather_ps(k3_41, *(arg3 + arg19[0].q))
            arg19 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm17, 0x18)
            int64_t k3_43 = __kmovq_maskmskw_masku64_avx512(k1_28)
            arg25[0].o = _mm_mask_xor_epi32(arg5, arg25[0].o, arg25[0].o)
            int64_t k3_44
            char temp0_312
            temp0_312, k3_44 = _mm256_mmask_i32gather_ps(k3_43, *(arg3 + arg19[0].q))
            arg19 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm17, 0x1c)
            int64_t k3_45 = __kmovq_maskmskw_masku64_avx512(k1_28)
            arg26[0].o = _mm_mask_xor_ps(arg5, arg26[0].o, arg26[0].o)
            int64_t k3_46
            char temp0_315
            temp0_315, k3_46 = _mm256_mmask_i32gather_ps(k3_45, *(arg3 + arg19[0].q))
            arg19 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm17, 0x20)
            int64_t k3_47 = __kmovq_maskmskw_masku64_avx512(k1_28)
            arg27[0].o = _mm_mask_xor_ps(arg5, arg27[0].o, arg27[0].o)
            int64_t k3_48
            char temp0_318
            temp0_318, k3_48 = _mm256_mmask_i32gather_ps(k3_47, *(arg3 + arg19[0].q))
            arg19 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm17, 0x24)
            int64_t k3_49 = __kmovq_maskmskw_masku64_avx512(k1_28)
            arg28[0].o = _mm_mask_xor_ps(arg5, arg28[0].o, arg28[0].o)
            int64_t k3_50
            char temp0_321
            temp0_321, k3_50 = _mm256_mmask_i32gather_ps(k3_49, *(arg3 + arg19[0].q))
            arg19 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm17, 0x28)
            int64_t k3_51 = __kmovq_maskmskw_masku64_avx512(k1_28)
            arg29[0].o = _mm_mask_xor_ps(arg5, arg29[0].o, arg29[0].o)
            int64_t k3_52
            char temp0_324
            temp0_324, k3_52 = _mm256_mmask_i32gather_ps(k3_51, *(arg3 + arg19[0].q))
            arg19 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm17, 0x2c)
            int64_t k3_53 = __kmovq_maskmskw_masku64_avx512(k1_28)
            arg30[0].o = _mm_mask_xor_ps(arg5, arg30[0].o, arg30[0].o)
            int64_t k3_54
            char temp0_327
            temp0_327, k3_54 = _mm256_mmask_i32gather_ps(k3_53, *(arg3 + arg19[0].q))
            arg19 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm17, 0x30)
            int64_t k3_55 = __kmovq_maskmskw_masku64_avx512(k1_28)
            arg31[0].o = _mm_mask_xor_ps(arg5, arg31[0].o, arg31[0].o)
            int64_t k3_56
            char temp0_330
            temp0_330, k3_56 = _mm256_mmask_i32gather_ps(k3_55, *(arg3 + arg19[0].q))
            arg19 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm17, 0x34)
            int64_t k3_58
            char temp0_332
            temp0_332, k3_58 = _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_28), 
                *(arg3 + arg19[0].q))
            arg9 = temp0_332
            arg19 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm17, 0x38)
            int64_t k3_60
            char temp0_334
            temp0_334, k3_60 = _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_28), 
                *(arg3 + arg19[0].q))
            arg10 = temp0_334
            zmm17 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm17, 0x3c)
            arg19[0].o = _mm_mask_xor_ps(arg5, arg19[0].o, arg19[0].o)
            int64_t k2_8
            char temp0_337
            temp0_337, k2_8 = _mm256_mmask_i32gather_ps(k2_7, *(arg3 + zmm17[0].q))
            int256_t var_560 = _mm256_mask_store_ps(arg5, temp0_294)
            int256_t var_540 = _mm256_mask_store_ps(arg5, temp0_297)
            int256_t var_520 = _mm256_mask_store_ps(arg5, temp0_300)
            int256_t var_500 = _mm256_mask_store_ps(arg5, temp0_303)
            int256_t var_4e0_1 = _mm256_mask_store_ps(arg5, arg23)
            int256_t var_4c0_1 = _mm256_mask_store_ps(arg5, temp0_309)
            int256_t var_4a0_1 = _mm256_mask_store_ps(arg5, temp0_312)
            int256_t var_480_1 = _mm256_mask_store_ps(arg5, temp0_315)
            int256_t var_460_1 = _mm256_mask_store_ps(arg5, temp0_318)
            int256_t var_440_1 = _mm256_mask_store_ps(arg5, temp0_321)
            int256_t var_420_1 = _mm256_mask_store_ps(arg5, temp0_324)
            int256_t var_400_1 = _mm256_mask_store_ps(arg5, temp0_327)
            int256_t var_3e0_1 = _mm256_mask_store_ps(arg5, temp0_330)
            float var_3c0_1[0x8] = arg9
            float var_3a0_1[0x8] = arg10
            int256_t var_380_1 = _mm256_mask_store_ps(arg5, temp0_337)
            arg10[0].o = (*arg32)[9]
            arg9[0].o = (*arg32)[0xd]
            zmm0[0].o = (*arg32)[2]
            arg23[0].o = _mm_mask_load_ss(arg5, (*arg32)[3])
            zmm2[0].o = (*arg32)[6]
            arg6[0].o = (*arg32)[0xa]
            arg7[0].o = (*arg32)[0xe]
            arg8[0].o = (*arg32)[7]
            zmm1[0].o = (*arg32)[0xb]
            int64_t i = 0
            zmm17 = _mm256_mask_broadcastss_ps(arg5, arg10[0].o)
            arg18 = _mm256_mask_broadcastss_ps(arg5, arg9[0].o)
            arg19 = _mm256_mask_broadcastss_ps(arg5, zmm0[0].o)
            arg20 = _mm256_mask_broadcastss_ps(arg5, zmm2[0].o)
            arg21 = _mm256_mask_broadcastss_ps(arg5, arg6[0].o)
            arg22 = _mm256_mask_broadcastss_ps(arg5, arg7[0].o)
            arg23 = _mm256_mask_broadcastss_ps(arg5, arg23[0].o)
            arg24 = _mm256_mask_broadcastss_ps(arg5, arg8[0].o)
            arg25 = _mm256_mask_broadcastss_ps(arg5, zmm1[0].o)
            bool cond:4_1
            
            do
                zmm0 = *(&var_560 + i)
                zmm1 = *(&var_540 + i)
                zmm2 = *(&var_520 + i)
                arg6 = *(&var_500 + i)
                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                arg7 = __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                    __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                        __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                            __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg7, arg5, zmm0, 
                                *arg32), 
                            arg5, zmm1, (*arg32)[4]), 
                        arg5, zmm2, arg32[1][0]), 
                    arg5, arg6, (*arg32)[0xc])
                *(&var_a20 + i) = arg7
                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                *(&var_a00 + i) = _mm256_mask3_fmadd_ps(
                    _mm256_mask3_fmadd_ps(
                        __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                            __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg7, arg5, zmm0, 
                                (*arg32)[1]), 
                            arg5, zmm1, (*arg32)[5]), 
                        arg5, zmm2, zmm17), 
                    arg5, arg6, arg18)
                arg7 = _mm256_mask3_fmadd_ps(
                    _mm256_mask3_fmadd_ps(
                        _mm256_mask3_fmadd_ps(
                            _mm256_mask3_fmadd_ps(_mm256_mask_mov_ps(arg5, arg19), arg5, zmm0, 
                                zmm16), 
                            arg5, zmm1, arg20), 
                        arg5, zmm2, arg21), 
                    arg5, arg6, arg22)
                *(&var_9e0 + i) = arg7
                *(&var_9c0 + i) = __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                    _mm256_mask3_fmadd_ps(zmm2, arg5, arg25, 
                        _mm256_mask3_fmadd_ps(zmm1, arg5, arg24, 
                            _mm256_mask3_fmadd_ps(zmm0, arg5, arg23, zmm16))), 
                    arg5, arg6, (*arg32)[0xf])
                i -= -0x80
                cond:4_1 = i == 0x200
            while (i != 0x200)
            
            arg19 = _mm256_mask_load_ps(arg5, var_a20)
            arg20 = _mm256_mask_load_ps(arg5, var_a00)
            arg21 = _mm256_mask_load_ps(arg5, var_9e0)
            zmm0 = var_9c0
            zmm16 = _mm256_mask_load_ps(arg5, var_920)
            zmm17 = _mm256_mask_load_ps(arg5, var_900)
            arg18 = _mm256_mask_load_ps(arg5, var_8e0)
            arg22 = _mm256_mask_add_ps(arg5, arg11, arg14)
            arg23 = _mm256_mask_add_ps(arg5, arg13, arg16)
            arg24 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 0.5f)
            arg22 = _mm256_mask_mul_ps(arg5, arg22, arg24)
            arg23 = _mm256_mask_mul_ps(arg5, arg23, arg24)
            arg25 = _mm256_mask_mul_ps(arg5, arg22, arg19)
            arg26 = _mm256_mask_mul_ps(arg5, arg22, arg20)
            arg27 = _mm256_mask_mul_ps(arg5, arg22, arg21)
            arg28 = _mm256_mask_mul_ps(arg5, _mm256_mask_add_ps(arg5, arg12, arg15), arg24)
            arg25 = _mm256_mask3_fmadd_ps(arg25, arg5, arg28, var_9a0)
            arg26 = _mm256_mask3_fmadd_ps(arg26, arg5, arg28, var_980)
            arg27 = _mm256_mask3_fmadd_ps(arg27, arg5, arg28, var_960)
            arg22 =
                _mm256_mask3_fmadd_ps(arg22, arg5, zmm0, _mm256_mask_mul_ps(arg5, arg28, var_940))
            arg25 = _mm256_mask3_fmadd_ps(arg25, arg5, arg23, zmm16)
            arg26 = _mm256_mask3_fmadd_ps(arg26, arg5, arg23, zmm17)
            arg27 = _mm256_mask3_fmadd_ps(arg27, arg5, arg23, arg18)
            arg23 = _mm256_mask3_fmadd_ps(arg23, arg5, var_8c0, arg22)
            arg22 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg25, var_8a0)
            arg25 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg26, var_880)
            arg26 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg27, var_860)
            arg23 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg23, var_840)
            var_a20 = _mm256_mask_store_ps(arg5, arg19)
            var_a00 = _mm256_mask_store_ps(arg5, arg20)
            var_9e0 = _mm256_mask_store_ps(arg5, arg21)
            var_9c0 = zmm0
            float var_5e0_2[0x8] = var_9a0
            float var_5c0_2[0x8] = var_980
            float var_5a0_2[0x8] = var_960
            float var_580_2[0x8] = var_940
            int256_t var_660_2 = _mm256_mask_store_ps(arg5, zmm16)
            int256_t var_640_2 = _mm256_mask_store_ps(arg5, zmm17)
            int256_t var_620_2 = _mm256_mask_store_ps(arg5, arg18)
            float var_600_2[0x8] = var_8c0
            zmm0 = _mm256_sub_ps(arg15, arg12)
            arg7 = _mm256_sub_ps(arg16, arg13)
            zmm0 = _mm256_mask_mul_ps(arg5, zmm0, arg24)
            arg8 = _mm256_mask_mul_ps(arg5, _mm256_sub_ps(arg14, arg11), arg24)
            int256_t var_160_1 = _mm256_mask_store_ps(arg5, arg22)
            int256_t var_140_1 = _mm256_mask_store_ps(arg5, arg25)
            int256_t var_120_1 = _mm256_mask_store_ps(arg5, arg26)
            arg7 = _mm256_mask_mul_ps(arg5, arg7, arg24)
            int256_t var_100_1 = _mm256_mask_store_ps(arg5, arg23)
            arg19 = _mm256_mask_mul_ps(arg5, arg8, arg19)
            arg20 = _mm256_mask_mul_ps(arg5, arg8, arg20)
            arg8 = _mm256_mask_mul_ps(arg5, arg8, arg21)
            zmm1 = _mm256_mul_ps(zmm0, var_9a0)
            zmm2 = _mm256_mul_ps(zmm0, var_980)
            zmm0 = _mm256_mul_ps(zmm0, var_960)
            arg6 = _mm256_broadcast_ss(nanf)
            zmm1 = _mm256_mask_add_ps(arg5, _mm256_mask_and_ps(arg5, arg19, arg6), 
                _mm256_and_ps(zmm1, arg6))
            zmm2 = _mm256_mask_add_ps(arg5, _mm256_mask_and_ps(arg5, arg20, arg6), 
                _mm256_and_ps(zmm2, arg6))
            zmm0 = _mm256_add_ps(_mm256_and_ps(arg8, arg6), _mm256_and_ps(zmm0, arg6))
            arg8 = _mm256_mask_mul_ps(arg5, arg7, zmm16)
            zmm16 = _mm256_mask_mul_ps(arg5, arg7, zmm17)
            arg7 = _mm256_mask_mul_ps(arg5, arg7, arg18)
            zmm1 = _mm256_add_ps(zmm1, _mm256_and_ps(arg8, arg6))
            arg8 = _mm256_add_ps(zmm2, _mm256_mask_and_ps(arg5, zmm16, arg6))
            zmm0 = _mm256_add_ps(zmm0, _mm256_and_ps(arg7, arg6))
            zmm16 = _mm256_mask_sub_ps(arg5, arg22, zmm1)
            zmm17 = _mm256_mask_sub_ps(arg5, arg25, arg8)
            zmm2 = _mm256_mask_sub_ps(arg5, arg26, zmm0)
            arg6 = _mm256_mask_add_ps(arg5, arg22, zmm1)
            arg7 = _mm256_mask_add_ps(arg5, arg25, arg8)
            arg10[0].o = zx.o(var_760)
            arg8 = _mm256_mask_add_ps(arg5, arg26, zmm0)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            arg9[0].o = __vpunpcklbw_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
            zmm0[0].o = __vpmovzxbw_xmmdq_xmmq(arg10[0].q)
            arg5 = _mm_mask_test_epi16_mask(k1_28, arg9[0].o, arg9[0].o)
            _kortest_mask8_u8(arg5, arg5)
            
            if (i == 0x200)
                goto label_14034625d
            
            int64_t k2_9 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, zmm0[0].o, data_142fc92e0)
            arg18 = _mm256_mask_load_ps(arg5, var_800)
            arg19 = _mm256_mask_load_ps(arg5, var_7e0)
            arg20 = _mm256_mask_load_ps(arg5, var_7c0)
            zmm1 = _mm256_mask_min_ps(arg5, var_820, zmm16)
            arg18 = _mm256_mask_min_ps(arg5, arg18, zmm17)
            arg19 = _mm256_mask_min_ps(arg5, arg19, zmm2)
            arg20 = _mm256_mask_max_ps(arg5, arg20, arg6)
            arg21 = _mm256_mask_max_ps(arg5, _mm256_mask_load_ps(arg5, var_7a0), arg7)
            arg22 = _mm256_mask_max_ps(arg5, _mm256_mask_load_ps(arg5, var_780), arg8)
            var_a20 = _mm256_mask_storeu_ps(k2_9, zmm1)
            var_a00 = _mm256_mask_storeu_ps(k2_9, arg18)
            var_9e0 = _mm256_mask_storeu_ps(k2_9, arg19)
            var_9c0 = _mm256_mask_storeu_ps(k2_9, arg20)
            var_9a0 = _mm256_mask_storeu_ps(k2_9, arg21)
            var_980 = _mm256_mask_storeu_ps(k2_9, arg22)
            char temp0_477 = _cvtmask32_u32(k2_9)
            
            if ((temp0_477 & 1) == 0)
                if ((temp0_477 & 2) != 0)
                    goto label_1403461e6
                
                goto label_1403461ae
            
            var_960[0].b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0)
            
            if ((temp0_477 & 2) != 0)
            label_1403461e6:
                var_960[0]:1.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 2)
                
                if ((temp0_477 & 4) == 0)
                    goto label_1403461b2
                
                goto label_1403461f5
            
        label_1403461ae:
            
            if ((temp0_477 & 4) == 0)
            label_1403461b2:
                
                if ((temp0_477 & 8) != 0)
                    goto label_140346204
                
                goto label_1403461b6
            
        label_1403461f5:
            var_960[0]:2.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 4)
            
            if ((temp0_477 & 8) != 0)
            label_140346204:
                var_960[0]:3.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 6)
                
                if ((temp0_477 & 0x10) == 0)
                    goto label_1403461ba
                
                goto label_140346213
            
        label_1403461b6:
            
            if ((temp0_477 & 0x10) == 0)
            label_1403461ba:
                
                if ((temp0_477 & 0x20) != 0)
                    goto label_140346222
                
                goto label_1403461be
            
        label_140346213:
            var_960[1].b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 8)
            char rdx_11
            
            if ((temp0_477 & 0x20) != 0)
            label_140346222:
                var_960[1]:1.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xa)
                rdx_11 = _cvtmask32_u32(arg5)
                
                if ((temp0_477 & 0x40) == 0)
                    goto label_1403461c6
                
                goto label_140346235
            
        label_1403461be:
            rdx_11 = _cvtmask32_u32(arg5)
            
            if ((temp0_477 & 0x40) == 0)
            label_1403461c6:
                
                if (temp0_477 s< 0)
                    goto label_140346244
                
                goto label_1403461ca
            
        label_140346235:
            var_960[1]:2.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xc)
            
            if (temp0_477 s>= 0)
            label_1403461ca:
                cond:4_1 = temp0_290 == rdx_11
                
                if (temp0_290 != rdx_11)
                label_140346257:
                    zmm1[0].o = _mm_movm_epi16(arg5)
                label_14034625d:
                    arg10[0].o = data_142fc92e0
                    arg5 = _mm_mask_testn_epi16_mask(k1_28, zmm0[0].o, arg10[0].o)
                    _kortest_mask8_u8(arg5, arg5)
                    
                    if (not(cond:4_1))
                        int64_t k2_10 = _mm_mask_testn_epi16_mask(arg5, zmm0[0].o, arg10[0].o)
                        var_a20 = _mm256_mask_storeu_ps(k2_10, zmm16)
                        var_a00 = _mm256_mask_storeu_ps(k2_10, zmm17)
                        var_9e0 = _mm256_mask_storeu_ps(k2_10, zmm2)
                        var_9c0 = _mm256_mask_storeu_ps(k2_10, arg6)
                        var_9a0 = _mm256_mask_storeu_ps(k2_10, arg7)
                        var_980 = _mm256_mask_storeu_ps(k2_10, arg8)
                        char temp0_495 = _cvtmask32_u32(k2_10)
                        
                        if ((temp0_495 & 1) == 0)
                            if ((temp0_495 & 2) != 0)
                                goto label_1403466fd
                            
                            goto label_1403462c2
                        
                        var_960[0].b = 1
                        
                        if ((temp0_495 & 2) != 0)
                        label_1403466fd:
                            var_960[0]:1.b = 1
                            
                            if ((temp0_495 & 4) == 0)
                                goto label_1403462ca
                            
                            goto label_14034670d
                        
                    label_1403462c2:
                        
                        if ((temp0_495 & 4) == 0)
                        label_1403462ca:
                            
                            if ((temp0_495 & 8) != 0)
                                goto label_14034671d
                            
                            goto label_1403462d2
                        
                    label_14034670d:
                        var_960[0]:2.b = 1
                        
                        if ((temp0_495 & 8) != 0)
                        label_14034671d:
                            var_960[0]:3.b = 1
                            
                            if ((temp0_495 & 0x10) == 0)
                                goto label_1403462da
                            
                            goto label_14034672d
                        
                    label_1403462d2:
                        
                        if ((temp0_495 & 0x10) == 0)
                        label_1403462da:
                            
                            if ((temp0_495 & 0x20) != 0)
                                goto label_14034673d
                            
                            goto label_1403462e2
                        
                    label_14034672d:
                        var_960[1].b = 1
                        
                        if ((temp0_495 & 0x20) != 0)
                        label_14034673d:
                            var_960[1]:1.b = 1
                            
                            if ((temp0_495 & 0x40) == 0)
                                goto label_1403462ea
                            
                            goto label_14034674d
                        
                    label_1403462e2:
                        
                        if ((temp0_495 & 0x40) != 0)
                        label_14034674d:
                            var_960[1]:2.b = 1
                            
                            if (temp0_495 s< 0)
                                var_960[1]:3.b = 1
                        else
                        label_1403462ea:
                            
                            if (temp0_495 s< 0)
                                var_960[1]:3.b = 1
                        
                        arg5 = _kor_mask8(
                            __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, zmm1[0].o, 
                                data_142fc92e0), 
                            arg5)
                        _cvtmask32_u32(arg5)
            else
            label_140346244:
                var_960[1]:3.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xe)
                cond:4_1 = temp0_290 == rdx_11
                
                if (temp0_290 != rdx_11)
                    goto label_140346257
            
            zmm1 = var_a20
            zmm2 = var_a00
            arg6 = var_9e0
            arg7 = var_9c0
            zmm16 = _mm256_mask_load_ps(arg5, var_980)
            zmm0[0].o = __vpmovzxbw_xmmdq_memq(var_960[0].q)
            var_820 = _mm256_mask_storeu_ps(k1_28, zmm1)
            var_800 = _mm256_mask_storeu_ps(k1_28, zmm2)
            var_7e0 = _mm256_mask_storeu_ps(k1_28, arg6)
            var_7c0 = _mm256_mask_storeu_ps(k1_28, arg7)
            var_7a0 = _mm256_mask_storeu_ps(k1_28, var_9a0)
            var_780 = _mm256_mask_storeu_ps(k1_28, zmm16)
            
            if ((temp0_290 & 1) == 0)
                if ((temp0_290 & 2) != 0)
                    goto label_14034666b
                
                goto label_140346381
            
            var_760.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0)
            
            if ((temp0_290 & 2) != 0)
            label_14034666b:
                var_760:1.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 2)
                
                if ((temp0_290 & 4) == 0)
                    goto label_140346389
                
                goto label_14034667e
            
        label_140346381:
            
            if ((temp0_290 & 4) == 0)
            label_140346389:
                
                if ((temp0_290 & 8) != 0)
                    goto label_140346691
                
                goto label_140346391
            
        label_14034667e:
            var_760:2.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 4)
            
            if ((temp0_290 & 8) != 0)
            label_140346691:
                var_760:3.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 6)
                
                if ((temp0_290 & 0x10) == 0)
                    goto label_140346399
                
                goto label_1403466a4
            
        label_140346391:
            
            if ((temp0_290 & 0x10) == 0)
            label_140346399:
                
                if ((temp0_290 & 0x20) != 0)
                    goto label_1403466b7
                
                goto label_1403463a1
            
        label_1403466a4:
            var_760:4.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 8)
            
            if ((temp0_290 & 0x20) != 0)
            label_1403466b7:
                var_760:5.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xa)
                
                if ((temp0_290 & 0x40) == 0)
                    goto label_1403463a9
                
                goto label_1403466ca
            
        label_1403463a1:
            
            if ((temp0_290 & 0x40) != 0)
            label_1403466ca:
                var_760:6.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xc)
                
                if (temp0_290 s< 0)
                    var_760:7.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xe)
            else
            label_1403463a9:
                
                if (temp0_290 s< 0)
                    var_760:7.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xe)
else
    r11 = 0
    bool cond:1_1 = true
    arg24 = _mm256_mask_load_epi64(arg5, data_142fc93a0)
    arg25[0].o = _mm_mask_xor_epi32(arg5, arg25[0].o, arg25[0].o)
    arg11 = _mm256_cmpeq_epi32(arg11, arg11)
    arg27 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 0.5f)
    arg28 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, nanf)
    zmm16[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
    zmm17[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
    
    while (true)
        zmm0 = _mm256_mask_add_epi32(arg5, _mm256_mask_set1_epi32(arg5, r11.d), arg24)
        zmm1 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 7)
        int64_t k1_1 = _kxnor_mask16(arg5, arg5)
        arg18[0].o = _mm_mask_xor_ps(arg5, arg18[0].o, arg18[0].o)
        int64_t k1_2
        char temp0_26
        temp0_26, k1_2 = _mm256_mmask_i32gather_ps(k1_1, *(arg4 + (zmm1[0].q << 2)))
        arg18 = temp0_26
        zmm0 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x1c)
        zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
        int64_t k1_3 = _kxnor_mask16(arg5, arg5)
        arg19[0].o = _mm_mask_xor_ps(arg5, arg19[0].o, arg19[0].o)
        int64_t k1_4
        char temp0_30
        temp0_30, k1_4 = _mm256_mmask_i32gather_ps(k1_3, *(arg4 + zmm1[0].q))
        arg19 = temp0_30
        zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
        int64_t k1_5 = _kxnor_mask16(arg5, arg5)
        arg20[0].o = _mm_mask_xor_ps(arg5, arg20[0].o, arg20[0].o)
        int64_t k1_6
        char temp0_33
        temp0_33, k1_6 = _mm256_mmask_i32gather_ps(k1_5, *(arg4 + zmm1[0].q))
        arg20 = temp0_33
        zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0xc)
        int64_t k1_7 = _kxnor_mask16(arg5, arg5)
        arg21[0].o = _mm_mask_xor_ps(arg5, arg21[0].o, arg21[0].o)
        int64_t k1_8
        char temp0_36
        temp0_36, k1_8 = _mm256_mmask_i32gather_ps(k1_7, *(arg4 + zmm1[0].q))
        arg21 = temp0_36
        zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x10)
        int64_t k1_9 = _kxnor_mask16(arg5, arg5)
        arg22[0].o = _mm_mask_xor_ps(arg5, arg22[0].o, arg22[0].o)
        int64_t k1_10
        char temp0_39
        temp0_39, k1_10 = _mm256_mmask_i32gather_ps(k1_9, *(arg4 + zmm1[0].q))
        arg22 = temp0_39
        zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x14)
        int64_t k1_11 = _kxnor_mask16(arg5, arg5)
        arg23[0].o = _mm_mask_xor_ps(arg5, arg23[0].o, arg23[0].o)
        int64_t k1_12
        char temp0_42
        temp0_42, k1_12 = _mm256_mmask_i32gather_ps(k1_11, *(arg4 + zmm1[0].q))
        arg23 = temp0_42
        zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x18)
        uint32_t rsi_1 = zmm0[0]
        int64_t r13_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        int32_t rbx_1 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
        int64_t rdi_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
        uint32_t r14_1 = zmm0[0]
        int64_t r10_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
        int32_t r15_1 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
        int64_t rdx_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
        zmm0[0].o = __vpinsrb_xmmu8_xmmu8_memu8_imm8_avx512(arg25[0].o, arg4[sx.q(rsi_1)], 0)
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, arg4[r13_1], 2)
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, arg4[sx.q(rbx_1)], 4)
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, arg4[rdi_3], 6)
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, arg4[sx.q(r14_1)], 8)
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, arg4[r10_2], 0xa)
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, arg4[sx.q(r15_1)], 0xc)
        zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, arg4[rdx_6], 0xe)
        int64_t rdi_4 = sx.q((r11 << 2).d)
        uint64_t k1_14 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(
            _mm_mask_test_epi16_mask(arg5, zmm0[0].o, zmm0[0].o), arg11, *(arg1 + rdi_4), 4)
        _kortest_mask8_u8(k1_14, k1_14)
        
        if (not(cond:1_1))
            char temp0_59 = _cvtmask32_u32(k1_14)
            zmm0 = __vpslld_ymmu32_maskmskw_memu32_imm8_avx512(arg5, *(arg2 + rdi_4), 6)
            int64_t k2_1 = __kmovq_maskmskw_masku64_avx512(k1_14)
            int64_t k3_1 = __kmovq_maskmskw_masku64_avx512(k1_14)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            int64_t k3_2
            char temp0_62
            temp0_62, k3_2 = _mm256_mmask_i32gather_ps(k3_1, *(arg3 + zmm0[0].q))
            zmm1 = temp0_62
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
            int64_t k3_3 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            int64_t k3_4
            char temp0_65
            temp0_65, k3_4 = _mm256_mmask_i32gather_ps(k3_3, *(arg3 + zmm2[0].q))
            arg6 = temp0_65
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
            int64_t k3_5 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            int64_t k3_6
            char temp0_68
            temp0_68, k3_6 = _mm256_mmask_i32gather_ps(k3_5, *(arg3 + zmm2[0].q))
            arg7 = temp0_68
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0xc)
            int64_t k3_7 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
            int64_t k3_8
            char temp0_71
            temp0_71, k3_8 = _mm256_mmask_i32gather_ps(k3_7, *(arg3 + zmm2[0].q))
            arg8 = temp0_71
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x10)
            int64_t k3_9 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg26[0].o = _mm_mask_xor_ps(arg5, arg26[0].o, arg26[0].o)
            int64_t k3_10
            char temp0_74
            temp0_74, k3_10 = _mm256_mmask_i32gather_ps(k3_9, *(arg3 + zmm2[0].q))
            arg26 = temp0_74
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x14)
            int64_t k3_11 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg30[0].o = _mm_mask_xor_ps(arg5, arg30[0].o, arg30[0].o)
            int64_t k3_12
            char temp0_77
            temp0_77, k3_12 = _mm256_mmask_i32gather_ps(k3_11, *(arg3 + zmm2[0].q))
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x18)
            int64_t k3_13 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg31[0].o = _mm_mask_xor_ps(arg5, arg31[0].o, arg31[0].o)
            int64_t k3_14
            char temp0_80
            temp0_80, k3_14 = _mm256_mmask_i32gather_ps(k3_13, *(arg3 + zmm2[0].q))
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x1c)
            int64_t k3_15 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
            int64_t k3_16
            char temp0_83
            temp0_83, k3_16 = _mm256_mmask_i32gather_ps(k3_15, *(arg3 + zmm2[0].q))
            arg9 = temp0_83
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x20)
            int64_t k3_17 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
            int64_t k3_18
            char temp0_86
            temp0_86, k3_18 = _mm256_mmask_i32gather_ps(k3_17, *(arg3 + zmm2[0].q))
            arg10 = temp0_86
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x24)
            int64_t k3_19 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            int64_t k3_20
            char temp0_89
            temp0_89, k3_20 = _mm256_mmask_i32gather_ps(k3_19, *(arg3 + zmm2[0].q))
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x28)
            int64_t k3_21 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
            int64_t k3_22
            char temp0_92
            temp0_92, k3_22 = _mm256_mmask_i32gather_ps(k3_21, *(arg3 + zmm2[0].q))
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x2c)
            int64_t k3_23 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
            int64_t k3_24
            char temp0_95
            temp0_95, k3_24 = _mm256_mmask_i32gather_ps(k3_23, *(arg3 + zmm2[0].q))
            arg14 = temp0_95
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x30)
            int64_t k3_25 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
            int64_t k3_26
            char temp0_98
            temp0_98, k3_26 = _mm256_mmask_i32gather_ps(k3_25, *(arg3 + zmm2[0].q))
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x34)
            int64_t k3_27 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
            int64_t k3_28
            char temp0_101
            temp0_101, k3_28 = _mm256_mmask_i32gather_ps(k3_27, *(arg3 + zmm2[0].q))
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x38)
            int64_t k3_29 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg17[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg17[0].o, arg17[0].o)
            int64_t k3_30
            char temp0_104
            temp0_104, k3_30 = _mm256_mmask_i32gather_ps(k3_29, *(arg3 + zmm2[0].q))
            zmm0 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x3c)
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            int64_t k2_2
            char temp0_107
            temp0_107, k2_2 = _mm256_mmask_i32gather_ps(k2_1, *(arg3 + zmm0[0].q))
            zmm2 = temp0_107
            float var_360[0x8] = zmm1
            float var_340[0x8] = arg6
            float var_320[0x8] = arg7
            float var_300[0x8] = arg8
            int256_t var_2e0_1 = _mm256_mask_store_ps(arg5, arg26)
            int256_t var_2c0_1 = _mm256_mask_store_ps(arg5, temp0_77)
            int256_t var_2a0_1 = _mm256_mask_store_ps(arg5, temp0_80)
            float var_280_1[0x8] = arg9
            float var_260_1[0x8] = arg10
            float var_240_1[0x8] = temp0_89
            float var_220_1[0x8] = temp0_92
            float var_200_1[0x8] = arg14
            float var_1e0_1[0x8] = temp0_98
            float var_1c0_1[0x8] = temp0_101
            float var_1a0_1[0x8] = temp0_104
            float var_180_1[0x8] = zmm2
            arg26[0].o = _mm_mask_load_ss(arg5, (*arg32)[9])
            zmm2[0].o = (*arg32)[0xd]
            arg6[0].o = (*arg32)[2]
            arg9[0].o = (*arg32)[3]
            arg10[0].o = (*arg32)[6]
            arg7[0].o = (*arg32)[0xa]
            arg8[0].o = (*arg32)[0xe]
            zmm0[0].o = (*arg32)[7]
            zmm1[0].o = (*arg32)[0xb]
            int64_t i_1
            bool cond:5_1
            
            for (i_1 = 0; i_1 != 0x200; )
                arg30 = _mm256_mask_load_ps(arg5, *(&var_360 + i_1))
                arg31 = _mm256_mask_load_ps(arg5, *(&var_340 + i_1))
                arg12 = *(&var_320 + i_1)
                arg13 = *(&var_300 + i_1)
                arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                arg14 = __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                    __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                        __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                            __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg14, arg5, arg30, 
                                *arg32), 
                            arg5, arg31, (*arg32)[4]), 
                        arg5, arg12, arg32[1][0]), 
                    arg5, arg13, (*arg32)[0xc])
                *(&var_a20 + i_1) = arg14
                arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                arg14 = __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                    __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg14, arg5, arg30, 
                        (*arg32)[1]), 
                    arg5, arg31, (*arg32)[5])
                arg15 = _mm256_fmadd_ps(_mm256_mask_broadcastss_ps(arg5, arg26[0].o), arg12, arg14)
                *(&var_a00 + i_1) = _mm256_fmadd_ps(_mm256_broadcastss_ps(zmm2[0].o), arg13, arg15)
                arg14 = _mm256_mask3_fmadd_ps(_mm256_broadcastss_ps(arg6[0].o), arg5, arg30, arg29)
                arg15 = _mm256_mask3_fmadd_ps(_mm256_broadcastss_ps(arg10[0].o), arg5, arg31, arg14)
                arg14 = _mm256_fmadd_ps(_mm256_broadcastss_ps(arg7[0].o), arg12, arg15)
                *(&var_9e0 + i_1) = _mm256_fmadd_ps(_mm256_broadcastss_ps(arg8[0].o), arg13, arg14)
                arg14 = _mm256_mask3_fmadd_ps(_mm256_broadcastss_ps(arg9[0].o), arg5, arg30, arg29)
                arg30 = _mm256_mask3_fmadd_ps(_mm256_mask_broadcastss_ps(arg5, zmm0[0].o), arg5, 
                    arg31, arg14)
                *(&var_9c0 + i_1) = _mm256_mask_store_ps(arg5, 
                    __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                        _mm256_mask3_fmadd_ps(_mm256_mask_broadcastss_ps(arg5, zmm1[0].o), arg5, 
                            arg12, arg30), 
                        arg5, arg13, (*arg32)[0xf]))
                i_1 -= -0x80
                cond:5_1 = i_1 == 0x200
            
            zmm0 = var_a20
            arg6 = var_a00
            arg7 = var_9e0
            arg30 = _mm256_mask_load_ps(arg5, var_980)
            arg31 = _mm256_mask_load_ps(arg5, var_960)
            arg9 = var_940
            arg26 = _mm256_mask_load_ps(arg5, var_8e0)
            arg10 = var_8c0
            arg12 = _mm256_mask_add_ps(arg5, arg18, arg21)
            arg13 = _mm256_mask_add_ps(arg5, arg20, arg23)
            arg12 = _mm256_mask_mul_ps(arg5, arg12, arg27)
            arg13 = _mm256_mask_mul_ps(arg5, arg13, arg27)
            arg14 = _mm256_mul_ps(arg12, zmm0)
            arg15 = _mm256_mul_ps(arg12, arg6)
            arg16 = _mm256_mul_ps(arg12, arg7)
            arg17 = _mm256_mask_mul_ps(arg5, _mm256_mask_add_ps(arg5, arg19, arg22), arg27)
            arg14 = _mm256_fmadd_ps(arg14, arg17, var_9a0)
            arg15 = _mm256_mask3_fmadd_ps(arg15, arg5, arg17, arg30)
            arg16 = _mm256_mask3_fmadd_ps(arg16, arg5, arg17, arg31)
            arg17 = __vfmadd231ps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg17, arg9), arg12, var_9c0)
            arg14 = _mm256_fmadd_ps(arg14, arg13, var_920)
            arg15 = _mm256_fmadd_ps(arg15, arg13, var_900)
            arg16 = _mm256_mask3_fmadd_ps(arg16, arg5, arg13, arg26)
            arg13 = _mm256_fmadd_ps(arg13, arg10, arg17)
            arg12 = __vaddps_ymmqq_ymmqq_memqq(arg14, var_8a0)
            arg14 = __vaddps_ymmqq_ymmqq_memqq(arg15, var_880)
            arg15 = __vaddps_ymmqq_ymmqq_memqq(arg16, var_860)
            arg13 = __vaddps_ymmqq_ymmqq_memqq(arg13, var_840)
            var_a20 = var_9a0
            var_a00 = _mm256_mask_store_ps(arg5, arg30)
            var_9e0 = _mm256_mask_store_ps(arg5, arg31)
            var_9c0 = arg9
            float var_5e0_1[0x8] = var_920
            float var_5c0_1[0x8] = var_900
            int256_t var_5a0_1 = _mm256_mask_store_ps(arg5, arg26)
            float var_580_1[0x8] = arg10
            arg19 = _mm256_mask_sub_ps(arg5, arg22, arg19)
            arg20 = _mm256_mask_sub_ps(arg5, arg23, arg20)
            arg19 = _mm256_mask_mul_ps(arg5, arg19, arg27)
            arg18 = _mm256_mask_mul_ps(arg5, _mm256_mask_sub_ps(arg5, arg21, arg18), arg27)
            float var_660_1[0x8] = arg12
            float var_640_1[0x8] = arg14
            float var_620_1[0x8] = arg15
            float var_600_1[0x8] = arg13
            zmm0 = _mm256_mask_mul_ps(arg5, arg18, zmm0)
            arg6 = _mm256_mask_mul_ps(arg5, arg18, arg6)
            arg7 = _mm256_mask_mul_ps(arg5, arg18, arg7)
            arg8 = _mm256_mask_mul_ps(arg5, arg19, var_9a0)
            arg18 = _mm256_mask_mul_ps(arg5, arg19, arg30)
            arg19 = _mm256_mask_mul_ps(arg5, arg19, arg31)
            zmm0 = _mm256_add_ps(_mm256_mask_and_ps(arg5, zmm0, arg28), 
                _mm256_mask_and_ps(arg5, arg8, arg28))
            arg6 = _mm256_add_ps(_mm256_mask_and_ps(arg5, arg6, arg28), 
                _mm256_mask_and_ps(arg5, arg18, arg28))
            arg7 = _mm256_add_ps(_mm256_mask_and_ps(arg5, arg7, arg28), 
                _mm256_mask_and_ps(arg5, arg19, arg28))
            arg8 = _mm256_mask_mul_ps(arg5, arg20, arg27)
            zmm1 = _mm256_mul_ps(arg8, var_920)
            zmm2 = _mm256_mul_ps(arg8, var_900)
            arg8 = _mm256_mask_mul_ps(arg5, arg8, arg26)
            zmm0 = _mm256_add_ps(zmm0, _mm256_mask_and_ps(arg5, zmm1, arg28))
            zmm1 = _mm256_add_ps(arg6, _mm256_mask_and_ps(arg5, zmm2, arg28))
            zmm2 = _mm256_add_ps(arg7, _mm256_mask_and_ps(arg5, arg8, arg28))
            arg18 = _mm256_mask_sub_ps(arg5, arg12, zmm0)
            arg19 = _mm256_mask_sub_ps(arg5, arg14, zmm1)
            arg20 = _mm256_mask_sub_ps(arg5, arg15, zmm2)
            arg21 = _mm256_mask_add_ps(arg5, arg12, zmm0)
            arg22 = _mm256_mask_add_ps(arg5, arg14, zmm1)
            zmm0[0].o = zx.o(var_760)
            arg23 = _mm256_mask_add_ps(arg5, arg15, zmm2)
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            arg6[0].o = __vpunpcklbw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm1[0].o = __vpmovzxbw_xmmdq_xmmq(zmm0[0].q)
            arg5 = _mm_mask_test_epi16_mask(k1_14, arg6[0].o, arg6[0].o)
            _kortest_mask8_u8(arg5, arg5)
            
            if (i_1 == 0x200)
                goto label_140345806
            
            int64_t k2_3 = _mm_mask_test_epi16_mask(arg5, zmm1[0].o, zmm17[0].o)
            zmm0 = _mm256_mask_min_ps(arg5, var_820, arg18)
            zmm2 = _mm256_mask_min_ps(arg5, var_800, arg19)
            arg6 = _mm256_mask_min_ps(arg5, var_7e0, arg20)
            arg7 = _mm256_mask_max_ps(arg5, var_7c0, arg21)
            arg8 = _mm256_mask_max_ps(arg5, var_7a0, arg22)
            arg26 = _mm256_mask_max_ps(arg5, _mm256_mask_load_ps(arg5, var_780), arg23)
            var_a20 = _mm256_mask_storeu_ps(k2_3, zmm0)
            var_a00 = _mm256_mask_storeu_ps(k2_3, zmm2)
            var_9e0 = _mm256_mask_storeu_ps(k2_3, arg6)
            var_9c0 = _mm256_mask_storeu_ps(k2_3, arg7)
            var_9a0 = _mm256_mask_storeu_ps(k2_3, arg8)
            var_980 = _mm256_mask_storeu_ps(k2_3, arg26)
            char temp0_222 = _cvtmask32_u32(k2_3)
            
            if ((temp0_222 & 1) == 0)
                if ((temp0_222 & 2) != 0)
                    goto label_14034577b
                
                goto label_14034572d
            
            var_960[0].b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0)
            
            if ((temp0_222 & 2) != 0)
            label_14034577b:
                var_960[0]:1.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 2)
                
                if ((temp0_222 & 4) == 0)
                    goto label_140345733
                
                goto label_14034578c
            
        label_14034572d:
            
            if ((temp0_222 & 4) == 0)
            label_140345733:
                
                if ((temp0_222 & 8) != 0)
                    goto label_14034579d
                
                goto label_140345739
            
        label_14034578c:
            var_960[0]:2.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 4)
            
            if ((temp0_222 & 8) != 0)
            label_14034579d:
                var_960[0]:3.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 6)
                
                if ((temp0_222 & 0x10) == 0)
                    goto label_14034573f
                
                goto label_1403457ae
            
        label_140345739:
            
            if ((temp0_222 & 0x10) == 0)
            label_14034573f:
                
                if ((temp0_222 & 0x20) != 0)
                    goto label_1403457bf
                
                goto label_140345745
            
        label_1403457ae:
            var_960[1].b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 8)
            char rbx_3
            
            if ((temp0_222 & 0x20) != 0)
            label_1403457bf:
                var_960[1]:1.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xa)
                rbx_3 = _cvtmask32_u32(arg5)
                
                if ((temp0_222 & 0x40) == 0)
                    goto label_140345753
                
                goto label_1403457d8
            
        label_140345745:
            rbx_3 = _cvtmask32_u32(arg5)
            
            if ((temp0_222 & 0x40) == 0)
            label_140345753:
                
                if (temp0_222 s< 0)
                    goto label_1403457ec
                
                goto label_14034575c
            
        label_1403457d8:
            var_960[1]:2.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xc)
            
            if (temp0_222 s>= 0)
            label_14034575c:
                cond:5_1 = temp0_59 == rbx_3
                
                if (temp0_59 != rbx_3)
                label_140345800:
                    zmm2[0].o = _mm_movm_epi16(arg5)
                label_140345806:
                    arg5 = _mm_mask_testn_epi16_mask(k1_14, zmm1[0].o, zmm16[0].o)
                    _kortest_mask8_u8(arg5, arg5)
                    
                    if (not(cond:5_1))
                        int64_t k2_4 = _mm_mask_testn_epi16_mask(arg5, zmm1[0].o, zmm16[0].o)
                        var_a20 = _mm256_mask_storeu_ps(k2_4, arg18)
                        var_a00 = _mm256_mask_storeu_ps(k2_4, arg19)
                        var_9e0 = _mm256_mask_storeu_ps(k2_4, arg20)
                        var_9c0 = _mm256_mask_storeu_ps(k2_4, arg21)
                        var_9a0 = _mm256_mask_storeu_ps(k2_4, arg22)
                        var_980 = _mm256_mask_storeu_ps(k2_4, arg23)
                        char temp0_240 = _cvtmask32_u32(k2_4)
                        
                        if ((temp0_240 & 1) == 0)
                            if ((temp0_240 & 2) != 0)
                                goto label_140344f13
                            
                            goto label_140345866
                        
                        var_960[0].b = 1
                        
                        if ((temp0_240 & 2) != 0)
                        label_140344f13:
                            var_960[0]:1.b = 1
                            
                            if ((temp0_240 & 4) == 0)
                                goto label_140345870
                            
                            goto label_140344f25
                        
                    label_140345866:
                        
                        if ((temp0_240 & 4) == 0)
                        label_140345870:
                            
                            if ((temp0_240 & 8) != 0)
                                goto label_140344f37
                            
                            goto label_14034587a
                        
                    label_140344f25:
                        var_960[0]:2.b = 1
                        
                        if ((temp0_240 & 8) != 0)
                        label_140344f37:
                            var_960[0]:3.b = 1
                            
                            if ((temp0_240 & 0x10) == 0)
                                goto label_140345884
                            
                            goto label_140344f49
                        
                    label_14034587a:
                        
                        if ((temp0_240 & 0x10) == 0)
                        label_140345884:
                            
                            if ((temp0_240 & 0x20) != 0)
                                goto label_140344f5b
                            
                            goto label_14034588e
                        
                    label_140344f49:
                        var_960[1].b = 1
                        
                        if ((temp0_240 & 0x20) != 0)
                        label_140344f5b:
                            var_960[1]:1.b = 1
                            
                            if ((temp0_240 & 0x40) == 0)
                                goto label_140345898
                            
                            goto label_140344f6d
                        
                    label_14034588e:
                        
                        if ((temp0_240 & 0x40) != 0)
                        label_140344f6d:
                            var_960[1]:2.b = 1
                            
                            if (temp0_240 s< 0)
                                var_960[1]:3.b = 1
                        else
                        label_140345898:
                            
                            if (temp0_240 s< 0)
                                var_960[1]:3.b = 1
                        
                        arg5 =
                            _kor_mask8(_mm_mask_test_epi16_mask(arg5, zmm2[0].o, zmm17[0].o), arg5)
                        _cvtmask32_u32(arg5)
            else
            label_1403457ec:
                var_960[1]:3.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xe)
                cond:5_1 = temp0_59 == rbx_3
                
                if (temp0_59 != rbx_3)
                    goto label_140345800
            
            zmm0 = var_a20
            zmm2 = var_a00
            arg6 = var_9e0
            arg7 = var_9c0
            arg8 = var_9a0
            arg18 = _mm256_mask_load_ps(arg5, var_980)
            zmm1[0].o = __vpmovzxbw_xmmdq_memq(var_960[0].q)
            var_820 = _mm256_mask_storeu_ps(k1_14, zmm0)
            var_800 = _mm256_mask_storeu_ps(k1_14, zmm2)
            var_7e0 = _mm256_mask_storeu_ps(k1_14, arg6)
            var_7c0 = _mm256_mask_storeu_ps(k1_14, arg7)
            var_7a0 = _mm256_mask_storeu_ps(k1_14, arg8)
            var_780 = _mm256_mask_storeu_ps(k1_14, arg18)
            
            if ((temp0_59 & 1) == 0)
                if ((temp0_59 & 2) != 0)
                    goto label_140344e65
                
                goto label_140345932
            
            var_760.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0)
            
            if ((temp0_59 & 2) != 0)
            label_140344e65:
                var_760:1.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 2)
                
                if ((temp0_59 & 4) == 0)
                    goto label_14034593c
                
                goto label_140344e7a
            
        label_140345932:
            
            if ((temp0_59 & 4) == 0)
            label_14034593c:
                
                if ((temp0_59 & 8) != 0)
                    goto label_140344e8f
                
                goto label_140345946
            
        label_140344e7a:
            var_760:2.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 4)
            
            if ((temp0_59 & 8) != 0)
            label_140344e8f:
                var_760:3.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 6)
                
                if ((temp0_59 & 0x10) == 0)
                    goto label_140345950
                
                goto label_140344ea4
            
        label_140345946:
            
            if ((temp0_59 & 0x10) == 0)
            label_140345950:
                
                if ((temp0_59 & 0x20) != 0)
                    goto label_140344eb9
                
                goto label_14034595a
            
        label_140344ea4:
            var_760:4.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 8)
            
            if ((temp0_59 & 0x20) != 0)
            label_140344eb9:
                var_760:5.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xa)
                
                if ((temp0_59 & 0x40) == 0)
                    goto label_140345964
                
                goto label_140344ece
            
        label_14034595a:
            
            if ((temp0_59 & 0x40) != 0)
            label_140344ece:
                var_760:6.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xc)
                
                if (temp0_59 s< 0)
                label_140344ee2:
                    var_760:7.b = __vpextrb_memb_xmmdq_immb(zmm1[0].o, 0xe)
                    r11 = zx.q(r11.d + 8)
                    cond:1_1 = r11.d == rdx_4
                    
                    if (r11.d s>= rdx_4)
                        break
                    
                    continue
            else
            label_140345964:
                
                if (temp0_59 s< 0)
                    goto label_140344ee2
        
        r11 = zx.q(r11.d + 8)
        cond:1_1 = r11.d == rdx_4
        
        if (r11.d s>= rdx_4)
            break
    
    rcx_7 = arg34
    
    if (r11.d s< rcx_7)
        goto label_1403459a4
arg6 = var_7c0
arg10[0].o = zx.o(var_760)
zmm16 = _mm256_mask_load_ps(arg5, data_1434b2c40)
int64_t k1_30
char temp0_506
temp0_506, k1_30 = _mm256_i32scatter_ps(_kxnor_mask16(arg5, arg5), var_820)
void var_740
*(&var_740 + zmm16[0].q) = temp0_506
zmm0 = data_1434b2c60
int64_t k1_32
char temp0_507
temp0_507, k1_32 = _mm256_i32scatter_ps(_kxnor_mask16(arg5, arg5), var_800)
*(&var_740 + zmm0[0].q) = temp0_507
zmm0 = data_1434b2c80
int64_t k1_34
char temp0_508
temp0_508, k1_34 = _mm256_i32scatter_ps(_kxnor_mask16(arg5, arg5), var_7e0)
*(&var_740 + zmm0[0].q) = temp0_508
zmm0 = data_1434b2ca0
int64_t k1_36
char temp0_509
temp0_509, k1_36 = _mm256_i32scatter_ps(_kxnor_mask16(arg5, arg5), arg6)
*(&var_740 + zmm0[0].q) = temp0_509
zmm0 = data_1434b2cc0
int64_t k1_38
char temp0_510
temp0_510, k1_38 = _mm256_i32scatter_ps(_kxnor_mask16(arg5, arg5), var_7a0)
*(&var_740 + zmm0[0].q) = temp0_510
int64_t k1_39 = _kxnor_mask16(arg5, arg5)
zmm0 = data_1434b2ce0
int64_t k1_40
char temp0_511
temp0_511, k1_40 = _mm256_i32scatter_ps(k1_39, var_780)
*(&var_740 + zmm0[0].q) = temp0_511
char var_728[0x1c]
var_728[0] = __vpextrb_memb_xmmdq_immb(arg10[0].o, 0)
uint8_t var_70c = __vpextrb_memb_xmmdq_immb(arg10[0].o, 1)
uint8_t var_6f0 = __vpextrb_memb_xmmdq_immb(arg10[0].o, 2)
uint8_t var_6d4 = __vpextrb_memb_xmmdq_immb(arg10[0].o, 3)
uint8_t var_6b8 = __vpextrb_memb_xmmdq_immb(arg10[0].o, 4)
uint8_t var_69c = __vpextrb_memb_xmmdq_immb(arg10[0].o, 5)
uint8_t var_680 = __vpextrb_memb_xmmdq_immb(arg10[0].o, 6)
uint8_t var_664 = __vpextrb_memb_xmmdq_immb(arg10[0].o, 7)

for (uint64_t i_2 = 0xff; i_2 != 0; )
    uint64_t rcx_14 = _tzcnt_u64(i_2)
    i_2 &= not.q(1 << (rcx_14 u% 0x40))
    uint64_t rbx_8 = rcx_14 * 0x1c
    char rcx_15 = arg33[6].b
    char rdx_13 = var_728[rbx_8]
    void var_a40
    void var_73c
    void var_738
    void var_734
    void var_72c
    
    if (rcx_15 != 0 && rdx_13 != 0)
        zmm0[0].o = *(&var_a40 + rbx_8 + 0x300)
        var_800[0].o = __vmovsd_xmmdq_memq(*arg33)
        var_7e0[0].o = __vmovsd_xmmdq_memq(*(arg33 + 0xc))
        var_800[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_800[0].o, arg33[2], 0x20)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(&var_73c + rbx_8), 0x10)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(&var_738 + rbx_8), 0x20)
        zmm0 = _mm256_min_ps(var_800, zmm0)
        var_800[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_7e0[0].o, arg33[5], 0x20)
        var_7a0[0].o = __vmovsd_xmmdq_memq(*(&var_734 + rbx_8))
        var_7e0[0].o = _mm_permute_pd(zmm0[0].o, 1)
        var_7a0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_7a0[0].o, *(&var_72c + rbx_8), 0x20)
        arg6 = _mm256_max_ps(arg6, var_7a0)
        var_7a0[0].o = __vmovshdup_xmmdq_xmmdq(arg6[0].o)
        var_780[0].o = _mm_permute_pd(arg6[0].o, 1)
    else if (rdx_13 == 0)
        rcx_15 = arg33[6].b
        var_780[0].o = arg33[5]
        var_7a0[0].o = arg33[4]
        arg6[0].o = arg33[3]
        var_7e0[0].o = arg33[2]
        zmm0[0].o = *arg33
        var_800[0].o = arg33[1]
    else
        zmm0[0].o = *(&var_a40 + rbx_8 + 0x300)
        var_800[0].o = *(&var_73c + rbx_8)
        var_7e0[0].o = *(&var_738 + rbx_8)
        arg6[0].o = *(&var_734 + rbx_8)
        void var_730
        var_7a0[0].o = *(&var_730 + rbx_8)
        var_780[0].o = *(&var_72c + rbx_8)
        rcx_15 = rdx_13
    *arg33 = zmm0[0]
    arg33[1] = var_800[0]
    arg33[2] = var_7e0[0]
    arg33[3] = arg6[0]
    arg33[4] = var_7a0[0]
    arg33[5] = var_780[0]
    arg33[6].b = rcx_15

arg9[0].o = var_d8
arg10[0].o = var_c8
arg11[0].o = var_b8
arg12[0].o = var_a8
arg13[0].o = var_98
arg14[0].o = var_88
arg15[0].o = var_78
arg16[0].o = var_68
arg17[0].o = var_58
_mm256_zeroupper()
return arg33
