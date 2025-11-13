// 函数: sub_140343200
// 地址: 0x140343200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg18[0].o
int128_t var_68 = arg17[0].o
int128_t var_78 = arg16[0].o
int128_t var_88 = arg15[0].o
int128_t var_98 = arg14[0].o
int128_t var_a8 = arg13[0].o
int128_t var_b8 = arg12[0].o
int128_t var_c8 = arg11[0].o
int128_t var_d8 = arg10[0].o
int128_t var_e8 = arg9[0].o
uint16_t zmm17[0x8] = _mm_mask_load_epi64(arg5, *arg35)
int32_t rdx_4 = ((arg34 s>> 0x1f u>> 0x1d) + arg34) & 0xfffffff8
arg30[0].o = _mm_mask_xor_ps(arg5, arg30[0].o, arg30[0].o)
float var_7c0[0x8] = _mm256_mask_store_ps(arg5, arg30)
float var_7e0[0x8] = _mm256_mask_store_ps(arg5, arg30)
float var_800[0x8] = _mm256_mask_store_ps(arg5, arg30)
float var_820[0x8] = _mm256_mask_store_ps(arg5, arg30)
float var_840[0x8] = _mm256_mask_store_ps(arg5, arg30)
float var_860[0x8] = _mm256_mask_store_ps(arg5, arg30)
uint8_t var_7a0[0x8] = 0
uint32_t zmm0[0x8]
float zmm1[0x8]
uint32_t zmm16[0x8]
float var_a60[0x8]
float var_a40[0x8]
float var_a20[0x8]
float var_a00[0x8]
float var_9e0[0x8]
float var_9c0[0x8]
float var_9a0[0x8]
float var_980[0x8]
uint32_t var_960[0x8]
float var_940[0x8]
float var_920[0x8]
float var_900[0x8]
float var_8e0[0x8]
float var_8c0[0x8]
float var_8a0[0x8]
float var_880[0x8]
uint32_t rcx_7
uint64_t r11
float zmm2[0x8]
float zmm18[0x8]

