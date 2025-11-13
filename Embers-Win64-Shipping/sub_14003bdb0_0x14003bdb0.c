// 函数: sub_14003bdb0
// 地址: 0x14003bdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_48 = arg15[0].o
int128_t var_58 = arg14[0].o
int128_t var_68 = arg13[0].o
int128_t var_78 = arg12[0].o
int128_t var_88 = arg11[0].o
int128_t var_98 = arg10[0].o
int128_t var_a8 = arg9[0].o
uint16_t zmm7[0x8]
uint16_t var_c8[0x8] = zmm7
int128_t var_d8 = arg8[0].o
int128_t* result = arg23
float zmm0[0x8]
zmm0[0].o = *result
float zmm4[0x8]
zmm4[0].o = arg19
float zmm8[0x8]
zmm8[0].o = zx.o(0)
float var_2a0[0x8] = zmm8
int32_t rdi_4 = ((arg22 s>> 0x1f u>> 0x1d) + arg22) & 0xfffffff8
float var_2c0[0x8] = zmm8
float var_2e0[0x8] = zmm8
uint64_t var_370[0x2] = zmm0[0].o
int32_t* r10
double* r11
float zmm1[0x8]
float zmm2[0x8]
float zmm24[0x8]
uint32_t rbx
float zmm16[0x8]
float zmm17[0x8]
float zmm18[0x8]
float zmm19[0x8]
float zmm20[0x8]
float zmm22[0x8]
float zmm23[0x8]
float zmm26[0x8]