if (rdx_4 s<= 0)
    r11 = 0
    rcx_7 = arg34
    
    if (0 s< rcx_7)
    label_140343e92:
        zmm1 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_mask_set1_epi32(arg5, r11.d), data_142fc93a0)
        zmm0 = _mm256_mask_set1_epi32(arg5, rcx_7)
        uint64_t k2_6 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, zmm0, zmm1)
        zmm2 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 7)
        int64_t k1_15 = __kmovq_maskmskw_masku64_avx512(k2_6)
        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
        int64_t k1_16
        char temp0_251
        temp0_251, k1_16 = _mm256_mmask_i32gather_ps(k1_15, *(arg4 + (zmm2[0].q << 2)))
        arg12 = temp0_251
        zmm16 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 0x1c)
        zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm16, 4)
        int64_t k1_17 = __kmovq_maskmskw_masku64_avx512(k2_6)
        arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
        int64_t k1_18
        char temp0_255
        temp0_255, k1_18 = _mm256_mmask_i32gather_ps(k1_17, *(arg4 + zmm2[0].q))
        arg13 = temp0_255
        arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm16, 8)
        int64_t k1_19 = __kmovq_maskmskw_masku64_avx512(k2_6)
        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
        int64_t k1_20
        char temp0_258
        temp0_258, k1_20 = _mm256_mmask_i32gather_ps(k1_19, *(arg4 + arg6[0].q))
        arg14 = temp0_258
        arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm16, 0xc)
        int64_t k1_21 = __kmovq_maskmskw_masku64_avx512(k2_6)
        arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
        int64_t k1_22
        char temp0_261
        temp0_261, k1_22 = _mm256_mmask_i32gather_ps(k1_21, *(arg4 + arg7[0].q))
        arg15 = temp0_261
        arg8 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm16, 0x10)
        int64_t k1_23 = __kmovq_maskmskw_masku64_avx512(k2_6)
        arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
        int64_t k1_24
        char temp0_264
        temp0_264, k1_24 = _mm256_mmask_i32gather_ps(k1_23, *(arg4 + arg8[0].q))
        arg16 = temp0_264
        zmm18 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm16, 0x14)
        int64_t k1_25 = __kmovq_maskmskw_masku64_avx512(k2_6)
        arg17[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg17[0].o, arg17[0].o)
        int64_t k1_26
        char temp0_267
        temp0_267, k1_26 = _mm256_mmask_i32gather_ps(k1_25, *(arg4 + zmm18[0].q))
        arg17 = temp0_267
        int32_t r11_1 = r11.d << 2
        zmm18 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k2_6, zmm16, 0x18)
        zmm16[0].o = _mm_mask_xor_epi32(arg5, zmm16[0].o, zmm16[0].o)
        int64_t r10_3 = sx.q(zmm18[0])
        int64_t r14_3 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(zmm18[0].o, 1))
        int64_t r15_2 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(zmm18[0].o, 2))
        int64_t rdi_9 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(zmm18[0].o, 3))
        arg10[0].o = _mm256_extracti32x4_epi32(arg5, zmm18, 1)
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
        zmm18 = _mm256_mask_loadu_epi32(k2_6, *(arg1 + rbx_6))
        arg9 = _mm256_cmpeq_epi32(arg9, arg9)
        uint64_t k1_28 = _mm256_cmp_epi32_mask(
            _mm_mask_test_epi16_mask(k2_6, arg10[0].o, arg10[0].o), zmm18, arg9, 4)
        _kortest_mask8_u8(k1_28, k1_28)
        
        if (r11_1 != 0)
            char temp0_287 = _cvtmask32_u32(k1_28)
            zmm18 = _mm256_mask_slli_epi32(arg5, _mm256_mask_loadu_epi32(k2_6, *(arg2 + rbx_6)), 6)
            int64_t k2_7 = __kmovq_maskmskw_masku64_avx512(k1_28)
            int64_t k3_31 = __kmovq_maskmskw_masku64_avx512(k1_28)
            arg19[0].o = _mm_mask_xor_ps(arg5, arg19[0].o, arg19[0].o)
            int64_t k3_32
            char temp0_291
            temp0_291, k3_32 = _mm256_mmask_i32gather_ps(k3_31, *(arg3 + zmm18[0].q))
            arg20 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm18, 4)
            int64_t k3_33 = __kmovq_maskmskw_masku64_avx512(k1_28)
            arg21[0].o = _mm_mask_xor_ps(arg5, arg21[0].o, arg21[0].o)
            int64_t k3_34
            char temp0_294
            temp0_294, k3_34 = _mm256_mmask_i32gather_ps(k3_33, *(arg3 + arg20[0].q))
            arg20 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm18, 8)
            int64_t k3_35 = __kmovq_maskmskw_masku64_avx512(k1_28)
            arg22[0].o = _mm_mask_xor_ps(arg5, arg22[0].o, arg22[0].o)
            int64_t k3_36
            char temp0_297
            temp0_297, k3_36 = _mm256_mmask_i32gather_ps(k3_35, *(arg3 + arg20[0].q))
            arg20 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm18, 0xc)
            int64_t k3_37 = __kmovq_maskmskw_masku64_avx512(k1_28)
            arg23[0].o = _mm_mask_xor_ps(arg5, arg23[0].o, arg23[0].o)
            int64_t k3_38
            char temp0_300
            temp0_300, k3_38 = _mm256_mmask_i32gather_ps(k3_37, *(arg3 + arg20[0].q))
            arg20 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm18, 0x10)
            int64_t k3_39 = __kmovq_maskmskw_masku64_avx512(k1_28)
            arg24[0].o = _mm_mask_xor_ps(arg5, arg24[0].o, arg24[0].o)
            int64_t k3_40
            char temp0_303
            temp0_303, k3_40 = _mm256_mmask_i32gather_ps(k3_39, *(arg3 + arg20[0].q))
            arg24 = temp0_303
            arg20 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm18, 0x14)
            int64_t k3_41 = __kmovq_maskmskw_masku64_avx512(k1_28)
            arg25[0].o = _mm_mask_xor_epi32(arg5, arg25[0].o, arg25[0].o)
            int64_t k3_42
            char temp0_306
            temp0_306, k3_42 = _mm256_mmask_i32gather_ps(k3_41, *(arg3 + arg20[0].q))
            arg20 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm18, 0x18)
            int64_t k3_43 = __kmovq_maskmskw_masku64_avx512(k1_28)
            arg26[0].o = _mm_mask_xor_epi32(arg5, arg26[0].o, arg26[0].o)
            int64_t k3_44
            char temp0_309
            temp0_309, k3_44 = _mm256_mmask_i32gather_ps(k3_43, *(arg3 + arg20[0].q))
            arg20 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm18, 0x1c)
            int64_t k3_45 = __kmovq_maskmskw_masku64_avx512(k1_28)
            arg27[0].o = _mm_mask_xor_ps(arg5, arg27[0].o, arg27[0].o)
            int64_t k3_46
            char temp0_312
            temp0_312, k3_46 = _mm256_mmask_i32gather_ps(k3_45, *(arg3 + arg20[0].q))
            arg20 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm18, 0x20)
            int64_t k3_47 = __kmovq_maskmskw_masku64_avx512(k1_28)
            arg28[0].o = _mm_mask_xor_epi32(arg5, arg28[0].o, arg28[0].o)
            int64_t k3_48
            char temp0_315
            temp0_315, k3_48 = _mm256_mmask_i32gather_ps(k3_47, *(arg3 + arg20[0].q))
            arg20 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm18, 0x24)
            int64_t k3_49 = __kmovq_maskmskw_masku64_avx512(k1_28)
            arg29[0].o = _mm_mask_xor_ps(arg5, arg29[0].o, arg29[0].o)
            int64_t k3_50
            char temp0_318
            temp0_318, k3_50 = _mm256_mmask_i32gather_ps(k3_49, *(arg3 + arg20[0].q))
            arg20 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm18, 0x28)
            int64_t k3_51 = __kmovq_maskmskw_masku64_avx512(k1_28)
            arg30[0].o = _mm_mask_xor_ps(arg5, arg30[0].o, arg30[0].o)
            int64_t k3_52
            char temp0_321
            temp0_321, k3_52 = _mm256_mmask_i32gather_ps(k3_51, *(arg3 + arg20[0].q))
            arg20 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm18, 0x2c)
            int64_t k3_53 = __kmovq_maskmskw_masku64_avx512(k1_28)
            arg31[0].o = _mm_mask_xor_ps(arg5, arg31[0].o, arg31[0].o)
            int64_t k3_54
            char temp0_324
            temp0_324, k3_54 = _mm256_mmask_i32gather_ps(k3_53, *(arg3 + arg20[0].q))
            arg20 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm18, 0x30)
            int64_t k3_56
            char temp0_326
            temp0_326, k3_56 = _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_28), 
                *(arg3 + arg20[0].q))
            arg9 = temp0_326
            arg20 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm18, 0x34)
            int64_t k3_58
            char temp0_328
            temp0_328, k3_58 = _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_28), 
                *(arg3 + arg20[0].q))
            arg10 = temp0_328
            arg20 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm18, 0x38)
            int64_t k3_60
            char temp0_330
            temp0_330, k3_60 = _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_28), 
                *(arg3 + arg20[0].q))
            arg11 = temp0_330
            zmm18 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm18, 0x3c)
            arg20[0].o = _mm_mask_xor_ps(arg5, arg20[0].o, arg20[0].o)
            int64_t k2_8
            char temp0_333
            temp0_333, k2_8 = _mm256_mmask_i32gather_ps(k2_7, *(arg3 + zmm18[0].q))
            int256_t var_580 = _mm256_mask_store_ps(arg5, temp0_291)
            int256_t var_560 = _mm256_mask_store_ps(arg5, temp0_294)
            int256_t var_540 = _mm256_mask_store_ps(arg5, temp0_297)
            int256_t var_520 = _mm256_mask_store_ps(arg5, temp0_300)
            int256_t var_500_1 = _mm256_mask_store_ps(arg5, arg24)
            int256_t var_4e0_1 = _mm256_mask_store_ps(arg5, temp0_306)
            int256_t var_4c0_1 = _mm256_mask_store_ps(arg5, temp0_309)
            int256_t var_4a0_1 = _mm256_mask_store_ps(arg5, temp0_312)
            int256_t var_480_1 = _mm256_mask_store_ps(arg5, temp0_315)
            int256_t var_460_1 = _mm256_mask_store_ps(arg5, temp0_318)
            int256_t var_440_1 = _mm256_mask_store_ps(arg5, temp0_321)
            int256_t var_420_1 = _mm256_mask_store_ps(arg5, temp0_324)
            float var_400_1[0x8] = arg9
            float var_3e0_1[0x8] = arg10
            uint32_t var_3c0_1[0x8] = arg11
            int256_t var_3a0_1 = _mm256_mask_store_ps(arg5, temp0_333)
            arg10[0].o = (*arg32)[9]
            arg9[0].o = (*arg32)[0xd]
            zmm0[0].o = (*arg32)[2]
            arg24[0].o = _mm_mask_load_ss(arg5, (*arg32)[3])
            zmm2[0].o = (*arg32)[6]
            arg6[0].o = (*arg32)[0xa]
            arg7[0].o = (*arg32)[0xe]
            arg8[0].o = (*arg32)[7]
            zmm1[0].o = (*arg32)[0xb]
            int64_t i = 0
            zmm18 = _mm256_mask_broadcastss_ps(arg5, arg10[0].o)
            arg19 = _mm256_mask_broadcastss_ps(arg5, arg9[0].o)
            arg20 = _mm256_mask_broadcastss_ps(arg5, zmm0[0].o)
            arg21 = _mm256_mask_broadcastss_ps(arg5, zmm2[0].o)
            arg22 = _mm256_mask_broadcastss_ps(arg5, arg6[0].o)
            arg23 = _mm256_mask_broadcastss_ps(arg5, arg7[0].o)
            arg24 = _mm256_mask_broadcastss_ps(arg5, arg24[0].o)
            arg25 = _mm256_mask_broadcastss_ps(arg5, arg8[0].o)
            arg26 = _mm256_mask_broadcastss_ps(arg5, zmm1[0].o)
            bool cond:4_1
            
            do
                zmm0 = *(&var_580 + i)
                zmm1 = *(&var_560 + i)
                zmm2 = *(&var_540 + i)
                arg6 = *(&var_520 + i)
                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                arg7 = __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                    __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                        __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                            __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg7, arg5, zmm0, 
                                *arg32), 
                            arg5, zmm1, (*arg32)[4]), 
                        arg5, zmm2, arg32[1][0]), 
                    arg5, arg6, (*arg32)[0xc])
                *(&var_a60 + i) = arg7
                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                *(&var_a40 + i) = _mm256_mask3_fmadd_ps(
                    _mm256_mask3_fmadd_ps(
                        __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                            __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg7, arg5, zmm0, 
                                (*arg32)[1]), 
                            arg5, zmm1, (*arg32)[5]), 
                        arg5, zmm2, zmm18), 
                    arg5, arg6, arg19)
                arg7 = _mm256_mask3_fmadd_ps(
                    _mm256_mask3_fmadd_ps(
                        _mm256_mask3_fmadd_ps(
                            _mm256_mask3_fmadd_ps(_mm256_mask_mov_ps(arg5, arg20), arg5, zmm0, 
                                zmm16), 
                            arg5, zmm1, arg21), 
                        arg5, zmm2, arg22), 
                    arg5, arg6, arg23)
                *(&var_a20 + i) = arg7
                *(&var_a00 + i) = __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                    _mm256_mask3_fmadd_ps(zmm2, arg5, arg26, 
                        _mm256_mask3_fmadd_ps(zmm1, arg5, arg25, 
                            _mm256_mask3_fmadd_ps(zmm0, arg5, arg24, zmm16))), 
                    arg5, arg6, (*arg32)[0xf])
                i -= -0x80
                cond:4_1 = i == 0x200
            while (i != 0x200)
            
            arg20 = _mm256_mask_load_ps(arg5, var_a60)
            arg21 = _mm256_mask_load_ps(arg5, var_a40)
            arg22 = _mm256_mask_load_ps(arg5, var_a20)
            zmm0 = var_a00
            zmm16 = _mm256_mask_load_ps(arg5, var_960)
            zmm18 = _mm256_mask_load_ps(arg5, var_940)
            arg19 = _mm256_mask_load_ps(arg5, var_920)
            arg23 = _mm256_mask_add_ps(arg5, arg12, arg15)
            arg24 = _mm256_mask_add_ps(arg5, arg14, arg17)
            arg25 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 0.5f)
            arg23 = _mm256_mask_mul_ps(arg5, arg23, arg25)
            arg24 = _mm256_mask_mul_ps(arg5, arg24, arg25)
            arg26 = _mm256_mask_mul_ps(arg5, arg23, arg20)
            arg27 = _mm256_mask_mul_ps(arg5, arg23, arg21)
            arg28 = _mm256_mask_mul_ps(arg5, arg23, arg22)
            arg29 = _mm256_mask_mul_ps(arg5, _mm256_mask_add_ps(arg5, arg13, arg16), arg25)
            arg26 = _mm256_mask3_fmadd_ps(arg26, arg5, arg29, var_9e0)
            arg27 = _mm256_mask3_fmadd_ps(arg27, arg5, arg29, var_9c0)
            arg28 = _mm256_mask3_fmadd_ps(arg28, arg5, arg29, var_9a0)
            arg23 =
                _mm256_mask3_fmadd_ps(arg23, arg5, zmm0, _mm256_mask_mul_ps(arg5, arg29, var_980))
            arg26 = _mm256_mask3_fmadd_ps(arg26, arg5, arg24, zmm16)
            arg27 = _mm256_mask3_fmadd_ps(arg27, arg5, arg24, zmm18)
            arg28 = _mm256_mask3_fmadd_ps(arg28, arg5, arg24, arg19)
            arg24 = _mm256_mask3_fmadd_ps(arg24, arg5, var_900, arg23)
            arg23 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg26, var_8e0)
            arg26 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg27, var_8c0)
            arg27 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg28, var_8a0)
            arg24 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg24, var_880)
            var_a60 = _mm256_mask_store_ps(arg5, arg20)
            var_a40 = _mm256_mask_store_ps(arg5, arg21)
            var_a20 = _mm256_mask_store_ps(arg5, arg22)
            var_a00 = zmm0
            float var_600_2[0x8] = var_9e0
            float var_5e0_2[0x8] = var_9c0
            float var_5c0_2[0x8] = var_9a0
            float var_5a0_2[0x8] = var_980
            int256_t var_680_2 = _mm256_mask_store_ps(arg5, zmm16)
            int256_t var_660_2 = _mm256_mask_store_ps(arg5, zmm18)
            int256_t var_640_2 = _mm256_mask_store_ps(arg5, arg19)
            float var_620_2[0x8] = var_900
            zmm0 = _mm256_sub_ps(arg16, arg13)
            arg7 = _mm256_sub_ps(arg17, arg14)
            zmm0 = _mm256_mask_mul_ps(arg5, zmm0, arg25)
            arg8 = _mm256_mask_mul_ps(arg5, _mm256_sub_ps(arg15, arg12), arg25)
            int256_t var_180_1 = _mm256_mask_store_ps(arg5, arg23)
            int256_t var_160_1 = _mm256_mask_store_ps(arg5, arg26)
            int256_t var_140_1 = _mm256_mask_store_ps(arg5, arg27)
            arg7 = _mm256_mask_mul_ps(arg5, arg7, arg25)
            int256_t var_120_1 = _mm256_mask_store_ps(arg5, arg24)
            arg20 = _mm256_mask_mul_ps(arg5, arg8, arg20)
            arg21 = _mm256_mask_mul_ps(arg5, arg8, arg21)
            arg8 = _mm256_mask_mul_ps(arg5, arg8, arg22)
            zmm1 = _mm256_mul_ps(zmm0, var_9e0)
            zmm2 = _mm256_mul_ps(zmm0, var_9c0)
            zmm0 = _mm256_mul_ps(zmm0, var_9a0)
            arg6 = _mm256_broadcast_ss(nanf)
            zmm1 = _mm256_mask_add_ps(arg5, _mm256_mask_and_ps(arg5, arg20, arg6), 
                _mm256_and_ps(zmm1, arg6))
            zmm2 = _mm256_mask_add_ps(arg5, _mm256_mask_and_ps(arg5, arg21, arg6), 
                _mm256_and_ps(zmm2, arg6))
            zmm0 = _mm256_add_ps(_mm256_and_ps(arg8, arg6), _mm256_and_ps(zmm0, arg6))
            arg8 = _mm256_mask_mul_ps(arg5, arg7, zmm16)
            zmm16 = _mm256_mask_mul_ps(arg5, arg7, zmm18)
            arg7 = _mm256_mask_mul_ps(arg5, arg7, arg19)
            zmm1 = _mm256_add_ps(zmm1, _mm256_and_ps(arg8, arg6))
            arg8 = _mm256_add_ps(zmm2, _mm256_mask_and_ps(arg5, zmm16, arg6))
            zmm0 = _mm256_add_ps(zmm0, _mm256_and_ps(arg7, arg6))
            zmm16 = _mm256_mask_sub_ps(arg5, arg23, zmm1)
            zmm18 = _mm256_mask_sub_ps(arg5, arg26, arg8)
            zmm2 = _mm256_mask_sub_ps(arg5, arg27, zmm0)
            arg6 = _mm256_mask_add_ps(arg5, arg23, zmm1)
            arg7 = _mm256_mask_add_ps(arg5, arg26, arg8)
            arg10[0].o = zx.o(var_7a0)
            arg8 = _mm256_mask_add_ps(arg5, arg27, zmm0)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            arg9[0].o = __vpunpcklbw_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
            zmm0[0].o = __vpmovzxbw_xmmdq_xmmq(arg10[0].q)
            arg5 = _mm_mask_test_epi16_mask(k1_28, arg9[0].o, arg9[0].o)
            _kortest_mask8_u8(arg5, arg5)
            
            if (i == 0x200)
                goto label_14034474d
            
            int64_t k2_9 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, zmm0[0].o, data_142fc92e0)
            arg19 = _mm256_mask_load_ps(arg5, var_840)
            arg20 = _mm256_mask_load_ps(arg5, var_820)
            arg21 = _mm256_mask_load_ps(arg5, var_800)
            zmm1 = _mm256_mask_min_ps(arg5, var_860, zmm16)
            arg19 = _mm256_mask_min_ps(arg5, arg19, zmm18)
            arg20 = _mm256_mask_min_ps(arg5, arg20, zmm2)
            arg21 = _mm256_mask_max_ps(arg5, arg21, arg6)
            arg22 = _mm256_mask_max_ps(arg5, _mm256_mask_load_ps(arg5, var_7e0), arg7)
            arg23 = _mm256_mask_max_ps(arg5, _mm256_mask_load_ps(arg5, var_7c0), arg8)
            var_a60 = _mm256_mask_storeu_ps(k2_9, zmm1)
            var_a40 = _mm256_mask_storeu_ps(k2_9, arg19)
            var_a20 = _mm256_mask_storeu_ps(k2_9, arg20)
            var_a00 = _mm256_mask_storeu_ps(k2_9, arg21)
            var_9e0 = _mm256_mask_storeu_ps(k2_9, arg22)
            var_9c0 = _mm256_mask_storeu_ps(k2_9, arg23)
            char temp0_472 = _cvtmask32_u32(k2_9)
            
            if ((temp0_472 & 1) == 0)
                if ((temp0_472 & 2) != 0)
                    goto label_1403446d6
                
                goto label_14034469e
            
            var_9a0[0].b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0)
            
            if ((temp0_472 & 2) != 0)
            label_1403446d6:
                var_9a0[0]:1.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 2)
                
                if ((temp0_472 & 4) == 0)
                    goto label_1403446a2
                
                goto label_1403446e5
            
        label_14034469e:
            
            if ((temp0_472 & 4) == 0)
            label_1403446a2:
                
                if ((temp0_472 & 8) != 0)
                    goto label_1403446f4
                
                goto label_1403446a6
            
        label_1403446e5:
            var_9a0[0]:2.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 4)
            
            if ((temp0_472 & 8) != 0)
            label_1403446f4:
                var_9a0[0]:3.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 6)
                
                if ((temp0_472 & 0x10) == 0)
                    goto label_1403446aa
                
                goto label_140344703
            
        label_1403446a6:
            
            if ((temp0_472 & 0x10) == 0)
            label_1403446aa:
                
                if ((temp0_472 & 0x20) != 0)
                    goto label_140344712
                
                goto label_1403446ae
            
        label_140344703:
            var_9a0[1].b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 8)
            char rdx_11
            
            if ((temp0_472 & 0x20) != 0)
            label_140344712:
                var_9a0[1]:1.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xa)
                rdx_11 = _cvtmask32_u32(arg5)
                
                if ((temp0_472 & 0x40) == 0)
                    goto label_1403446b6
                
                goto label_140344725
            
        label_1403446ae:
            rdx_11 = _cvtmask32_u32(arg5)
            
            if ((temp0_472 & 0x40) == 0)
            label_1403446b6:
                
                if (temp0_472 s< 0)
                    goto label_140344734
                
                goto label_1403446ba
            
        label_140344725:
            var_9a0[1]:2.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xc)
            
            if (temp0_472 s>= 0)
            label_1403446ba:
                cond:4_1 = temp0_287 == rdx_11
                
                if (temp0_287 != rdx_11)
                label_140344747:
                    zmm1[0].o = _mm_movm_epi16(arg5)
                label_14034474d:
                    arg10[0].o = data_142fc92e0
                    arg5 = _mm_mask_testn_epi16_mask(k1_28, zmm0[0].o, arg10[0].o)
                    _kortest_mask8_u8(arg5, arg5)
                    
                    if (not(cond:4_1))
                        int64_t k2_10 = _mm_mask_testn_epi16_mask(arg5, zmm0[0].o, arg10[0].o)
                        var_a60 = _mm256_mask_storeu_ps(k2_10, zmm16)
                        var_a40 = _mm256_mask_storeu_ps(k2_10, zmm18)
                        var_a20 = _mm256_mask_storeu_ps(k2_10, zmm2)
                        var_a00 = _mm256_mask_storeu_ps(k2_10, arg6)
                        var_9e0 = _mm256_mask_storeu_ps(k2_10, arg7)
                        var_9c0 = _mm256_mask_storeu_ps(k2_10, arg8)
                        char temp0_490 = _cvtmask32_u32(k2_10)
                        
                        if ((temp0_490 & 1) == 0)
                            if ((temp0_490 & 2) != 0)
                                goto label_140344cae
                            
                            goto label_1403447b2
                        
                        var_9a0[0].b = 1
                        
                        if ((temp0_490 & 2) != 0)
                        label_140344cae:
                            var_9a0[0]:1.b = 1
                            
                            if ((temp0_490 & 4) == 0)
                                goto label_1403447ba
                            
                            goto label_140344cbe
                        
                    label_1403447b2:
                        
                        if ((temp0_490 & 4) == 0)
                        label_1403447ba:
                            
                            if ((temp0_490 & 8) != 0)
                                goto label_140344cce
                            
                            goto label_1403447c2
                        
                    label_140344cbe:
                        var_9a0[0]:2.b = 1
                        
                        if ((temp0_490 & 8) != 0)
                        label_140344cce:
                            var_9a0[0]:3.b = 1
                            
                            if ((temp0_490 & 0x10) == 0)
                                goto label_1403447ca
                            
                            goto label_140344cde
                        
                    label_1403447c2:
                        
                        if ((temp0_490 & 0x10) == 0)
                        label_1403447ca:
                            
                            if ((temp0_490 & 0x20) != 0)
                                goto label_140344cee
                            
                            goto label_1403447d2
                        
                    label_140344cde:
                        var_9a0[1].b = 1
                        
                        if ((temp0_490 & 0x20) != 0)
                        label_140344cee:
                            var_9a0[1]:1.b = 1
                            
                            if ((temp0_490 & 0x40) == 0)
                                goto label_1403447da
                            
                            goto label_140344cfe
                        
                    label_1403447d2:
                        
                        if ((temp0_490 & 0x40) != 0)
                        label_140344cfe:
                            var_9a0[1]:2.b = 1
                            
                            if (temp0_490 s< 0)
                                var_9a0[1]:3.b = 1
                        else
                        label_1403447da:
                            
                            if (temp0_490 s< 0)
                                var_9a0[1]:3.b = 1
                        
                        arg5 = _kor_mask8(
                            __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, zmm1[0].o, 
                                data_142fc92e0), 
                            arg5)
                        _cvtmask32_u32(arg5)
            else
            label_140344734:
                var_9a0[1]:3.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xe)
                cond:4_1 = temp0_287 == rdx_11
                
                if (temp0_287 != rdx_11)
                    goto label_140344747
            
            zmm1 = var_a60
            zmm2 = var_a40
            arg6 = var_a20
            arg7 = var_a00
            zmm16 = _mm256_mask_load_ps(arg5, var_9c0)
            zmm0[0].o = __vpmovzxbw_xmmdq_memq(var_9a0[0].q)
            var_860 = _mm256_mask_storeu_ps(k1_28, zmm1)
            var_840 = _mm256_mask_storeu_ps(k1_28, zmm2)
            var_820 = _mm256_mask_storeu_ps(k1_28, arg6)
            var_800 = _mm256_mask_storeu_ps(k1_28, arg7)
            var_7e0 = _mm256_mask_storeu_ps(k1_28, var_9e0)
            var_7c0 = _mm256_mask_storeu_ps(k1_28, zmm16)
            
            if ((temp0_287 & 1) == 0)
                if ((temp0_287 & 2) != 0)
                    goto label_140344c1c
                
                goto label_140344871
            
            var_7a0[0] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0)
            
            if ((temp0_287 & 2) != 0)
            label_140344c1c:
                var_7a0[1] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 2)
                
                if ((temp0_287 & 4) == 0)
                    goto label_140344879
                
                goto label_140344c2f
            
        label_140344871:
            
            if ((temp0_287 & 4) == 0)
            label_140344879:
                
                if ((temp0_287 & 8) != 0)
                    goto label_140344c42
                
                goto label_140344881
            
        label_140344c2f:
            var_7a0[2] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 4)
            
            if ((temp0_287 & 8) != 0)
            label_140344c42:
                var_7a0[3] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 6)
                
                if ((temp0_287 & 0x10) == 0)
                    goto label_140344889
                
                goto label_140344c55
            
        label_140344881:
            
            if ((temp0_287 & 0x10) == 0)
            label_140344889:
                
                if ((temp0_287 & 0x20) != 0)
                    goto label_140344c68
                
                goto label_140344891
            
        label_140344c55:
            var_7a0[4] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 8)
            
            if ((temp0_287 & 0x20) != 0)
            label_140344c68:
                var_7a0[5] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xa)
                
                if ((temp0_287 & 0x40) == 0)
                    goto label_140344899
                
                goto label_140344c7b
            
        label_140344891:
            
            if ((temp0_287 & 0x40) != 0)
            label_140344c7b:
                var_7a0[6] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xc)
                
                if (temp0_287 s< 0)
                    var_7a0[7] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xe)
            else
            label_140344899:
                
                if (temp0_287 s< 0)
                    var_7a0[7] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xe)
else
    r11 = 0
    bool cond:1_1 = true
    arg26 = _mm256_mask_load_epi64(arg5, data_142fc93a0)
    arg28[0].o = _mm_mask_xor_epi32(arg5, arg28[0].o, arg28[0].o)
    arg11 = _mm256_cmpeq_epi32(arg11, arg11)
    arg29 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 0.5f)
    zmm16 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, nanf)
    arg25[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
    zmm18[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
    
    while (true)
        zmm0 = _mm256_mask_add_epi32(arg5, _mm256_mask_set1_epi32(arg5, r11.d), arg26)
        zmm1 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 7)
        int64_t k1_1 = _kxnor_mask16(arg5, arg5)
        arg19[0].o = _mm_mask_xor_ps(arg5, arg19[0].o, arg19[0].o)
        int64_t k1_2
        char temp0_27
        temp0_27, k1_2 = _mm256_mmask_i32gather_ps(k1_1, *(arg4 + (zmm1[0].q << 2)))
        arg19 = temp0_27
        zmm0 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x1c)
        zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
        int64_t k1_3 = _kxnor_mask16(arg5, arg5)
        arg20[0].o = _mm_mask_xor_ps(arg5, arg20[0].o, arg20[0].o)
        int64_t k1_4
        char temp0_31
        temp0_31, k1_4 = _mm256_mmask_i32gather_ps(k1_3, *(arg4 + zmm1[0].q))
        arg20 = temp0_31
        zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
        int64_t k1_5 = _kxnor_mask16(arg5, arg5)
        arg21[0].o = _mm_mask_xor_ps(arg5, arg21[0].o, arg21[0].o)
        int64_t k1_6
        char temp0_34
        temp0_34, k1_6 = _mm256_mmask_i32gather_ps(k1_5, *(arg4 + zmm1[0].q))
        arg21 = temp0_34
        zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0xc)
        int64_t k1_7 = _kxnor_mask16(arg5, arg5)
        arg22[0].o = _mm_mask_xor_ps(arg5, arg22[0].o, arg22[0].o)
        int64_t k1_8
        char temp0_37
        temp0_37, k1_8 = _mm256_mmask_i32gather_ps(k1_7, *(arg4 + zmm1[0].q))
        arg22 = temp0_37
        zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x10)
        int64_t k1_9 = _kxnor_mask16(arg5, arg5)
        arg23[0].o = _mm_mask_xor_ps(arg5, arg23[0].o, arg23[0].o)
        int64_t k1_10
        char temp0_40
        temp0_40, k1_10 = _mm256_mmask_i32gather_ps(k1_9, *(arg4 + zmm1[0].q))
        arg23 = temp0_40
        zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x14)
        int64_t k1_11 = _kxnor_mask16(arg5, arg5)
        arg24[0].o = _mm_mask_xor_ps(arg5, arg24[0].o, arg24[0].o)
        int64_t k1_12
        char temp0_43
        temp0_43, k1_12 = _mm256_mmask_i32gather_ps(k1_11, *(arg4 + zmm1[0].q))
        arg24 = temp0_43
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
        zmm0[0].o = __vpinsrb_xmmu8_xmmu8_memu8_imm8_avx512(arg28[0].o, arg4[sx.q(rsi_1)], 0)
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
            char temp0_60 = _cvtmask32_u32(k1_14)
            zmm0 = __vpslld_ymmu32_maskmskw_memu32_imm8_avx512(arg5, *(arg2 + rdi_4), 6)
            int64_t k2_1 = __kmovq_maskmskw_masku64_avx512(k1_14)
            int64_t k3_1 = __kmovq_maskmskw_masku64_avx512(k1_14)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            int64_t k3_2
            char temp0_63
            temp0_63, k3_2 = _mm256_mmask_i32gather_ps(k3_1, *(arg3 + zmm0[0].q))
            zmm1 = temp0_63
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
            int64_t k3_3 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            int64_t k3_4
            char temp0_66
            temp0_66, k3_4 = _mm256_mmask_i32gather_ps(k3_3, *(arg3 + zmm2[0].q))
            arg6 = temp0_66
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
            int64_t k3_5 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            int64_t k3_6
            char temp0_69
            temp0_69, k3_6 = _mm256_mmask_i32gather_ps(k3_5, *(arg3 + zmm2[0].q))
            arg7 = temp0_69
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0xc)
            int64_t k3_7 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
            int64_t k3_8
            char temp0_72
            temp0_72, k3_8 = _mm256_mmask_i32gather_ps(k3_7, *(arg3 + zmm2[0].q))
            arg8 = temp0_72
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x10)
            int64_t k3_9 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg27[0].o = _mm_mask_xor_ps(arg5, arg27[0].o, arg27[0].o)
            int64_t k3_10
            char temp0_75
            temp0_75, k3_10 = _mm256_mmask_i32gather_ps(k3_9, *(arg3 + zmm2[0].q))
            arg27 = temp0_75
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x14)
            int64_t k3_11 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg31[0].o = _mm_mask_xor_ps(arg5, arg31[0].o, arg31[0].o)
            int64_t k3_12
            char temp0_78
            temp0_78, k3_12 = _mm256_mmask_i32gather_ps(k3_11, *(arg3 + zmm2[0].q))
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x18)
            int64_t k3_13 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
            int64_t k3_14
            char temp0_81
            temp0_81, k3_14 = _mm256_mmask_i32gather_ps(k3_13, *(arg3 + zmm2[0].q))
            arg9 = temp0_81
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x1c)
            int64_t k3_15 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
            int64_t k3_16
            char temp0_84
            temp0_84, k3_16 = _mm256_mmask_i32gather_ps(k3_15, *(arg3 + zmm2[0].q))
            arg10 = temp0_84
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x20)
            int64_t k3_17 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            int64_t k3_18
            char temp0_87
            temp0_87, k3_18 = _mm256_mmask_i32gather_ps(k3_17, *(arg3 + zmm2[0].q))
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x24)
            int64_t k3_19 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
            int64_t k3_20
            char temp0_90
            temp0_90, k3_20 = _mm256_mmask_i32gather_ps(k3_19, *(arg3 + zmm2[0].q))
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x28)
            int64_t k3_21 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
            int64_t k3_22
            char temp0_93
            temp0_93, k3_22 = _mm256_mmask_i32gather_ps(k3_21, *(arg3 + zmm2[0].q))
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x2c)
            int64_t k3_23 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
            int64_t k3_24
            char temp0_96
            temp0_96, k3_24 = _mm256_mmask_i32gather_ps(k3_23, *(arg3 + zmm2[0].q))
            arg15 = temp0_96
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x30)
            int64_t k3_25 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
            int64_t k3_26
            char temp0_99
            temp0_99, k3_26 = _mm256_mmask_i32gather_ps(k3_25, *(arg3 + zmm2[0].q))
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x34)
            int64_t k3_27 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg17[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg17[0].o, arg17[0].o)
            int64_t k3_28
            char temp0_102
            temp0_102, k3_28 = _mm256_mmask_i32gather_ps(k3_27, *(arg3 + zmm2[0].q))
            zmm2 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x38)
            int64_t k3_29 = __kmovq_maskmskw_masku64_avx512(k1_14)
            arg18[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg18[0].o, arg18[0].o)
            int64_t k3_30
            char temp0_105
            temp0_105, k3_30 = _mm256_mmask_i32gather_ps(k3_29, *(arg3 + zmm2[0].q))
            zmm0 = __vorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x3c)
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            int64_t k2_2
            char temp0_108
            temp0_108, k2_2 = _mm256_mmask_i32gather_ps(k2_1, *(arg3 + zmm0[0].q))
            zmm2 = temp0_108
            float var_380[0x8] = zmm1
            float var_360[0x8] = arg6
            float var_340[0x8] = arg7
            float var_320[0x8] = arg8
            int256_t var_300_1 = _mm256_mask_store_ps(arg5, arg27)
            int256_t var_2e0_1 = _mm256_mask_store_ps(arg5, temp0_78)
            float var_2c0_1[0x8] = arg9
            float var_2a0_1[0x8] = arg10
            float var_280_1[0x8] = temp0_87
            float var_260_1[0x8] = temp0_90
            float var_240_1[0x8] = temp0_93
            float var_220_1[0x8] = arg15
            float var_200_1[0x8] = temp0_99
            float var_1e0_1[0x8] = temp0_102
            float var_1c0_1[0x8] = temp0_105
            float var_1a0_1[0x8] = zmm2
            arg27[0].o = _mm_mask_load_ss(arg5, (*arg32)[9])
            zmm2[0].o = (*arg32)[0xd]
            arg6[0].o = (*arg32)[2]
            arg7[0].o = (*arg32)[3]
            arg9[0].o = (*arg32)[6]
            arg10[0].o = (*arg32)[0xa]
            arg8[0].o = (*arg32)[0xe]
            zmm1[0].o = (*arg32)[7]
            zmm0[0].o = (*arg32)[0xb]
            int64_t i_1
            bool cond:5_1
            
            for (i_1 = 0; i_1 != 0x200; )
                arg31 = _mm256_mask_load_ps(arg5, *(&var_380 + i_1))
                arg12 = *(&var_360 + i_1)
                arg13 = *(&var_340 + i_1)
                arg14 = *(&var_320 + i_1)
                arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                arg15 = __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                    __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                        __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                            __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg15, arg5, arg31, 
                                *arg32), 
                            arg5, arg12, (*arg32)[4]), 
                        arg5, arg13, arg32[1][0]), 
                    arg5, arg14, (*arg32)[0xc])
                *(&var_a60 + i_1) = arg15
                arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                arg15 = __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                    __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg15, arg5, arg31, 
                        (*arg32)[1]), 
                    arg5, arg12, (*arg32)[5])
                arg16 = _mm256_fmadd_ps(_mm256_mask_broadcastss_ps(arg5, arg27[0].o), arg13, arg15)
                *(&var_a40 + i_1) = _mm256_fmadd_ps(_mm256_broadcastss_ps(zmm2[0].o), arg14, arg16)
                arg15 = _mm256_mask3_fmadd_ps(_mm256_broadcastss_ps(arg6[0].o), arg5, arg31, arg30)
                arg16 = _mm256_fmadd_ps(_mm256_broadcastss_ps(arg9[0].o), arg12, arg15)
                arg15 = _mm256_fmadd_ps(_mm256_broadcastss_ps(arg10[0].o), arg13, arg16)
                *(&var_a20 + i_1) = _mm256_fmadd_ps(_mm256_broadcastss_ps(arg8[0].o), arg14, arg15)
                arg15 = _mm256_mask3_fmadd_ps(_mm256_broadcastss_ps(arg7[0].o), arg5, arg31, arg30)
                arg31 = _mm256_mask3_fmadd_ps(_mm256_mask_broadcastss_ps(arg5, zmm1[0].o), arg5, 
                    arg12, arg15)
                *(&var_a00 + i_1) = __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                    _mm256_mask3_fmadd_ps(_mm256_broadcastss_ps(zmm0[0].o), arg5, arg13, arg31), 
                    arg5, arg14, (*arg32)[0xf])
                i_1 -= -0x80
                cond:5_1 = i_1 == 0x200
            
            zmm1 = var_a60
            arg6 = var_a40
            arg7 = var_a20
            arg31 = _mm256_mask_load_ps(arg5, var_9c0)
            arg9 = var_9a0
            arg10 = var_980
            arg27 = _mm256_mask_load_ps(arg5, var_920)
            arg12 = var_900
            arg13 = _mm256_mask_add_ps(arg5, arg19, arg22)
            arg14 = _mm256_mask_add_ps(arg5, arg21, arg24)
            arg13 = _mm256_mask_mul_ps(arg5, arg13, arg29)
            arg14 = _mm256_mask_mul_ps(arg5, arg14, arg29)
            arg15 = _mm256_mul_ps(arg13, zmm1)
            arg16 = _mm256_mul_ps(arg13, arg6)
            arg17 = _mm256_mul_ps(arg13, arg7)
            arg18 = _mm256_mask_mul_ps(arg5, _mm256_mask_add_ps(arg5, arg20, arg23), arg29)
            arg15 = _mm256_fmadd_ps(arg15, arg18, var_9e0)
            arg16 = _mm256_mask3_fmadd_ps(arg16, arg5, arg18, arg31)
            arg17 = _mm256_fmadd_ps(arg17, arg18, arg9)
            arg18 = __vfmadd231ps_ymmqq_ymmqq_memqq(_mm256_mul_ps(arg18, arg10), arg13, var_a00)
            arg15 = _mm256_fmadd_ps(arg15, arg14, var_960)
            arg16 = _mm256_fmadd_ps(arg16, arg14, var_940)
            arg17 = _mm256_mask3_fmadd_ps(arg17, arg5, arg14, arg27)
            arg14 = _mm256_fmadd_ps(arg14, arg12, arg18)
            arg13 = __vaddps_ymmqq_ymmqq_memqq(arg15, var_8e0)
            arg15 = __vaddps_ymmqq_ymmqq_memqq(arg16, var_8c0)
            arg16 = __vaddps_ymmqq_ymmqq_memqq(arg17, var_8a0)
            arg14 = __vaddps_ymmqq_ymmqq_memqq(arg14, var_880)
            var_a60 = var_9e0
            var_a40 = _mm256_mask_store_ps(arg5, arg31)
            var_a20 = arg9
            var_a00 = arg10
            uint32_t var_600_1[0x8] = var_960
            float var_5e0_1[0x8] = var_940
            int256_t var_5c0_1 = _mm256_mask_store_ps(arg5, arg27)
            float var_5a0_1[0x8] = arg12
            arg20 = _mm256_mask_sub_ps(arg5, arg23, arg20)
            arg21 = _mm256_mask_sub_ps(arg5, arg24, arg21)
            arg20 = _mm256_mask_mul_ps(arg5, arg20, arg29)
            arg19 = _mm256_mask_mul_ps(arg5, _mm256_mask_sub_ps(arg5, arg22, arg19), arg29)
            float var_680_1[0x8] = arg13
            float var_660_1[0x8] = arg15
            float var_640_1[0x8] = arg16
            float var_620_1[0x8] = arg14
            zmm1 = _mm256_mask_mul_ps(arg5, arg19, zmm1)
            arg6 = _mm256_mask_mul_ps(arg5, arg19, arg6)
            arg7 = _mm256_mask_mul_ps(arg5, arg19, arg7)
            arg8 = _mm256_mask_mul_ps(arg5, arg20, var_9e0)
            arg19 = _mm256_mask_mul_ps(arg5, arg20, arg31)
            arg20 = _mm256_mask_mul_ps(arg5, arg20, arg9)
            zmm1 = _mm256_add_ps(_mm256_mask_and_ps(arg5, zmm1, zmm16), 
                _mm256_mask_and_ps(arg5, arg8, zmm16))
            arg6 = _mm256_add_ps(_mm256_mask_and_ps(arg5, arg6, zmm16), 
                _mm256_mask_and_ps(arg5, arg19, zmm16))
            arg7 = _mm256_add_ps(_mm256_mask_and_ps(arg5, arg7, zmm16), 
                _mm256_mask_and_ps(arg5, arg20, zmm16))
            arg8 = _mm256_mask_mul_ps(arg5, arg21, arg29)
            zmm0 = _mm256_mul_ps(arg8, var_960)
            zmm2 = _mm256_mul_ps(arg8, var_940)
            arg8 = _mm256_mask_mul_ps(arg5, arg8, arg27)
            zmm0 = _mm256_add_ps(zmm1, _mm256_mask_and_ps(arg5, zmm0, zmm16))
            zmm1 = _mm256_add_ps(arg6, _mm256_mask_and_ps(arg5, zmm2, zmm16))
            zmm2 = _mm256_add_ps(arg7, _mm256_mask_and_ps(arg5, arg8, zmm16))
            arg19 = _mm256_mask_sub_ps(arg5, arg13, zmm0)
            arg20 = _mm256_mask_sub_ps(arg5, arg15, zmm1)
            arg21 = _mm256_mask_sub_ps(arg5, arg16, zmm2)
            arg22 = _mm256_mask_add_ps(arg5, arg13, zmm0)
            arg23 = _mm256_mask_add_ps(arg5, arg15, zmm1)
            zmm0[0].o = zx.o(var_7a0)
            arg24 = _mm256_mask_add_ps(arg5, arg16, zmm2)
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            zmm1[0].o = __vpunpcklbw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm0[0].o = __vpmovzxbw_xmmdq_xmmq(zmm0[0].q)
            arg5 = _mm_mask_test_epi16_mask(k1_14, zmm1[0].o, zmm1[0].o)
            _kortest_mask8_u8(arg5, arg5)
            
            if (i_1 == 0x200)
                goto label_140343cf4
            
            int64_t k2_3 = _mm_mask_test_epi16_mask(arg5, zmm0[0].o, zmm18[0].o)
            zmm1 = _mm256_mask_min_ps(arg5, var_860, arg19)
            zmm2 = _mm256_mask_min_ps(arg5, var_840, arg20)
            arg6 = _mm256_mask_min_ps(arg5, var_820, arg21)
            arg7 = _mm256_mask_max_ps(arg5, var_800, arg22)
            arg8 = _mm256_mask_max_ps(arg5, var_7e0, arg23)
            arg27 = _mm256_mask_max_ps(arg5, _mm256_mask_load_ps(arg5, var_7c0), arg24)
            var_a60 = _mm256_mask_storeu_ps(k2_3, zmm1)
            var_a40 = _mm256_mask_storeu_ps(k2_3, zmm2)
            var_a20 = _mm256_mask_storeu_ps(k2_3, arg6)
            var_a00 = _mm256_mask_storeu_ps(k2_3, arg7)
            var_9e0 = _mm256_mask_storeu_ps(k2_3, arg8)
            var_9c0 = _mm256_mask_storeu_ps(k2_3, arg27)
            char temp0_218 = _cvtmask32_u32(k2_3)
            
            if ((temp0_218 & 1) == 0)
                if ((temp0_218 & 2) != 0)
                    goto label_140343c69
                
                goto label_140343c1b
            
            var_9a0[0].b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0)
            
            if ((temp0_218 & 2) != 0)
            label_140343c69:
                var_9a0[0]:1.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 2)
                
                if ((temp0_218 & 4) == 0)
                    goto label_140343c21
                
                goto label_140343c7a
            
        label_140343c1b:
            
            if ((temp0_218 & 4) == 0)
            label_140343c21:
                
                if ((temp0_218 & 8) != 0)
                    goto label_140343c8b
                
                goto label_140343c27
            
        label_140343c7a:
            var_9a0[0]:2.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 4)
            
            if ((temp0_218 & 8) != 0)
            label_140343c8b:
                var_9a0[0]:3.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 6)
                
                if ((temp0_218 & 0x10) == 0)
                    goto label_140343c2d
                
                goto label_140343c9c
            
        label_140343c27:
            
            if ((temp0_218 & 0x10) == 0)
            label_140343c2d:
                
                if ((temp0_218 & 0x20) != 0)
                    goto label_140343cad
                
                goto label_140343c33
            
        label_140343c9c:
            var_9a0[1].b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 8)
            char rbx_3
            
            if ((temp0_218 & 0x20) != 0)
            label_140343cad:
                var_9a0[1]:1.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xa)
                rbx_3 = _cvtmask32_u32(arg5)
                
                if ((temp0_218 & 0x40) == 0)
                    goto label_140343c41
                
                goto label_140343cc6
            
        label_140343c33:
            rbx_3 = _cvtmask32_u32(arg5)
            
            if ((temp0_218 & 0x40) == 0)
            label_140343c41:
                
                if (temp0_218 s< 0)
                    goto label_140343cda
                
                goto label_140343c4a
            
        label_140343cc6:
            var_9a0[1]:2.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xc)
            
            if (temp0_218 s>= 0)
            label_140343c4a:
                cond:5_1 = temp0_60 == rbx_3
                
                if (temp0_60 != rbx_3)
                label_140343cee:
                    zmm2[0].o = _mm_movm_epi16(arg5)
                label_140343cf4:
                    arg5 = _mm_mask_testn_epi16_mask(k1_14, zmm0[0].o, arg25[0].o)
                    _kortest_mask8_u8(arg5, arg5)
                    
                    if (not(cond:5_1))
                        int64_t k2_4 = _mm_mask_testn_epi16_mask(arg5, zmm0[0].o, arg25[0].o)
                        var_a60 = _mm256_mask_storeu_ps(k2_4, arg19)
                        var_a40 = _mm256_mask_storeu_ps(k2_4, arg20)
                        var_a20 = _mm256_mask_storeu_ps(k2_4, arg21)
                        var_a00 = _mm256_mask_storeu_ps(k2_4, arg22)
                        var_9e0 = _mm256_mask_storeu_ps(k2_4, arg23)
                        var_9c0 = _mm256_mask_storeu_ps(k2_4, arg24)
                        char temp0_236 = _cvtmask32_u32(k2_4)
                        
                        if ((temp0_236 & 1) == 0)
                            if ((temp0_236 & 2) != 0)
                                goto label_140343403
                            
                            goto label_140343d54
                        
                        var_9a0[0].b = 1
                        
                        if ((temp0_236 & 2) != 0)
                        label_140343403:
                            var_9a0[0]:1.b = 1
                            
                            if ((temp0_236 & 4) == 0)
                                goto label_140343d5e
                            
                            goto label_140343415
                        
                    label_140343d54:
                        
                        if ((temp0_236 & 4) == 0)
                        label_140343d5e:
                            
                            if ((temp0_236 & 8) != 0)
                                goto label_140343427
                            
                            goto label_140343d68
                        
                    label_140343415:
                        var_9a0[0]:2.b = 1
                        
                        if ((temp0_236 & 8) != 0)
                        label_140343427:
                            var_9a0[0]:3.b = 1
                            
                            if ((temp0_236 & 0x10) == 0)
                                goto label_140343d72
                            
                            goto label_140343439
                        
                    label_140343d68:
                        
                        if ((temp0_236 & 0x10) == 0)
                        label_140343d72:
                            
                            if ((temp0_236 & 0x20) != 0)
                                goto label_14034344b
                            
                            goto label_140343d7c
                        
                    label_140343439:
                        var_9a0[1].b = 1
                        
                        if ((temp0_236 & 0x20) != 0)
                        label_14034344b:
                            var_9a0[1]:1.b = 1
                            
                            if ((temp0_236 & 0x40) == 0)
                                goto label_140343d86
                            
                            goto label_14034345d
                        
                    label_140343d7c:
                        
                        if ((temp0_236 & 0x40) != 0)
                        label_14034345d:
                            var_9a0[1]:2.b = 1
                            
                            if (temp0_236 s< 0)
                                var_9a0[1]:3.b = 1
                        else
                        label_140343d86:
                            
                            if (temp0_236 s< 0)
                                var_9a0[1]:3.b = 1
                        
                        arg5 =
                            _kor_mask8(_mm_mask_test_epi16_mask(arg5, zmm2[0].o, zmm18[0].o), arg5)
                        _cvtmask32_u32(arg5)
            else
            label_140343cda:
                var_9a0[1]:3.b = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xe)
                cond:5_1 = temp0_60 == rbx_3
                
                if (temp0_60 != rbx_3)
                    goto label_140343cee
            
            zmm1 = var_a60
            zmm2 = var_a40
            arg6 = var_a20
            arg7 = var_a00
            arg8 = var_9e0
            arg19 = _mm256_mask_load_ps(arg5, var_9c0)
            zmm0[0].o = __vpmovzxbw_xmmdq_memq(var_9a0[0].q)
            var_860 = _mm256_mask_storeu_ps(k1_14, zmm1)
            var_840 = _mm256_mask_storeu_ps(k1_14, zmm2)
            var_820 = _mm256_mask_storeu_ps(k1_14, arg6)
            var_800 = _mm256_mask_storeu_ps(k1_14, arg7)
            var_7e0 = _mm256_mask_storeu_ps(k1_14, arg8)
            var_7c0 = _mm256_mask_storeu_ps(k1_14, arg19)
            
            if ((temp0_60 & 1) == 0)
                if ((temp0_60 & 2) != 0)
                    goto label_140343355
                
                goto label_140343e20
            
            var_7a0[0] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0)
            
            if ((temp0_60 & 2) != 0)
            label_140343355:
                var_7a0[1] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 2)
                
                if ((temp0_60 & 4) == 0)
                    goto label_140343e2a
                
                goto label_14034336a
            
        label_140343e20:
            
            if ((temp0_60 & 4) == 0)
            label_140343e2a:
                
                if ((temp0_60 & 8) != 0)
                    goto label_14034337f
                
                goto label_140343e34
            
        label_14034336a:
            var_7a0[2] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 4)
            
            if ((temp0_60 & 8) != 0)
            label_14034337f:
                var_7a0[3] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 6)
                
                if ((temp0_60 & 0x10) == 0)
                    goto label_140343e3e
                
                goto label_140343394
            
        label_140343e34:
            
            if ((temp0_60 & 0x10) == 0)
            label_140343e3e:
                
                if ((temp0_60 & 0x20) != 0)
                    goto label_1403433a9
                
                goto label_140343e48
            
        label_140343394:
            var_7a0[4] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 8)
            
            if ((temp0_60 & 0x20) != 0)
            label_1403433a9:
                var_7a0[5] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xa)
                
                if ((temp0_60 & 0x40) == 0)
                    goto label_140343e52
                
                goto label_1403433be
            
        label_140343e48:
            
            if ((temp0_60 & 0x40) != 0)
            label_1403433be:
                var_7a0[6] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xc)
                
                if (temp0_60 s< 0)
                label_1403433d2:
                    var_7a0[7] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xe)
                    r11 = zx.q(r11.d + 8)
                    cond:1_1 = r11.d == rdx_4
                    
                    if (r11.d s>= rdx_4)
                        break
                    
                    continue
            else
            label_140343e52:
                
                if (temp0_60 s< 0)
                    goto label_1403433d2
        
        r11 = zx.q(r11.d + 8)
        cond:1_1 = r11.d == rdx_4
        
        if (r11.d s>= rdx_4)
            break
    
    rcx_7 = arg34
    
    if (r11.d s< rcx_7)
        goto label_140343e92