if (rdi_4 s<= 0)
    rbx = 0
    r11 = arg21
    r10 = arg20
    
    if (0 s< arg22)
    label_14003c520:
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_mask_set1_epi32(arg5, rbx), data_142fc93a0)
        uint64_t k1_27 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, 
            _mm256_mask_set1_epi32(arg5, arg22), zmm0)
        bool c_1 = (rbx & 0x40000000) != 0
        bool z_1 = (rbx & 0x3fffffff) == 0
        result = sx.q(rbx << 2)
        zmm0 = _mm256_mask_loadu_epi32(k1_27, *(arg18 + result))
        zmm1 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 3)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        int64_t k2_2
        int32_t temp0_127
        temp0_127, k2_2 = _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_27), 
            *(arg4 + (zmm1[0].q << 2)))
        arg6 = temp0_127
        zmm0 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0xc)
        zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
        int64_t k2_4
        int32_t temp0_131
        temp0_131, k2_4 =
            _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_27), *(arg4 + zmm1[0].q))
        zmm4 = temp0_131
        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
        int64_t k2_6
        int32_t temp0_135
        temp0_135, k2_6 =
            _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_27), *(arg4 + zmm0[0].q))
        arg7 = temp0_135
        float var_1e0_1[0x8] = arg6
        float var_1a0_1[0x8] = arg7
        float var_180_1[0x8] = zmm1
        zmm0 = _mm256_broadcast_ss(arg3[3])
        float var_360_2[0x8] = zmm0
        float var_340_2[0x8] = zmm0
        float var_320_2[0x8] = zmm0
        float var_300_2[0x8] = zmm0
        zmm16 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[1])
        zmm17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[2])
        zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg3)
        zmm1 = _mm256_mul_ps(zmm0, zmm1)
        zmm2[0].o = __vpbroadcastw_xmmdq_memw(0xff)
        zmm19 = _mm256_mask_mul_ps(arg5, zmm4, zmm17)
        zmm20 = _mm256_mask_mul_ps(arg5, arg7, zmm18)
        arg16 = _mm256_mask_mul_ps(arg5, arg6, zmm16)
        zmm19 = _mm256_mask3_fmsub_ps(zmm19, arg5, zmm16, arg7)
        zmm20 = _mm256_mask3_fmsub_ps(zmm20, arg5, zmm17, arg6)
        arg16 = _mm256_mask3_fmsub_ps(arg16, arg5, zmm18, zmm4)
        zmm1 = _mm256_sub_ps(zmm1, zmm1)
        arg6 = _mm256_mask_add_ps(arg5, zmm19, zmm19)
        arg7 = _mm256_mask_add_ps(arg5, zmm20, zmm20)
        zmm16 = _mm256_mask_add_ps(arg5, arg16, arg16)
        zmm1 = _mm256_add_ps(zmm1, zmm1)
        float var_280_2[0x8] = arg6
        float var_260_2[0x8] = arg7
        int256_t var_240_2 = _mm256_mask_store_ps(arg5, zmm16)
        float var_220_2[0x8] = zmm1
        zmm17 = _mm256_mask_load_ps(arg5, var_1e0_1)
        zmm4[0].o = _mm_movm_epi16(k1_27)
        zmm17 = _mm256_mask3_fmadd_ps(zmm17, arg5, zmm0, arg6)
        zmm18 = _mm256_mask_load_ps(arg5, zmm4)
        zmm19 = _mm256_mask_load_ps(arg5, var_1a0_1)
        zmm18 = _mm256_mask3_fmadd_ps(zmm18, arg5, zmm0, arg7)
        zmm19 = _mm256_mask3_fmadd_ps(zmm19, arg5, zmm0, zmm16)
        zmm1 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm1, zmm0, var_180_1)
        int256_t var_160_1 = _mm256_mask_store_ps(arg5, zmm17)
        int256_t var_140_1 = _mm256_mask_store_ps(arg5, zmm18)
        int256_t var_120_1 = _mm256_mask_store_ps(arg5, zmm19)
        float var_100_1[0x8] = zmm1
        zmm0 = _mm256_broadcast_ss(arg3[1])
        zmm1 = _mm256_broadcast_ss(arg3[2])
        zmm20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg3)
        zmm7 = zmm4[0].o & zmm2[0].o
        arg16 = _mm256_mask_mul_ps(arg5, arg7, zmm1)
        zmm22 = _mm256_mask_mul_ps(arg5, zmm16, zmm20)
        zmm23 = _mm256_mask_mul_ps(arg5, arg6, zmm0)
        arg16 = _mm256_mask3_fmsub_ps(arg16, arg5, zmm16, zmm0)
        zmm22 = _mm256_mask3_fmsub_ps(zmm22, arg5, arg6, zmm1)
        zmm23 = _mm256_mask3_fmsub_ps(zmm23, arg5, arg7, zmm20)
        zmm0 = _mm256_mask_add_ps(arg5, zmm17, arg16)
        zmm1 = _mm256_mask_add_ps(arg5, zmm18, zmm22)
        arg6 = _mm256_mask_add_ps(arg5, zmm19, zmm23)
        zmm26 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm0, arg3[4])
        zmm17 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm1, arg3[5])
        arg17 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg6, arg3[6])
        zmm1 = _mm256_broadcast_ss(*arg2)
        zmm16 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg2[1])
        zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg2[2])
        zmm20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg1)
        zmm23 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[1])
        zmm24 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[2])
        int64_t k0_15 = _mm256_cmp_ps_mask(arg5, zmm26, zmm1, 2)
        arg7[0].o = _mm_movm_epi16(k0_15)
        zmm0[0].o = arg7[0].o ^ data_142fc92e0
        arg8[0].o = zmm0[0].o & zmm4[0].o
        zmm0[0].o = arg8[0].o & zmm2[0].o
        int64_t k0_16 = __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_15, zmm0[0].o, zmm7)
        _kortest_mask8_u8(k0_16, k0_16)
        
        if (not(c_1))
            k0_16 = _mm256_cmp_ps_mask(_mm256_cmp_ps_mask(k1_27, zmm26, zmm1, 2), zmm17, zmm16, 2)
            arg7[0].o = _mm_movm_epi16(k0_16)
            arg6[0].o = arg7[0].o ^ data_142fc92e0
            arg8[0].o = arg6[0].o & zmm4[0].o
        
        arg6[0].o = arg8[0].o & zmm2[0].o
        int64_t k0_17 = __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_16, arg6[0].o, zmm7)
        _kortest_mask8_u8(k0_17, k0_17)
        
        if (not(c_1))
            int64_t k2_8 = _mm256_cmp_ps_mask(k0_17, arg17, zmm18, 2)
            arg6[0].o = arg7[0].o & zmm4[0].o
            arg7[0].o = _mm_mask_mov_epi16(k2_8, arg6[0].o)
            arg8[0].o = arg7[0].o ^ zmm4[0].o
        
        arg6[0].o = arg8[0].o & zmm2[0].o
        int64_t k0_18 = __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_17, arg6[0].o, zmm7)
        _kortest_mask8_u8(k0_18, k0_18)
        
        if (not(c_1))
            arg7[0].o &= zmm4[0].o
            arg8[0].o = arg7[0].o & zmm2[0].o
            int64_t k0_19 = _mm256_cmp_ps_mask(k0_18, zmm20, zmm26, 2)
            zmm7 = _mm_movm_epi16(k0_19)
            arg6[0].o = zmm7 ^ data_142fc92e0
            arg6[0].o &= arg7[0].o
            zmm0[0].o = arg6[0].o & zmm2[0].o
            int64_t k0_20 =
                __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_19, zmm0[0].o, arg8[0].o)
            _kortest_mask8_u8(k0_20, k0_20)
            
            if (not(c_1))
                int64_t k2_9 = _mm256_cmp_ps_mask(k0_20, zmm23, zmm17, 2)
                zmm0[0].o = arg7[0].o & zmm7
                zmm7 = _mm_mask_mov_epi16(k2_9, zmm0[0].o)
                arg6[0].o = zmm7 ^ arg7[0].o
            
            zmm0[0].o = arg6[0].o & zmm2[0].o
            k0_18 = __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_20, zmm0[0].o, arg8[0].o)
            _kortest_mask8_u8(k0_18, k0_18)
            
            if (not(c_1))
                int64_t k2_10 = _mm256_cmp_ps_mask(k0_18, zmm24, arg17, 2)
                zmm0[0].o = zmm7 & arg7[0].o
                zmm7 = _mm_mask_mov_epi16(k2_10, zmm0[0].o)
            
            arg7[0].o &= zmm7
        
        zmm22 = _mm256_mask_sub_ps(k0_18, zmm26, zmm1)
        zmm1 = _mm256_mask_sub_ps(k0_18, zmm17, zmm16)
        zmm19 = _mm256_mask_sub_ps(k0_18, arg17, zmm18)
        arg16 = _mm256_mask_sub_ps(k0_18, zmm20, zmm26)
        zmm20 = _mm256_mask_sub_ps(k0_18, zmm23, zmm17)
        zmm18 = _mm256_mask_sub_ps(k0_18, zmm24, arg17)
        zmm0[0].o = arg7[0].o & zmm4[0].o
        int64_t k0_21 =
            __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_18, zmm0[0].o, data_142fc92e0)
        _kortest_mask8_u8(k0_21, k0_21)
        
        if (not(z_1))
            zmm16 = _mm256_mask_max_ps(k0_21, arg16, zmm22)
            zmm24 = _mm256_mask_max_ps(k0_21, zmm20, zmm1)
            zmm23 = _mm256_mask_max_ps(k0_21, zmm18, zmm19)
            int64_t k0_22 = _mm256_cmp_ps_mask(k0_21, zmm24, zmm16, 1)
            zmm7 = _mm_movm_epi16(k0_22)
            arg6[0].o = arg7[0].o & zmm7
            zmm0[0].o = arg6[0].o & zmm4[0].o
            int64_t k0_23 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_22, zmm0[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_23, k0_23)
            
            if (not(z_1))
                arg6[0].o =
                    _mm_mask_mov_epi16(_mm256_cmp_ps_mask(k0_23, zmm23, zmm16, 5), arg6[0].o)
                zmm0[0].o = arg6[0].o & zmm4[0].o
                k0_23 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_23, zmm0[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_23, k0_23)
                
                if (not(z_1))
                    zmm16 = _mm256_mask_blend_ps(
                        __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_23, arg6[0].o, 
                            data_142fc92e0), 
                        zmm23, zmm16)
            
            zmm0[0].o = zmm7 ^ data_142fc92e0
            zmm7 = arg7[0].o & zmm0[0].o
            zmm0[0].o = zmm7 & zmm4[0].o
            k0_21 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_23, zmm0[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_21, k0_21)
        
        if (z_1)
            zmm24[0].o = _mm_mask_load_epi64(k0_21, var_370)
        else
            int64_t k0_24 = _mm256_cmp_ps_mask(k0_21, zmm23, zmm24, 1)
            arg8[0].o = _mm_movm_epi16(k0_24)
            arg6[0].o = zmm7 & arg8[0].o
            zmm0[0].o = arg6[0].o & zmm4[0].o
            int64_t k0_25 = _mm_mask_test_epi16_mask(k0_24, zmm0[0].o, zmm2[0].o)
            _kortest_mask8_u8(k0_25, k0_25)
            
            if (not(z_1))
                zmm24 = _mm256_mask_mov_ps(_mm_mask_testn_epi16_mask(k0_25, arg6[0].o, zmm2[0].o), 
                    zmm16)
                zmm16 = _mm256_mask_mov_ps(k0_25, zmm24)
            
            zmm24[0].o = _mm_mask_load_epi64(k0_25, var_370)
            zmm0[0].o = arg8[0].o ^ data_142fc92e0
            arg6[0].o = zmm7 & zmm0[0].o
            zmm0[0].o = arg6[0].o & zmm4[0].o
            k0_21 = _mm_mask_test_epi16_mask(k0_25, zmm0[0].o, zmm2[0].o)
            _kortest_mask8_u8(k0_21, k0_21)
            
            if (not(z_1))
                zmm23 = _mm256_mask_mov_ps(
                    __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_21, arg6[0].o, 
                        data_142fc92e0), 
                    zmm16)
                zmm16 = _mm256_mask_mov_ps(k0_21, zmm23)
        
        zmm23[0].o = _mm_mask_load_ss(k0_21, arg19)
        zmm2[0].o = arg7[0].o ^ data_142fc92e0
        zmm0[0].o = zmm2[0].o & zmm4[0].o
        arg5 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_21, zmm0[0].o, data_142fc92e0)
        _kortest_mask8_u8(arg5, arg5)
        
        if (not(z_1))
            zmm0[0].o = zx.o(0)
            int64_t k0_26 = _mm256_cmp_ps_mask(arg5, zmm0, zmm22, 1)
            arg6[0].o = _mm_movm_epi16(k0_26)
            zmm7 = arg6[0].o & zmm2[0].o
            zmm0[0].o = zmm7 & zmm4[0].o
            int64_t k0_27 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_26, zmm0[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_27, k0_27)
            
            if (not(z_1))
                var_360_2 = _mm256_mask_storeu_ps(
                    __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_27, zmm7, data_142fc92e0), 
                    zmm22)
            
            zmm0[0].o = arg6[0].o ^ data_142fc92e0
            zmm7 = zmm0[0].o & zmm2[0].o
            zmm0[0].o = zmm7 & zmm4[0].o
            int64_t k0_28 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_27, zmm0[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_28, k0_28)
            
            if (not(z_1))
                zmm0[0].o = zx.o(0)
                int64_t k0_29 = _mm256_cmp_ps_mask(k0_28, zmm0, arg16, 1)
                arg6[0].o = _mm_movm_epi16(k0_29)
                arg8[0].o = zmm7 & arg6[0].o
                zmm0[0].o = arg8[0].o & zmm4[0].o
                int64_t k0_30 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_29, zmm0[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_30, k0_30)
                
                if (not(z_1))
                    zmm0 = __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_30, arg16, 0x80000000)
                    var_360_2 = _mm256_mask_storeu_ps(
                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_30, arg8[0].o, 
                            data_142fc92e0), 
                        zmm0)
                
                zmm0[0].o = arg6[0].o ^ data_142fc92e0
                arg6[0].o = zmm7 & zmm0[0].o
                zmm0[0].o = arg6[0].o & zmm4[0].o
                k0_28 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_30, zmm0[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_28, k0_28)
                
                if (not(z_1))
                    int64_t k2_17 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_28, 
                        arg6[0].o, data_142fc92e0)
                    zmm0[0].o = zx.o(0)
                    var_360_2 = _mm256_mask_storeu_ps(k2_17, zmm0)
            
            zmm0[0].o = zx.o(0)
            int64_t k0_31 = _mm256_cmp_ps_mask(k0_28, zmm0, zmm1, 1)
            arg6[0].o = _mm_movm_epi16(k0_31)
            zmm7 = arg6[0].o & zmm2[0].o
            zmm0[0].o = zmm7 & zmm4[0].o
            int64_t k0_32 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_31, zmm0[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_32, k0_32)
            
            if (not(z_1))
                var_340_2 = _mm256_mask_storeu_ps(
                    __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_32, zmm7, data_142fc92e0), 
                    zmm1)
            
            zmm0[0].o = arg6[0].o ^ data_142fc92e0
            zmm1[0].o = zmm0[0].o & zmm2[0].o
            zmm0[0].o = zmm1[0].o & zmm4[0].o
            int64_t k0_33 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_32, zmm0[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_33, k0_33)
            
            if (not(z_1))
                zmm0[0].o = zx.o(0)
                int64_t k0_34 = _mm256_cmp_ps_mask(k0_33, zmm0, zmm20, 1)
                arg6[0].o = _mm_movm_epi16(k0_34)
                zmm7 = zmm1[0].o & arg6[0].o
                zmm0[0].o = zmm7 & zmm4[0].o
                int64_t k0_35 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_34, zmm0[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_35, k0_35)
                
                if (not(z_1))
                    zmm0 = __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_35, zmm20, 0x80000000)
                    var_340_2 = _mm256_mask_storeu_ps(
                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_35, zmm7, 
                            data_142fc92e0), 
                        zmm0)
                
                zmm0[0].o = arg6[0].o ^ data_142fc92e0
                zmm1[0].o &= zmm0[0].o
                zmm0[0].o = zmm1[0].o & zmm4[0].o
                k0_33 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_35, zmm0[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_33, k0_33)
                
                if (not(z_1))
                    int64_t k2_20 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_33, 
                        zmm1[0].o, data_142fc92e0)
                    zmm0[0].o = zx.o(0)
                    var_340_2 = _mm256_mask_storeu_ps(k2_20, zmm0)
            
            zmm0[0].o = zx.o(0)
            int64_t k0_36 = _mm256_cmp_ps_mask(k0_33, zmm0, zmm19, 1)
            zmm1[0].o = _mm_movm_epi16(k0_36)
            arg6[0].o = zmm1[0].o & zmm2[0].o
            zmm0[0].o = arg6[0].o & zmm4[0].o
            int64_t k0_37 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_36, zmm0[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_37, k0_37)
            
            if (not(z_1))
                var_320_2 = _mm256_mask_storeu_ps(
                    __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_37, arg6[0].o, 
                        data_142fc92e0), 
                    zmm19)
            
            zmm0[0].o = zmm1[0].o ^ data_142fc92e0
            zmm1[0].o = zmm0[0].o & zmm2[0].o
            zmm0[0].o = zmm1[0].o & zmm4[0].o
            arg5 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_37, zmm0[0].o, data_142fc92e0)
            _kortest_mask8_u8(arg5, arg5)
            
            if (not(z_1))
                zmm0[0].o = zx.o(0)
                int64_t k0_38 = _mm256_cmp_ps_mask(arg5, zmm0, zmm18, 1)
                zmm2[0].o = _mm_movm_epi16(k0_38)
                arg6[0].o = zmm1[0].o & zmm2[0].o
                zmm0[0].o = arg6[0].o & zmm4[0].o
                int64_t k0_39 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_38, zmm0[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_39, k0_39)
                
                if (not(z_1))
                    zmm0 = __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_39, zmm18, 0x80000000)
                    var_320_2 = _mm256_mask_storeu_ps(
                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_39, arg6[0].o, 
                            data_142fc92e0), 
                        zmm0)
                
                zmm0[0].o = zmm2[0].o ^ data_142fc92e0
                zmm1[0].o &= zmm0[0].o
                zmm0[0].o = zmm1[0].o & zmm4[0].o
                arg5 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_39, zmm0[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(arg5, arg5)
                
                if (not(z_1))
                    int64_t k2_23 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, 
                        zmm1[0].o, data_142fc92e0)
                    zmm0[0].o = zx.o(0)
                    var_320_2 = _mm256_mask_storeu_ps(k2_23, zmm0)
            
            zmm1[0].o = zx.o(0)
            zmm2 = var_340_2
            zmm0 = _mm256_fmadd_ps(
                _mm256_fmadd_ps(_mm256_fmadd_ps(var_360_2, var_360_2, zmm1), zmm2, zmm2), 
                var_320_2, var_320_2)
            zmm1 = _mm256_mask_rsqrt14_ps(arg5, zmm0)
            zmm0 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                _mm256_mul_ps(zmm1, 
                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(_mm256_mul_ps(zmm0, zmm1), 
                        arg5, zmm1, 0x40400000)), 
                0x3f000000)
            zmm1 = _mm256_mask_rcp14_ps(arg5, zmm0)
            _mm256_mul_ps(zmm1, 
                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm0, arg5, zmm1, 0x40000000))
            zmm1[0].o = arg7[0].o & data_142fc92e0
            zmm16 = _mm256_mask_mov_ps(arg5, 
                _mm256_mask_mov_ps(
                    __vpcmpeqw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, zmm1[0].o, 
                        data_142fc92e0), 
                    zmm16))
        
        zmm1 = _mm256_mask_sub_ps(arg5, zmm16, _mm256_mask_broadcastss_ps(arg5, zmm23[0].o))
        int64_t k1_28 =
            __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k1_27, zmm1, 0xb8d1b717, 1)
        _kortest_mask8_u8(k1_28, k1_28)
        
        if (not(z_1))
            zmm26 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm26, arg5, zmm1, var_2e0)
            zmm17 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm17, arg5, zmm1, var_2c0)
            arg17 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg17, arg5, zmm1, var_2a0)
            var_2e0 = _mm256_mask_storeu_ps(k1_28, zmm26)
            var_2c0 = _mm256_mask_storeu_ps(k1_28, zmm17)
            var_2a0 = _mm256_mask_storeu_ps(k1_28, arg17)
            zmm8 = _mm256_mask_add_ps(k1_28, zmm8, zmm1)
    else
        zmm24[0].o = _mm_mask_load_epi64(arg5, var_370)
else
    arg6 = _mm256_broadcast_ss(arg3[3])
    zmm0[0].o = *arg3
    zmm1[0].o = arg3[1]
    zmm2[0].o = arg3[2]
    arg15 = _mm256_broadcast_ss(*arg2)
    arg7 = _mm256_broadcast_ss(arg2[1])
    float var_200_1[0x8] = arg7
    zmm16 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg2[2])
    zmm17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg1)
    zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[1])
    zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[2])
    zmm20 = _mm256_mask_broadcastss_ps(arg5, zmm4[0].o)
    arg16[0].o = _mm_mask_xor_ps(arg5, arg16[0].o, arg16[0].o)
    result = nullptr
    zmm22 = _mm256_mask_broadcastss_ps(arg5, zmm1[0].o)
    zmm23 = _mm256_mask_broadcastss_ps(arg5, zmm2[0].o)
    zmm24 = _mm256_mask_broadcastss_ps(arg5, zmm0[0].o)
    zmm2[0].o = data_142fc92e0
    arg8[0].o = data_142fc92e0
    rbx = 0
    bool cond:1_1 = true
    bool cond:2_1 = true
    bool cond:3_1 = true
    bool cond:4_1 = true
    bool cond:5_1 = true
    bool cond:6_1 = true
    bool cond:7_1 = true
    bool cond:8_1 = true
    bool cond:9_1 = true
    bool cond:10_1 = true
    bool cond:11_1 = false
    bool cond:12_1 = true
    bool cond:13_1 = false
    bool cond:14_1 = true
    bool cond:15_1 = true
    bool cond:16_1 = false
    bool cond:17_1 = true
    bool cond:18_1 = true
    bool cond:19_1 = true
    bool cond:20_1 = true
    bool cond:21_1 = true
    bool cond:22_1 = true
    bool cond:23_1 = true
    bool cond:24_1 = true
    bool cond:25_1 = true
    bool cond:26_1 = true
    bool cond:27_1 = true
    zmm8[0].o = zx.o(0)
    
    do
        zmm0 = *(arg18 + sx.q(result.d))
        zmm1 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 3)
        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
        int64_t k1_2
        int32_t temp0_15
        temp0_15, k1_2 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + (zmm1[0].q << 2)))
        zmm4 = temp0_15
        zmm0 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0xc)
        zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
        int64_t k1_4
        int32_t temp0_19
        temp0_19, k1_4 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + zmm1[0].q))
        arg7 = temp0_19
        zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        int64_t k1_6
        int32_t temp0_22
        temp0_22, k1_6 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + zmm0[0].q))
        zmm1 = temp0_22
        float var_280_1[0x8] = zmm4
        float var_260_1[0x8] = arg7
        float var_240_1[0x8] = zmm1
        int256_t var_220_1 = _mm256_mask_store_ps(arg5, arg16)
        float var_360_1[0x8] = arg6
        float var_340_1[0x8] = arg6
        float var_320_1[0x8] = arg6
        float var_300_1[0x8] = arg6
        zmm0 = _mm256_mask_mul_ps(arg5, arg7, zmm23)
        zmm26 = _mm256_mask_mul_ps(arg5, zmm1, zmm24)
        float zmm27[0x8] = _mm256_mask_mul_ps(arg5, zmm4, zmm22)
        zmm1 = _mm256_mask3_fmsub_ps(zmm1, arg5, zmm22, zmm0)
        zmm4 = _mm256_mask3_fmsub_ps(zmm4, arg5, zmm23, zmm26)
        arg7 = _mm256_mask3_fmsub_ps(arg7, arg5, zmm24, zmm27)
        zmm0 = _mm256_add_ps(zmm1, zmm1)
        zmm1 = _mm256_add_ps(zmm4, zmm4)
        zmm4 = _mm256_add_ps(arg7, arg7)
        arg7 = _mm256_fmadd_ps(var_280_1, arg6, zmm0)
        zmm26 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_260_1), arg5, arg6, zmm1)
        zmm27 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_240_1), arg5, arg6, zmm4)
        float zmm28[0x8] = _mm256_mask_mul_ps(arg5, zmm1, zmm23)
        float zmm29[0x8] = _mm256_mask_mul_ps(arg5, zmm4, zmm24)
        float zmm30[0x8] = _mm256_mask_mul_ps(arg5, zmm0, zmm22)
        zmm4 = _mm256_add_ps(arg7, _mm256_mask3_fmsub_ps(zmm4, arg5, zmm22, zmm28))
        zmm0 = _mm256_mask_add_ps(arg5, zmm26, _mm256_mask3_fmsub_ps(zmm0, arg5, zmm23, zmm29))
        zmm1 = _mm256_mask_add_ps(arg5, zmm27, _mm256_mask3_fmsub_ps(zmm1, arg5, zmm24, zmm30))
        zmm28 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm4, arg3[4])
        zmm29 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm0, arg3[5])
        zmm30 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm1, arg3[6])
        int64_t k1_7 = _mm256_cmp_ps_mask(arg5, zmm28, arg15, 2)
        _kortest_mask8_u8(k1_7, k1_7)
        
        if (not(cond:1_1))
            k1_7 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(
                _mm256_cmp_ps_mask(arg5, zmm28, arg15, 2), zmm29, arg2[1], 2)
            _kortest_mask8_u8(k1_7, k1_7)
        
        if (cond:1_1 || cond:2_1)
            zmm1[0].o = _mm_movm_epi16(k1_7)
        else
            int64_t k1_9 =
                __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k1_7, zmm30, arg2[2], 2)
            zmm1[0].o = _mm_movm_epi16(k1_9)
            _kortest_mask8_u8(k1_9, k1_9)
            
            if (not(cond:5_1))
                zmm27 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg1)
                int64_t k0 = _mm256_cmp_ps_mask(arg5, zmm27, zmm28, 2)
                zmm0[0].o = _mm_movm_epi16(k0)
                zmm4[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                arg7[0].o = zmm1[0].o & zmm4[0].o
                zmm7 = (zmm0[0].o ^ zmm2[0].o) & zmm1[0].o
                arg8[0].o = zmm7 & zmm4[0].o
                int64_t k0_1 =
                    __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0, arg8[0].o, arg7[0].o)
                _kortest_mask8_u8(k0_1, k0_1)
                
                if (not(cond:11_1))
                    zmm0 = _mm256_broadcast_ss(arg1[1])
                    k0_1 = _mm256_cmp_ps_mask(_mm256_cmp_ps_mask(k1_9, zmm27, zmm28, 2), zmm0, 
                        zmm29, 2)
                    zmm0[0].o = _mm_movm_epi16(k0_1)
                    zmm7 = (zmm0[0].o ^ zmm2[0].o) & zmm1[0].o
                
                zmm4[0].o &= zmm7
                arg5 = __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_1, zmm4[0].o, arg7[0].o)
                _kortest_mask8_u8(arg5, arg5)
                
                if (not(cond:16_1))
                    zmm4 = _mm256_broadcast_ss(arg1[2])
                    int64_t k1_11 = _mm256_cmp_ps_mask(arg5, zmm4, zmm30, 2)
                    zmm0[0].o &= zmm1[0].o
                    zmm0[0].o = _mm_mask_mov_epi16(k1_11, zmm0[0].o)
                
                arg8[0].o = data_142fc92e0
                zmm1[0].o &= zmm0[0].o
        
        arg12 = _mm256_mask_sub_ps(arg5, zmm28, arg15)
        arg9 = __vsubps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm29, var_200_1)
        arg14 = _mm256_mask_sub_ps(arg5, zmm30, zmm16)
        arg11 = _mm256_mask_sub_ps(arg5, zmm17, zmm28)
        arg10 = _mm256_mask_sub_ps(arg5, zmm18, zmm29)
        float zmm31[0x8] = _mm256_mask_sub_ps(arg5, zmm19, zmm30)
        int64_t k0_2 = _mm_mask_test_epi16_mask(arg5, zmm1[0].o, zmm2[0].o)
        _kortest_mask8_u8(k0_2, k0_2)
        
        if (cond:10_1)
        label_14003c29c:
            zmm0[0].o = zmm1[0].o & zmm2[0].o
            arg5 = _mm_cmp_epi16_mask(k0_2, zmm0[0].o, arg8[0].o, 4)
            _kortest_mask8_u8(arg5, arg5)
            
            if (not(cond:3_1))
            label_14003c2b1:
                zmm1[0].o ^= arg8[0].o
                int64_t k0_10 = _mm256_cmp_ps_mask(arg5, arg16, arg12, 1)
                zmm4[0].o = _mm_movm_epi16(k0_10)
                arg7[0].o = zmm4[0].o & zmm1[0].o
                int64_t k1_16 = _mm_mask_test_epi16_mask(k0_10, arg7[0].o, zmm2[0].o)
                _kortest_mask8_u8(k1_16, k1_16)
                
                if (not(cond:7_1))
                    var_360_1 = _mm256_mask_storeu_ps(k1_16, arg12)
                
                zmm4[0].o ^= zmm2[0].o
                zmm4[0].o &= zmm1[0].o
                int64_t k0_11 = _mm_mask_test_epi16_mask(k0_10, zmm4[0].o, zmm2[0].o)
                _kortest_mask8_u8(k0_11, k0_11)
                
                if (not(cond:12_1))
                    k0_11 = _mm256_cmp_ps_mask(k0_11, arg16, arg11, 1)
                    arg7[0].o = _mm_movm_epi16(k0_11)
                    int64_t k1_17 =
                        _mm_mask_test_epi16_mask(k0_11, zmm4[0].o & arg7[0].o, zmm2[0].o)
                    _kortest_mask8_u8(k1_17, k1_17)
                    
                    if (not(cond:18_1))
                        var_360_1 = _mm256_mask_storeu_ps(k1_17, 
                            __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_11, arg11, 0x80000000))
                    
                    arg7[0].o ^= zmm2[0].o
                    zmm4[0].o &= arg7[0].o
                    int64_t k1_18 = _mm_mask_test_epi16_mask(k0_11, zmm4[0].o, zmm2[0].o)
                    _kortest_mask8_u8(k1_18, k1_18)
                    
                    if (not(cond:21_1))
                        var_360_1 = _mm256_mask_storeu_ps(k1_18, arg16)
                
                int64_t k0_12 = _mm256_cmp_ps_mask(k0_11, arg16, arg9, 1)
                zmm4[0].o = _mm_movm_epi16(k0_12)
                arg7[0].o = zmm4[0].o & zmm1[0].o
                int64_t k1_19 = _mm_mask_test_epi16_mask(k0_12, arg7[0].o, zmm2[0].o)
                _kortest_mask8_u8(k1_19, k1_19)
                
                if (not(cond:17_1))
                    var_340_1 = _mm256_mask_storeu_ps(k1_19, arg9)
                
                zmm4[0].o ^= zmm2[0].o
                zmm4[0].o &= zmm1[0].o
                int64_t k0_13 = _mm_mask_test_epi16_mask(k0_12, zmm4[0].o, zmm2[0].o)
                _kortest_mask8_u8(k0_13, k0_13)
                
                if (not(cond:20_1))
                    k0_13 = _mm256_cmp_ps_mask(k0_13, arg16, arg10, 1)
                    arg7[0].o = _mm_movm_epi16(k0_13)
                    int64_t k1_20 =
                        _mm_mask_test_epi16_mask(k0_13, zmm4[0].o & arg7[0].o, zmm2[0].o)
                    _kortest_mask8_u8(k1_20, k1_20)
                    
                    if (not(cond:23_1))
                        var_340_1 = _mm256_mask_storeu_ps(k1_20, 
                            __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_13, arg10, 0x80000000))
                    
                    arg7[0].o ^= zmm2[0].o
                    zmm4[0].o &= arg7[0].o
                    int64_t k1_21 = _mm_mask_test_epi16_mask(k0_13, zmm4[0].o, zmm2[0].o)
                    _kortest_mask8_u8(k1_21, k1_21)
                    
                    if (not(cond:25_1))
                        var_340_1 = _mm256_mask_storeu_ps(k1_21, arg16)
                
                int64_t k0_14 = _mm256_cmp_ps_mask(k0_13, arg16, arg14, 1)
                zmm4[0].o = _mm_movm_epi16(k0_14)
                arg7[0].o = zmm4[0].o & zmm1[0].o
                int64_t k1_22 = _mm_mask_test_epi16_mask(k0_14, arg7[0].o, zmm2[0].o)
                _kortest_mask8_u8(k1_22, k1_22)
                
                if (not(cond:22_1))
                    var_320_1 = _mm256_mask_storeu_ps(k1_22, arg14)
                
                zmm4[0].o ^= zmm2[0].o
                zmm1[0].o &= zmm4[0].o
                arg5 = _mm_mask_test_epi16_mask(k0_14, zmm1[0].o, zmm2[0].o)
                _kortest_mask8_u8(arg5, arg5)
                
                if (not(cond:24_1))
                    arg5 = _mm256_cmp_ps_mask(arg5, arg16, zmm31, 1)
                    zmm4[0].o = _mm_movm_epi16(arg5)
                    arg7[0].o = zmm1[0].o & zmm4[0].o
                    int64_t k1_23 = _mm_mask_test_epi16_mask(arg5, arg7[0].o, zmm2[0].o)
                    _kortest_mask8_u8(k1_23, k1_23)
                    
                    if (not(cond:26_1))
                        var_320_1 = _mm256_mask_storeu_ps(k1_23, 
                            __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm31, 0x80000000))
                    
                    zmm4[0].o ^= zmm2[0].o
                    zmm1[0].o &= zmm4[0].o
                    int64_t k1_24 = _mm_mask_test_epi16_mask(arg5, zmm1[0].o, zmm2[0].o)
                    _kortest_mask8_u8(k1_24, k1_24)
                    
                    if (not(cond:27_1))
                        var_320_1 = _mm256_mask_storeu_ps(k1_24, arg16)
                
                arg7 = var_320_1
                zmm1 = _mm256_fmadd_ps(
                    _mm256_fmadd_ps(_mm256_mask3_fmadd_ps(var_360_1, arg5, var_360_1, arg16), 
                        var_340_1, var_340_1), 
                    arg7, arg7)
                zmm4 = _mm256_mask_rsqrt14_ps(arg5, zmm1)
                zmm1 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                    _mm256_mul_ps(zmm4, 
                        __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                            _mm256_mul_ps(zmm1, zmm4), arg5, zmm4, 0x40400000)), 
                    0x3f000000)
                zmm4 = _mm256_mask_rcp14_ps(arg5, zmm1)
                _mm256_mul_ps(zmm4, 
                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm1, arg5, zmm4, 
                        0x40000000))
                zmm1 = _mm256_mask_mov_ps(
                    __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, zmm0[0].o, zmm2[0].o), 
                    arg17)
                arg17 = _mm256_mask_mov_ps(arg5, zmm1)
        else
            zmm27 = _mm256_mask_max_ps(k0_2, arg11, arg12)
            arg13 = _mm256_max_ps(arg10, arg9)
            zmm0 = _mm256_mask_max_ps(k0_2, zmm31, arg14)
            int64_t k0_3 = _mm256_cmp_ps_mask(k0_2, arg13, zmm27, 1)
            arg7[0].o = _mm_movm_epi16(k0_3)
            zmm4[0].o = zmm1[0].o & arg7[0].o
            int64_t k0_4 = _mm_mask_test_epi16_mask(k0_3, zmm4[0].o, zmm2[0].o)
            _kortest_mask8_u8(k0_4, k0_4)
            
            if (not(cond:4_1))
                arg8 = zmm8
                int64_t k0_5 = _mm256_cmp_ps_mask(k0_4, zmm0, zmm27, 1)
                zmm26[0].o = _mm_movm_epi16(k0_5)
                zmm7 = _mm_mask_and_epi64(k0_5, zmm4[0].o, zmm26[0].o)
                zmm8[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                int64_t k0_6 = _mm_mask_test_epi16_mask(k0_5, zmm7, zmm8[0].o)
                _kortest_mask8_u8(k0_6, k0_6)
                
                if (not(cond:9_1))
                    arg17 = _mm256_mask_mov_ps(k0_6, 
                        _mm256_mask_mov_ps(_mm_mask_testn_epi16_mask(k0_6, zmm7, zmm8[0].o), arg17))
                
                zmm7 = _mm_mask_xor_epi64(k0_6, zmm26[0].o, zmm2[0].o)
                zmm4[0].o &= zmm7
                k0_4 = _mm_mask_test_epi16_mask(k0_6, zmm4[0].o, zmm8[0].o)
                _kortest_mask8_u8(k0_4, k0_4)
                
                if (not(cond:15_1))
                    arg17 = _mm256_mask_blend_ps(
                        _mm_mask_testn_epi16_mask(k0_4, zmm4[0].o, zmm2[0].o), zmm0, arg17)
                
                zmm8 = arg8
            
            zmm4[0].o = arg7[0].o ^ zmm2[0].o
            zmm4[0].o &= zmm1[0].o
            int64_t k0_7 = _mm_mask_test_epi16_mask(k0_4, zmm4[0].o, zmm2[0].o)
            _kortest_mask8_u8(k0_7, k0_7)
            
            if (not(cond:8_1))
                int64_t k0_8 = _mm256_cmp_ps_mask(k0_7, zmm0, arg13, 1)
                arg7[0].o = _mm_movm_epi16(k0_8)
                arg8[0].o = zmm4[0].o & arg7[0].o
                zmm7 = __vpbroadcastw_xmmdq_memw(0xff)
                int64_t k0_9 = _mm_mask_test_epi16_mask(k0_8, arg8[0].o, zmm7)
                _kortest_mask8_u8(k0_9, k0_9)
                
                if (not(cond:14_1))
                    arg13 =
                        _mm256_mask_mov_ps(_mm_mask_testn_epi16_mask(k0_9, arg8[0].o, zmm7), arg17)
                    arg17 = _mm256_mask_mov_ps(k0_9, arg13)
                
                arg8[0].o = data_142fc92e0
                arg7[0].o ^= zmm2[0].o
                zmm4[0].o &= arg7[0].o
                k0_2 = _mm_mask_test_epi16_mask(k0_9, zmm4[0].o, zmm7)
                _kortest_mask8_u8(k0_2, k0_2)
                
                if (not(cond:19_1))
                    zmm0 = _mm256_mask_mov_ps(
                        _mm_mask_testn_epi16_mask(k0_2, zmm4[0].o, zmm2[0].o), arg17)
                    arg17 = _mm256_mask_mov_ps(k0_2, zmm0)
                
                goto label_14003c29c
            
            arg8[0].o = data_142fc92e0
            zmm0[0].o = zmm1[0].o & zmm2[0].o
            arg5 = _mm_cmp_epi16_mask(k0_7, zmm0[0].o, arg8[0].o, 4)
            _kortest_mask8_u8(arg5, arg5)
            
            if (cond:13_1)
                goto label_14003c2b1
        
        zmm0 = _mm256_mask_sub_ps(arg5, arg17, zmm20)
        int64_t k1_26 =
            __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(arg5, zmm0, 0xb8d1b717, 1)
        _kortest_mask8_u8(k1_26, k1_26)
        
        if (not(cond:6_1))
            zmm28 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm28, arg5, zmm0, var_2e0)
            zmm29 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm29, arg5, zmm0, var_2c0)
            zmm30 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm30, arg5, zmm0, var_2a0)
            var_2e0 = _mm256_mask_storeu_ps(k1_26, zmm28)
            var_2c0 = _mm256_mask_storeu_ps(k1_26, zmm29)
            var_2a0 = _mm256_mask_storeu_ps(k1_26, zmm30)
            zmm8 = _mm256_mask_add_ps(k1_26, zmm8, zmm0)
        
        rbx += 8
        result = zx.q(result.d + 0x20)
        cond:1_1 = rbx == rdi_4
        cond:2_1 = rbx == rdi_4
        cond:3_1 = rbx == rdi_4
        cond:4_1 = rbx == rdi_4
        cond:5_1 = rbx == rdi_4
        cond:6_1 = rbx == rdi_4
        cond:7_1 = rbx == rdi_4
        cond:8_1 = rbx == rdi_4
        cond:9_1 = rbx == rdi_4
        cond:10_1 = rbx == rdi_4
        cond:11_1 = rbx u< rdi_4
        cond:12_1 = rbx == rdi_4
        cond:13_1 = rbx != rdi_4
        cond:14_1 = rbx == rdi_4
        cond:15_1 = rbx == rdi_4
        cond:16_1 = rbx u< rdi_4
        cond:17_1 = rbx == rdi_4
        cond:18_1 = rbx == rdi_4
        cond:19_1 = rbx == rdi_4
        cond:20_1 = rbx == rdi_4
        cond:21_1 = rbx == rdi_4
        cond:22_1 = rbx == rdi_4
        cond:23_1 = rbx == rdi_4
        cond:24_1 = rbx == rdi_4
        cond:25_1 = rbx == rdi_4
        cond:26_1 = rbx == rdi_4
        cond:27_1 = rbx == rdi_4
    while (rbx s< rdi_4)
    
    r11 = arg21
    r10 = arg20
    
    if (rbx s< arg22)
        goto label_14003c520
    
    zmm24[0].o = _mm_mask_load_epi64(arg5, var_370)