arg6 = var_820
zmm16 = _mm256_mask_load_ps(arg5, var_7c0)
zmm0[0].o = __vpmovzxbw_xmmdq_memq(var_7a0)
uint64_t k1_29 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, zmm17, data_142fc92e0)
zmm17 = _mm256_mask_load_ps(arg5, data_1434b2c40).o
int64_t k2_13
char temp0_503
temp0_503, k2_13 = _mm256_i32scatter_ps(__kmovq_maskmskw_masku64_avx512(k1_29), var_860)
void var_780
*(&var_780 + zmm17[0].q) = temp0_503
zmm1 = data_1434b2c60
int64_t k2_15
char temp0_504
temp0_504, k2_15 = _mm256_i32scatter_ps(__kmovq_maskmskw_masku64_avx512(k1_29), var_840)
*(&var_780 + zmm1[0].q) = temp0_504
zmm1 = data_1434b2c80
int64_t k2_17
char temp0_505
temp0_505, k2_17 = _mm256_i32scatter_ps(__kmovq_maskmskw_masku64_avx512(k1_29), arg6)
*(&var_780 + zmm1[0].q) = temp0_505
zmm1 = data_1434b2ca0
int64_t k2_19
char temp0_506
temp0_506, k2_19 = _mm256_i32scatter_ps(__kmovq_maskmskw_masku64_avx512(k1_29), var_800)
*(&var_780 + zmm1[0].q) = temp0_506
zmm1 = data_1434b2cc0
int64_t k2_21
char temp0_507
temp0_507, k2_21 = _mm256_i32scatter_ps(__kmovq_maskmskw_masku64_avx512(k1_29), var_7e0)
*(&var_780 + zmm1[0].q) = temp0_507
char i_3 = _cvtmask32_u32(k1_29)
zmm1 = data_1434b2ce0
int64_t k1_30
char temp0_508
temp0_508, k1_30 = _mm256_i32scatter_ps(k1_29, zmm16)
*(&var_780 + zmm1[0].q) = temp0_508
uint64_t i_2 = zx.q(i_3)

if ((i_2.b & 1) == 0)
    if ((i_2.b & 2) != 0)
        goto label_140344b75
    
    goto label_140344982

char var_768[0x1c]
var_768[0] = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0)

if ((i_2.b & 2) != 0)
label_140344b75:
    uint8_t var_74c_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 2)
    
    if ((i_2.b & 4) == 0)
        goto label_14034498c
    
    goto label_140344b8a

label_140344982:

if ((i_2.b & 4) == 0)
label_14034498c:
    
    if ((i_2.b & 8) != 0)
        goto label_140344b9f
    
    goto label_140344996

label_140344b8a:
uint8_t var_730_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 4)

if ((i_2.b & 8) != 0)
label_140344b9f:
    uint8_t var_714_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 6)
    
    if ((i_2.b & 0x10) == 0)
        goto label_1403449a0
    
    goto label_140344bb4

label_140344996:

if ((i_2.b & 0x10) != 0)
label_140344bb4:
    uint8_t var_6f8_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 8)
    
    if ((i_2.b & 0x20) != 0)
    label_140344bc9:
        uint8_t var_6dc_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xa)
        
        if ((i_2.b & 0x40) == 0)
            goto label_1403449b4
        
        goto label_140344bde
else
label_1403449a0:
    
    if ((i_2.b & 0x20) != 0)
        goto label_140344bc9