int64_t k1_29 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, zmm24[0].o, data_142fc92e0)
zmm0 = _mm256_mask_load_ps(k1_29, var_2e0)
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
zmm0[0].o = zmm0[0].o f+ zmm1[0]
zmm1 = _mm256_mask_load_ps(k1_29, var_2c0)
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
arg6 = _mm256_mask_load_ps(k1_29, var_2a0)
arg6 = _mm256_hadd_ps(arg6, arg6)
zmm1[0].o = zmm1[0].o f+ zmm2[0]
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x10)
zmm1 = _mm256_hadd_ps(arg6, arg6)
zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
zmm1[0].o = zmm1[0].o f+ zmm2[0]
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x20)
zmm1[0].o = __vmovsd_xmmdq_memq(*r11)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, r11[1].d, 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
*r11 = zmm0[0]
*(r11 + 4) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
r11[1].d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0 = _mm256_mask_mov_ps(k1_29, zmm8)
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
zmm0[0].o = zmm0[0].o f+ zmm1[0]
zmm0[0].o = zmm0[0].o f+ *r10
*r10 = zmm0[0]
arg8[0].o = var_d8
arg9[0].o = var_a8
arg10[0].o = var_98
arg11[0].o = var_88
arg12[0].o = var_78
arg13[0].o = var_68
arg14[0].o = var_58
arg15[0].o = var_48
_mm256_zeroupper()
return result