int32_t* rcx_15
uint8_t var_6a4_1

if ((i_2.b & 0x40) != 0)
label_140344bde:
    uint8_t var_6c0_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xc)
    rcx_15 = arg33
    
    if (i_2.b s< 0)
        var_6a4_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xe)
else
label_1403449b4:
    rcx_15 = arg33
    
    if (i_2.b s< 0)
        var_6a4_1 = __vpextrb_memb_xmmdq_immb(zmm0[0].o, 0xe)
char result

do
    uint64_t rax_7 = _tzcnt_u64(i_2)
    i_2 &= not.q(1 << (rax_7 u% 0x40))
    uint64_t rbx_8 = rax_7 * 0x1c
    result = rcx_15[6].b
    char result_1 = var_768[rbx_8]
    void var_a80
    void var_77c
    void var_778
    void var_774
    void var_76c
    
    if (result != 0 && result_1 != 0)
        zmm0[0].o = *(&var_a80 + rbx_8 + 0x300)
        zmm1[0].o = __vmovsd_xmmdq_memq(*rcx_15)
        var_840[0].o = __vmovsd_xmmdq_memq(*(rcx_15 + 0xc))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, rcx_15[2], 0x20)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(&var_77c + rbx_8), 0x10)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(&var_778 + rbx_8), 0x20)
        zmm0 = _mm256_min_ps(zmm1, zmm0)
        zmm1[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_840[0].o, rcx_15[5], 0x20)
        var_800[0].o = __vmovsd_xmmdq_memq(*(&var_774 + rbx_8))
        var_840[0].o = _mm_permute_pd(zmm0[0].o, 1)
        var_800[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_800[0].o, *(&var_76c + rbx_8), 0x20)
        arg6 = _mm256_max_ps(arg6, var_800)
        var_800[0].o = __vmovshdup_xmmdq_xmmdq(arg6[0].o)
        var_7e0[0].o = _mm_permute_pd(arg6[0].o, 1)
    else if (result_1 == 0)
        result = rcx_15[6].b
        var_7e0[0].o = rcx_15[5]
        var_800[0].o = rcx_15[4]
        arg6[0].o = rcx_15[3]
        var_840[0].o = rcx_15[2]
        zmm0[0].o = *rcx_15
        zmm1[0].o = rcx_15[1]
    else
        zmm0[0].o = *(&var_a80 + rbx_8 + 0x300)
        zmm1[0].o = *(&var_77c + rbx_8)
        var_840[0].o = *(&var_778 + rbx_8)
        arg6[0].o = *(&var_774 + rbx_8)
        void var_770
        var_800[0].o = *(&var_770 + rbx_8)
        var_7e0[0].o = *(&var_76c + rbx_8)
        result = result_1
    *rcx_15 = zmm0[0]
    rcx_15[1] = zmm1[0]
    rcx_15[2] = var_840[0]
    rcx_15[3] = arg6[0]
    rcx_15[4] = var_800[0]
    rcx_15[5] = var_7e0[0]
    rcx_15[6].b = result
while (i_2 != 0)

arg9[0].o = var_e8
arg10[0].o = var_d8
arg11[0].o = var_c8
arg12[0].o = var_b8
arg13[0].o = var_a8
arg14[0].o = var_98
arg15[0].o = var_88
arg16[0].o = var_78
arg17[0].o = var_68
arg18[0].o = var_58
_mm256_zeroupper()
return result
