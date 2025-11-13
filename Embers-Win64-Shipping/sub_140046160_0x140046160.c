// 函数: sub_140046160
// 地址: 0x140046160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_48 = arg17[0].o
int128_t var_58 = arg16[0].o
int128_t var_68 = arg15[0].o
int128_t var_78 = arg14[0].o
int128_t var_88 = arg13[0].o
int128_t var_98 = arg12[0].o
int128_t var_a8 = arg11[0].o
int128_t var_b8 = arg10[0].o
uint16_t zmm7[0x8]
uint16_t var_c8[0x8] = zmm7
int128_t var_d8 = arg9[0].o
float zmm4[0x8]
zmm4[0].o = arg21
arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
float var_2a0[0x8] = arg11
int32_t rdi_4 = ((arg24 s>> 0x1f u>> 0x1d) + arg24) & 0xfffffff8
float var_2c0[0x8] = arg11
float var_2e0[0x8] = arg11
int32_t* r10
float* r11
float result[0x8]
float zmm1[0x8]
uint32_t rbx
float zmm16[0x8]
float zmm17[0x8]
float zmm18[0x8]
float zmm19[0x8]
float zmm20[0x8]
float zmm22[0x8]
float zmm23[0x8]
float zmm24[0x8]
float zmm26[0x8]

if (rdi_4 s<= 0)
    rbx = 0
    r11 = arg23
    r10 = arg22
    
    if (0 s< arg24)
    label_1400468f1:
        result = __vpaddd_ymmqq_ymmqq_memqq(_mm256_mask_set1_epi32(arg5, rbx), data_142fc93a0)
        uint64_t k1_27 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, 
            _mm256_mask_set1_epi32(arg5, arg24), result)
        bool c_1 = (rbx & 0x40000000) != 0
        bool z_1 = (rbx & 0x3fffffff) == 0
        result = _mm256_mask_loadu_epi32(k1_27, *(arg20 + sx.q(rbx << 2)))
        zmm1 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, result, 3)
        int64_t k2_1 = __kmovq_maskmskw_masku64_avx512(k1_27)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        int64_t k2_2
        int128_t temp0_142
        temp0_142, k2_2 = _mm256_mmask_i32gather_ps(k2_1, *(arg4 + (zmm1[0].q << 2)))
        arg6 = temp0_142
        result = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, result, 0xc)
        zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, result, 4)
        int64_t k2_3 = __kmovq_maskmskw_masku64_avx512(k1_27)
        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
        int64_t k2_4
        int128_t temp0_146
        temp0_146, k2_4 = _mm256_mmask_i32gather_ps(k2_3, *(arg4 + zmm1[0].q))
        arg7 = temp0_146
        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        result = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, result, 8)
        int64_t k2_5 = __kmovq_maskmskw_masku64_avx512(k1_27)
        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
        int64_t k2_6
        int128_t temp0_150
        temp0_150, k2_6 = _mm256_mmask_i32gather_ps(k2_5, *(arg4 + result[0].q))
        zmm4 = temp0_150
        float var_1e0_1[0x8] = arg6
        float var_1a0_1[0x8] = zmm4
        result = _mm256_broadcast_ss(arg3[3])
        float result_1[0x8] = result
        float result_2[0x8] = result
        float result_3[0x8] = result
        float result_4[0x8] = result
        arg8 = _mm256_broadcast_ss(arg3[1])
        zmm16 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[2])
        zmm17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg3)
        zmm18 = _mm256_mask_mul_ps(arg5, result, zmm1)
        zmm1[0].o = __vpbroadcastw_xmmdq_memw(0xff)
        zmm19 = _mm256_mask_mul_ps(arg5, arg7, zmm16)
        zmm20 = _mm256_mask_mul_ps(arg5, zmm4, zmm17)
        arg18 = _mm256_mask_mul_ps(arg5, arg6, arg8)
        zmm19 = _mm256_mask3_fmsub_ps(zmm19, arg5, arg8, zmm4)
        zmm20 = _mm256_mask3_fmsub_ps(zmm20, arg5, zmm16, arg6)
        arg18 = _mm256_mask3_fmsub_ps(arg18, arg5, zmm17, arg7)
        arg6 = _mm256_mask_sub_ps(arg5, zmm18, zmm18)
        zmm4 = _mm256_mask_add_ps(arg5, zmm19, zmm19)
        arg8 = _mm256_mask_add_ps(arg5, zmm20, zmm20)
        zmm16 = _mm256_mask_add_ps(arg5, arg18, arg18)
        arg6 = _mm256_add_ps(arg6, arg6)
        float var_280_2[0x8] = zmm4
        float var_260_2[0x8] = arg8
        int256_t var_240_2 = _mm256_mask_store_ps(arg5, zmm16)
        float var_220_2[0x8] = arg6
        zmm17 = _mm256_mask_load_ps(arg5, var_1e0_1)
        arg7[0].o = _mm_movm_epi16(k1_27)
        zmm17 = _mm256_mask3_fmadd_ps(zmm17, arg5, result, zmm4)
        zmm18 = _mm256_mask_load_ps(arg5, arg7)
        zmm19 = _mm256_mask_load_ps(arg5, var_1a0_1)
        zmm18 = _mm256_mask3_fmadd_ps(zmm18, arg5, result, arg8)
        zmm19 = _mm256_mask3_fmadd_ps(zmm19, arg5, result, zmm16)
        arg6 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg6, result, zmm1)
        int256_t var_160_1 = _mm256_mask_store_ps(arg5, zmm17)
        int256_t var_140_1 = _mm256_mask_store_ps(arg5, zmm18)
        int256_t var_120_1 = _mm256_mask_store_ps(arg5, zmm19)
        float var_100_1[0x8] = arg6
        result = _mm256_broadcast_ss(arg3[1])
        arg6 = _mm256_broadcast_ss(arg3[2])
        zmm20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg3)
        zmm7 = arg7[0].o & zmm1[0].o
        arg18 = _mm256_mask_mul_ps(arg5, arg8, arg6)
        zmm22 = _mm256_mask_mul_ps(arg5, zmm16, zmm20)
        zmm23 = _mm256_mask_mul_ps(arg5, zmm4, result)
        arg18 = _mm256_mask3_fmsub_ps(arg18, arg5, zmm16, result)
        zmm22 = _mm256_mask3_fmsub_ps(zmm22, arg5, zmm4, arg6)
        zmm23 = _mm256_mask3_fmsub_ps(zmm23, arg5, arg8, zmm20)
        result = _mm256_mask_add_ps(arg5, zmm17, arg18)
        arg6 = _mm256_mask_add_ps(arg5, zmm18, zmm22)
        zmm4 = _mm256_mask_add_ps(arg5, zmm19, zmm23)
        zmm26 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, result, arg3[4])
        zmm16 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg6, arg3[5])
        zmm24 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm4, arg3[6])
        arg8 = _mm256_broadcast_ss(*arg2)
        zmm17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg2[1])
        zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg2[2])
        zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg1)
        zmm23 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[1])
        arg19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[2])
        int64_t k0_14 = _mm256_cmp_ps_mask(arg5, zmm26, arg8, 2)
        zmm4[0].o = _mm_movm_epi16(k0_14)
        result[0].o = zmm4[0].o ^ data_142fc92e0
        arg9[0].o = result[0].o & arg7[0].o
        result[0].o = arg9[0].o & zmm1[0].o
        int64_t k0_15 = __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_14, result[0].o, zmm7)
        _kortest_mask8_u8(k0_15, k0_15)
        
        if (not(c_1))
            k0_15 = _mm256_cmp_ps_mask(_mm256_cmp_ps_mask(k1_27, zmm26, arg8, 2), zmm16, zmm17, 2)
            zmm4[0].o = _mm_movm_epi16(k0_15)
            arg6[0].o = zmm4[0].o ^ data_142fc92e0
            arg9[0].o = arg6[0].o & arg7[0].o
        
        arg6[0].o = arg9[0].o & zmm1[0].o
        int64_t k0_16 = __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_15, arg6[0].o, zmm7)
        _kortest_mask8_u8(k0_16, k0_16)
        
        if (not(c_1))
            int64_t k2_8 = _mm256_cmp_ps_mask(k0_16, zmm24, zmm18, 2)
            arg6[0].o = zmm4[0].o & arg7[0].o
            zmm4[0].o = _mm_mask_mov_epi16(k2_8, arg6[0].o)
            arg9[0].o = zmm4[0].o ^ arg7[0].o
        
        arg6[0].o = arg9[0].o & zmm1[0].o
        int64_t k0_17 = __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_16, arg6[0].o, zmm7)
        _kortest_mask8_u8(k0_17, k0_17)
        
        if (not(c_1))
            zmm4[0].o &= arg7[0].o
            arg9[0].o = zmm4[0].o & zmm1[0].o
            int64_t k0_18 = _mm256_cmp_ps_mask(k0_17, zmm19, zmm26, 2)
            zmm7 = _mm_movm_epi16(k0_18)
            arg6[0].o = zmm7 ^ data_142fc92e0
            arg6[0].o &= zmm4[0].o
            result[0].o = arg6[0].o & zmm1[0].o
            int64_t k0_19 =
                __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_18, result[0].o, arg9[0].o)
            _kortest_mask8_u8(k0_19, k0_19)
            
            if (not(c_1))
                int64_t k2_9 = _mm256_cmp_ps_mask(k0_19, zmm23, zmm16, 2)
                result[0].o = zmm4[0].o & zmm7
                zmm7 = _mm_mask_mov_epi16(k2_9, result[0].o)
                arg6[0].o = zmm7 ^ zmm4[0].o
            
            result[0].o = arg6[0].o & zmm1[0].o
            k0_17 = __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_19, result[0].o, arg9[0].o)
            _kortest_mask8_u8(k0_17, k0_17)
            
            if (not(c_1))
                int64_t k2_10 = _mm256_cmp_ps_mask(k0_17, arg19, zmm24, 2)
                result[0].o = zmm7 & zmm4[0].o
                zmm7 = _mm_mask_mov_epi16(k2_10, result[0].o)
            
            zmm4[0].o &= zmm7
        
        zmm22 = _mm256_mask_sub_ps(k0_17, zmm26, arg8)
        zmm20 = _mm256_mask_sub_ps(k0_17, zmm16, zmm17)
        zmm18 = _mm256_mask_sub_ps(k0_17, zmm24, zmm18)
        arg18 = _mm256_mask_sub_ps(k0_17, zmm19, zmm26)
        zmm19 = _mm256_mask_sub_ps(k0_17, zmm23, zmm16)
        zmm17 = _mm256_mask_sub_ps(k0_17, arg19, zmm24)
        result[0].o = zmm4[0].o & arg7[0].o
        int64_t k0_20 =
            __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_17, result[0].o, data_142fc92e0)
        _kortest_mask8_u8(k0_20, k0_20)
        
        if (not(z_1))
            arg8 = _mm256_mask_max_ps(k0_20, arg18, zmm22)
            arg19 = _mm256_mask_max_ps(k0_20, zmm19, zmm20)
            zmm23 = _mm256_mask_max_ps(k0_20, zmm17, zmm18)
            int64_t k0_21 = _mm256_cmp_ps_mask(k0_20, arg19, arg8, 1)
            uint16_t temp0_216[0x8] = _mm_movm_epi16(k0_21)
            arg6[0].o = zmm4[0].o & temp0_216
            result[0].o = arg6[0].o & arg7[0].o
            int64_t k0_22 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_21, result[0].o, 
                data_142fc92e0)
            _kortest_mask8_u8(k0_22, k0_22)
            
            if (not(z_1))
                arg6[0].o = _mm_mask_mov_epi16(_mm256_cmp_ps_mask(k0_22, zmm23, arg8, 5), arg6[0].o)
                result[0].o = arg6[0].o & arg7[0].o
                k0_22 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_22, result[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_22, k0_22)
                
                if (not(z_1))
                    arg8 = _mm256_mask_blend_ps(
                        __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_22, arg6[0].o, 
                            data_142fc92e0), 
                        zmm23, arg8)
            
            result[0].o = temp0_216 ^ data_142fc92e0
            zmm7 = zmm4[0].o & result[0].o
            result[0].o = zmm7 & arg7[0].o
            k0_20 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_22, result[0].o, 
                data_142fc92e0)
            _kortest_mask8_u8(k0_20, k0_20)
        
        if (z_1)
            arg19[0].o = _mm_mask_load_ss(k0_20, arg21)
        else
            int64_t k0_23 = _mm256_cmp_ps_mask(k0_20, zmm23, arg19, 1)
            arg9[0].o = _mm_movm_epi16(k0_23)
            arg6[0].o = zmm7 & arg9[0].o
            result[0].o = arg6[0].o & arg7[0].o
            int64_t k0_24 = _mm_mask_test_epi16_mask(k0_23, result[0].o, zmm1[0].o)
            _kortest_mask8_u8(k0_24, k0_24)
            
            if (not(z_1))
                arg19 =
                    _mm256_mask_mov_ps(_mm_mask_testn_epi16_mask(k0_24, arg6[0].o, zmm1[0].o), arg8)
                arg8 = _mm256_mask_mov_ps(k0_24, arg19)
            
            arg19[0].o = _mm_mask_load_ss(k0_24, arg21)
            result[0].o = arg9[0].o ^ data_142fc92e0
            arg6[0].o = zmm7 & result[0].o
            result[0].o = arg6[0].o & arg7[0].o
            k0_20 = _mm_mask_test_epi16_mask(k0_24, result[0].o, zmm1[0].o)
            _kortest_mask8_u8(k0_20, k0_20)
            
            if (not(z_1))
                arg8 = _mm256_mask_mov_ps(k0_20, 
                    _mm256_mask_mov_ps(
                        __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_20, arg6[0].o, 
                            data_142fc92e0), 
                        arg8))
        
        zmm1[0].o = zmm4[0].o ^ data_142fc92e0
        result[0].o = zmm1[0].o & arg7[0].o
        int64_t k0_25 =
            __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_20, result[0].o, data_142fc92e0)
        _kortest_mask8_u8(k0_25, k0_25)
        
        if (not(z_1))
            result[0].o = zx.o(0)
            int64_t k0_26 = _mm256_cmp_ps_mask(k0_25, result, zmm22, 1)
            arg6[0].o = _mm_movm_epi16(k0_26)
            zmm7 = arg6[0].o & zmm1[0].o
            result[0].o = zmm7 & arg7[0].o
            int64_t k0_27 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_26, result[0].o, 
                data_142fc92e0)
            _kortest_mask8_u8(k0_27, k0_27)
            
            if (not(z_1))
                result_1 = _mm256_mask_storeu_ps(
                    __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_27, zmm7, data_142fc92e0), 
                    zmm22)
            
            result[0].o = arg6[0].o ^ data_142fc92e0
            zmm7 = result[0].o & zmm1[0].o
            result[0].o = zmm7 & arg7[0].o
            int64_t k0_28 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_27, result[0].o, 
                data_142fc92e0)
            _kortest_mask8_u8(k0_28, k0_28)
            
            if (not(z_1))
                result[0].o = zx.o(0)
                int64_t k0_29 = _mm256_cmp_ps_mask(k0_28, result, arg18, 1)
                arg6[0].o = _mm_movm_epi16(k0_29)
                arg9[0].o = zmm7 & arg6[0].o
                result[0].o = arg9[0].o & arg7[0].o
                int64_t k0_30 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_29, 
                    result[0].o, data_142fc92e0)
                _kortest_mask8_u8(k0_30, k0_30)
                
                if (not(z_1))
                    result = __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_30, arg18, 0x80000000)
                    result_1 = _mm256_mask_storeu_ps(
                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_30, arg9[0].o, 
                            data_142fc92e0), 
                        result)
                
                result[0].o = arg6[0].o ^ data_142fc92e0
                arg6[0].o = zmm7 & result[0].o
                result[0].o = arg6[0].o & arg7[0].o
                k0_28 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_30, result[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_28, k0_28)
                
                if (not(z_1))
                    int64_t k2_17 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_28, 
                        arg6[0].o, data_142fc92e0)
                    result[0].o = zx.o(0)
                    result_1 = _mm256_mask_storeu_ps(k2_17, result)
            
            result[0].o = zx.o(0)
            int64_t k0_31 = _mm256_cmp_ps_mask(k0_28, result, zmm20, 1)
            arg6[0].o = _mm_movm_epi16(k0_31)
            zmm7 = arg6[0].o & zmm1[0].o
            result[0].o = zmm7 & arg7[0].o
            int64_t k0_32 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_31, result[0].o, 
                data_142fc92e0)
            _kortest_mask8_u8(k0_32, k0_32)
            
            if (not(z_1))
                result_2 = _mm256_mask_storeu_ps(
                    __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_32, zmm7, data_142fc92e0), 
                    zmm20)
            
            result[0].o = arg6[0].o ^ data_142fc92e0
            zmm7 = result[0].o & zmm1[0].o
            result[0].o = zmm7 & arg7[0].o
            int64_t k0_33 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_32, result[0].o, 
                data_142fc92e0)
            _kortest_mask8_u8(k0_33, k0_33)
            
            if (not(z_1))
                result[0].o = zx.o(0)
                int64_t k0_34 = _mm256_cmp_ps_mask(k0_33, result, zmm19, 1)
                arg6[0].o = _mm_movm_epi16(k0_34)
                arg9[0].o = zmm7 & arg6[0].o
                result[0].o = arg9[0].o & arg7[0].o
                int64_t k0_35 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_34, 
                    result[0].o, data_142fc92e0)
                _kortest_mask8_u8(k0_35, k0_35)
                
                if (not(z_1))
                    result = __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_35, zmm19, 0x80000000)
                    result_2 = _mm256_mask_storeu_ps(
                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_35, arg9[0].o, 
                            data_142fc92e0), 
                        result)
                
                result[0].o = arg6[0].o ^ data_142fc92e0
                arg6[0].o = zmm7 & result[0].o
                result[0].o = arg6[0].o & arg7[0].o
                k0_33 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_35, result[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_33, k0_33)
                
                if (not(z_1))
                    int64_t k2_20 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_33, 
                        arg6[0].o, data_142fc92e0)
                    result[0].o = zx.o(0)
                    result_2 = _mm256_mask_storeu_ps(k2_20, result)
            
            result[0].o = zx.o(0)
            int64_t k0_36 = _mm256_cmp_ps_mask(k0_33, result, zmm18, 1)
            arg6[0].o = _mm_movm_epi16(k0_36)
            zmm7 = arg6[0].o & zmm1[0].o
            result[0].o = zmm7 & arg7[0].o
            int64_t k0_37 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_36, result[0].o, 
                data_142fc92e0)
            _kortest_mask8_u8(k0_37, k0_37)
            
            if (not(z_1))
                result_3 = _mm256_mask_storeu_ps(
                    __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_37, zmm7, data_142fc92e0), 
                    zmm18)
            
            result[0].o = arg6[0].o ^ data_142fc92e0
            zmm1[0].o &= result[0].o
            result[0].o = zmm1[0].o & arg7[0].o
            k0_25 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_37, result[0].o, 
                data_142fc92e0)
            _kortest_mask8_u8(k0_25, k0_25)
            
            if (not(z_1))
                result[0].o = zx.o(0)
                int64_t k0_38 = _mm256_cmp_ps_mask(k0_25, result, zmm17, 1)
                arg6[0].o = _mm_movm_epi16(k0_38)
                zmm7 = zmm1[0].o & arg6[0].o
                result[0].o = zmm7 & arg7[0].o
                int64_t k0_39 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_38, 
                    result[0].o, data_142fc92e0)
                _kortest_mask8_u8(k0_39, k0_39)
                
                if (not(z_1))
                    result = __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_39, zmm17, 0x80000000)
                    result_3 = _mm256_mask_storeu_ps(
                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_39, zmm7, 
                            data_142fc92e0), 
                        result)
                
                result[0].o = arg6[0].o ^ data_142fc92e0
                zmm1[0].o &= result[0].o
                result[0].o = zmm1[0].o & arg7[0].o
                k0_25 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_39, result[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_25, k0_25)
                
                if (not(z_1))
                    int64_t k2_23 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_25, 
                        zmm1[0].o, data_142fc92e0)
                    result[0].o = zx.o(0)
                    result_3 = _mm256_mask_storeu_ps(k2_23, result)
            
            zmm1[0].o = zx.o(0)
            arg7 = result_3
            result = _mm256_fmadd_ps(
                _mm256_fmadd_ps(_mm256_fmadd_ps(result_1, result_1, zmm1), result_2, result_2), 
                arg7, arg7)
            zmm1 = _mm256_mask_rsqrt14_ps(k0_25, result)
            result = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(k0_25, 
                _mm256_mul_ps(zmm1, 
                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                        _mm256_mul_ps(result, zmm1), k0_25, zmm1, 0x40400000)), 
                0x3f000000)
            zmm1 = _mm256_mask_rcp14_ps(k0_25, result)
            _mm256_mul_ps(zmm1, 
                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(result, k0_25, zmm1, 
                    0x40000000))
            zmm1[0].o = zmm4[0].o & data_142fc92e0
            arg8 = _mm256_mask_mov_ps(
                __vpcmpeqw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_25, zmm1[0].o, 
                    data_142fc92e0), 
                arg8)
        
        zmm1 = _mm256_sub_ps(arg8, _mm256_mask_broadcastss_ps(k0_25, arg19[0].o))
        int64_t k1_28 =
            __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k1_27, zmm1, 0xb8d1b717, 1)
        _kortest_mask8_u8(k1_28, k1_28)
        
        if (not(z_1))
            zmm26 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm26, k0_25, zmm1, var_2e0)
            zmm16 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm16, k0_25, zmm1, var_2c0)
            zmm24 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm24, k0_25, zmm1, var_2a0)
            var_2e0 = _mm256_mask_storeu_ps(k1_28, zmm26)
            var_2c0 = _mm256_mask_storeu_ps(k1_28, zmm16)
            var_2a0 = _mm256_mask_storeu_ps(k1_28, zmm24)
            arg11 = _mm256_mask_add_ps(k1_28, arg11, zmm1)
else
    arg6 = _mm256_broadcast_ss(arg3[3])
    result[0].o = *arg3
    zmm1[0].o = arg3[1]
    arg7[0].o = arg3[2]
    arg16 = _mm256_broadcast_ss(*arg2)
    arg15 = _mm256_broadcast_ss(arg2[1])
    zmm16 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg2[2])
    zmm17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg1)
    zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[1])
    zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[2])
    zmm20 = _mm256_mask_broadcastss_ps(arg5, zmm4[0].o)
    arg18[0].o = _mm_mask_xor_ps(arg5, arg18[0].o, arg18[0].o)
    int32_t rax_1 = 0
    zmm1 = _mm256_broadcastss_ps(zmm1[0].o)
    zmm22 = _mm256_mask_broadcastss_ps(arg5, arg7[0].o)
    zmm23 = _mm256_mask_broadcastss_ps(arg5, result[0].o)
    zmm1[0].o = data_142fc92e0
    arg17[0].o = data_142fc92e0
    rbx = 0
    bool cond:0_1 = true
    bool cond:1_1 = true
    bool cond:2_1 = true
    bool cond:3_1 = true
    bool cond:4_1 = true
    bool cond:5_1 = true
    bool cond:6_1 = true
    bool cond:7_1 = true
    bool cond:8_1 = false
    bool cond:9_1 = true
    bool cond:10_1 = true
    bool cond:11_1 = true
    bool cond:12_1 = false
    bool cond:13_1 = true
    bool cond:14_1 = true
    bool cond:15_1 = true
    bool cond:16_1 = true
    bool cond:17_1 = true
    bool cond:18_1 = true
    bool cond:19_1 = true
    bool cond:20_1 = true
    bool cond:21_1 = true
    bool cond:22_1 = true
    bool cond:23_1 = true
    bool cond:24_1 = true
    bool cond:25_1 = true
    arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
    
    do
        result = *(arg20 + sx.q(rax_1))
        arg7 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, result, 3)
        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
        int64_t k1_2
        int128_t temp0_16
        temp0_16, k1_2 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + (arg7[0].q << 2)))
        zmm4 = temp0_16
        result = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, result, 0xc)
        arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, result, 4)
        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        int64_t k1_4
        int128_t temp0_20
        temp0_20, k1_4 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + arg7[0].q))
        arg8 = temp0_20
        result = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, result, 8)
        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
        int64_t k1_6
        int128_t temp0_23
        temp0_23, k1_6 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + result[0].q))
        arg7 = temp0_23
        float var_280_1[0x8] = zmm4
        float var_260_1[0x8] = arg8
        float var_240_1[0x8] = arg7
        int256_t var_220_1 = _mm256_mask_store_ps(arg5, arg18)
        float var_360_1[0x8] = arg6
        float var_340_1[0x8] = arg6
        float var_320_1[0x8] = arg6
        float var_300_1[0x8] = arg6
        result = _mm256_mask_mul_ps(arg5, arg8, zmm22)
        zmm24 = _mm256_mask_mul_ps(arg5, arg7, zmm23)
        float zmm30[0x8] = _mm256_mask_load_ps(arg5, zmm1)
        zmm26 = _mm256_mask_mul_ps(arg5, zmm4, zmm30)
        arg7 = _mm256_mask3_fmsub_ps(arg7, arg5, zmm30, result)
        zmm4 = _mm256_mask3_fmsub_ps(zmm4, arg5, zmm22, zmm24)
        arg8 = _mm256_mask3_fmsub_ps(arg8, arg5, zmm23, zmm26)
        result = _mm256_add_ps(arg7, arg7)
        arg7 = _mm256_add_ps(zmm4, zmm4)
        zmm4 = _mm256_add_ps(arg8, arg8)
        arg8 = _mm256_fmadd_ps(var_280_1, arg6, result)
        zmm24 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_260_1), arg5, arg6, arg7)
        zmm26 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_240_1), arg5, arg6, zmm4)
        float zmm27[0x8] = _mm256_mask_mul_ps(arg5, arg7, zmm22)
        float zmm28[0x8] = _mm256_mask_mul_ps(arg5, zmm4, zmm23)
        float zmm29[0x8] = _mm256_mask_mul_ps(arg5, result, zmm30)
        zmm4 = _mm256_add_ps(arg8, _mm256_mask3_fmsub_ps(zmm4, arg5, zmm30, zmm27))
        result = _mm256_mask_add_ps(arg5, zmm24, _mm256_mask3_fmsub_ps(result, arg5, zmm22, zmm28))
        arg7 = _mm256_mask_add_ps(arg5, zmm26, _mm256_mask3_fmsub_ps(arg7, arg5, zmm23, zmm29))
        zmm26 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm4, arg3[4])
        zmm27 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, result, arg3[5])
        zmm28 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg7, arg3[6])
        int64_t k1_7 = _mm256_cmp_ps_mask(arg5, zmm26, arg16, 2)
        _kortest_mask8_u8(k1_7, k1_7)
        
        if (not(cond:13_1))
            k1_7 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(
                _mm256_cmp_ps_mask(arg5, zmm26, arg16, 2), zmm27, arg2[1], 2)
            _kortest_mask8_u8(k1_7, k1_7)
        
        if (cond:13_1 || cond:0_1)
            zmm7 = _mm_movm_epi16(k1_7)
        else
            int64_t k1_9 =
                __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k1_7, zmm28, arg2[2], 2)
            zmm7 = _mm_movm_epi16(k1_9)
            _kortest_mask8_u8(k1_9, k1_9)
            
            if (not(cond:3_1))
                zmm29 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg1)
                int64_t k0 = _mm256_cmp_ps_mask(arg5, zmm29, zmm26, 2)
                result[0].o = _mm_movm_epi16(k0)
                zmm4[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                arg7[0].o = result[0].o ^ zmm1[0].o
                arg9[0].o = zmm7 & zmm4[0].o
                arg8[0].o = arg7[0].o & zmm7
                arg7[0].o = arg8[0].o & zmm4[0].o
                int64_t k0_1 =
                    __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0, arg7[0].o, arg9[0].o)
                _kortest_mask8_u8(k0_1, k0_1)
                
                if (not(cond:8_1))
                    result = _mm256_broadcast_ss(arg1[1])
                    k0_1 = _mm256_cmp_ps_mask(_mm256_cmp_ps_mask(k1_9, zmm29, zmm26, 2), result, 
                        zmm27, 2)
                    result[0].o = _mm_movm_epi16(k0_1)
                    arg7[0].o = result[0].o ^ zmm1[0].o
                    arg8[0].o = arg7[0].o & zmm7
                
                arg7[0].o = arg8[0].o & zmm4[0].o
                arg5 = __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_1, arg7[0].o, arg9[0].o)
                _kortest_mask8_u8(arg5, arg5)
                
                if (not(cond:12_1))
                    arg7 = _mm256_broadcast_ss(arg1[2])
                    int64_t k1_11 = _mm256_cmp_ps_mask(arg5, arg7, zmm28, 2)
                    result[0].o &= zmm7
                    result[0].o = _mm_mask_mov_epi16(k1_11, result[0].o)
                
                zmm7 &= result[0].o
        
        arg13 = _mm256_mask_sub_ps(arg5, zmm26, arg16)
        arg10 = _mm256_mask_sub_ps(arg5, zmm27, arg15)
        zmm30 = _mm256_mask_sub_ps(arg5, zmm28, zmm16)
        arg12 = _mm256_mask_sub_ps(arg5, zmm17, zmm26)
        float zmm31[0x8] = _mm256_mask_sub_ps(arg5, zmm18, zmm27)
        zmm29 = _mm256_mask_sub_ps(arg5, zmm19, zmm28)
        int64_t k0_2 = _mm_mask_test_epi16_mask(arg5, zmm7, zmm1[0].o)
        _kortest_mask8_u8(k0_2, k0_2)
        
        if (not(cond:7_1))
            arg7[0].o = arg17[0].o
            arg17 = _mm256_max_ps(arg12, arg13)
            arg14 = _mm256_mask_max_ps(k0_2, zmm31, arg10)
            arg9 = _mm256_mask_max_ps(k0_2, zmm29, zmm30)
            int64_t k0_3 = _mm256_cmp_ps_mask(k0_2, arg14, arg17, 1)
            result[0].o = _mm_movm_epi16(k0_3)
            zmm4[0].o = zmm7 & result[0].o
            int64_t k0_4 = _mm_mask_test_epi16_mask(k0_3, zmm4[0].o, zmm1[0].o)
            _kortest_mask8_u8(k0_4, k0_4)
            
            if (cond:2_1)
                arg17[0].o = arg7[0].o
            else
                arg18 = _mm256_mask_mov_ps(k0_4, zmm20)
                zmm20 = _mm256_mask_mov_ps(k0_4, arg16)
                arg16 = _mm256_mask_mov_ps(k0_4, zmm19)
                zmm19 = _mm256_mask_mov_ps(k0_4, zmm17)
                zmm17 = _mm256_mask_mov_ps(k0_4, zmm16)
                zmm16 = _mm256_mask_mov_ps(k0_4, arg15)
                int64_t k0_5 = _mm256_cmp_ps_mask(k0_4, arg9, arg17, 1)
                zmm24[0].o = _mm_movm_epi16(k0_5)
                arg8[0].o = _mm_mask_and_epi64(k0_5, zmm4[0].o, zmm24[0].o)
                arg11[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                int64_t k0_6 = _mm_mask_test_epi16_mask(k0_5, arg8[0].o, arg11[0].o)
                _kortest_mask8_u8(k0_6, k0_6)
                
                if (not(cond:6_1))
                    arg17 = _mm256_mask_mov_ps(
                        _mm_mask_testn_epi16_mask(k0_6, arg8[0].o, arg11[0].o), arg19)
                    arg19 = _mm256_mask_mov_ps(k0_6, arg17)
                
                arg17[0].o = arg7[0].o
                arg7[0].o = _mm_mask_xor_epi64(k0_6, zmm24[0].o, zmm1[0].o)
                arg7[0].o &= zmm4[0].o
                k0_4 = _mm_mask_test_epi16_mask(k0_6, arg7[0].o, arg11[0].o)
                _kortest_mask8_u8(k0_4, k0_4)
                
                if (not(cond:11_1))
                    arg19 = _mm256_mask_blend_ps(
                        _mm_mask_testn_epi16_mask(k0_4, arg7[0].o, zmm1[0].o), arg9, arg19)
                
                arg15 = _mm256_mask_mov_ps(k0_4, zmm16)
                zmm16 = _mm256_mask_mov_ps(k0_4, zmm17)
                zmm17 = _mm256_mask_mov_ps(k0_4, zmm19)
                zmm19 = _mm256_mask_mov_ps(k0_4, arg16)
                arg16 = _mm256_mask_mov_ps(k0_4, zmm20)
                zmm20 = _mm256_mask_mov_ps(k0_4, arg18)
                arg18[0].o = _mm_mask_xor_ps(k0_4, arg18[0].o, arg18[0].o)
            
            result[0].o ^= zmm1[0].o
            result[0].o &= zmm7
            k0_2 = _mm_mask_test_epi16_mask(k0_4, result[0].o, zmm1[0].o)
            _kortest_mask8_u8(k0_2, k0_2)
            
            if (not(cond:19_1))
                int64_t k0_7 = _mm256_cmp_ps_mask(k0_2, arg9, arg14, 1)
                zmm4[0].o = _mm_movm_epi16(k0_7)
                arg7[0].o = result[0].o & zmm4[0].o
                arg8[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                int64_t k0_8 = _mm_mask_test_epi16_mask(k0_7, arg7[0].o, arg8[0].o)
                _kortest_mask8_u8(k0_8, k0_8)
                
                if (not(cond:10_1))
                    arg14 = _mm256_mask_mov_ps(
                        _mm_mask_testn_epi16_mask(k0_8, arg7[0].o, arg8[0].o), arg19)
                    arg19 = _mm256_mask_mov_ps(k0_8, arg14)
                
                arg7[0].o = zmm4[0].o ^ zmm1[0].o
                result[0].o &= arg7[0].o
                k0_2 = _mm_mask_test_epi16_mask(k0_8, result[0].o, arg8[0].o)
                _kortest_mask8_u8(k0_2, k0_2)
                
                if (not(cond:16_1))
                    arg9 = _mm256_mask_mov_ps(
                        _mm_mask_testn_epi16_mask(k0_2, result[0].o, zmm1[0].o), arg19)
                    arg19 = _mm256_mask_mov_ps(k0_2, arg9)
        
        arg9[0].o = zmm7 & zmm1[0].o
        arg5 = _mm_cmp_epi16_mask(k0_2, arg9[0].o, arg17[0].o, 4)
        _kortest_mask8_u8(arg5, arg5)
        
        if (not(cond:1_1))
            zmm7 ^= arg17[0].o
            int64_t k0_9 = _mm256_cmp_ps_mask(arg5, arg18, arg13, 1)
            result[0].o = _mm_movm_epi16(k0_9)
            arg7[0].o = result[0].o & zmm7
            int64_t k1_16 = _mm_mask_test_epi16_mask(k0_9, arg7[0].o, zmm1[0].o)
            _kortest_mask8_u8(k1_16, k1_16)
            
            if (not(cond:5_1))
                var_360_1 = _mm256_mask_storeu_ps(k1_16, arg13)
            
            result[0].o ^= zmm1[0].o
            result[0].o &= zmm7
            int64_t k0_10 = _mm_mask_test_epi16_mask(k0_9, result[0].o, zmm1[0].o)
            _kortest_mask8_u8(k0_10, k0_10)
            
            if (not(cond:9_1))
                k0_10 = _mm256_cmp_ps_mask(k0_10, arg18, arg12, 1)
                zmm4[0].o = _mm_movm_epi16(k0_10)
                arg7[0].o = result[0].o & zmm4[0].o
                int64_t k1_17 = _mm_mask_test_epi16_mask(k0_10, arg7[0].o, zmm1[0].o)
                _kortest_mask8_u8(k1_17, k1_17)
                
                if (not(cond:15_1))
                    arg7 = __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_10, arg12, 0x80000000)
                    var_360_1 = _mm256_mask_storeu_ps(k1_17, arg7)
                
                arg7[0].o = zmm4[0].o ^ zmm1[0].o
                result[0].o &= arg7[0].o
                int64_t k1_18 = _mm_mask_test_epi16_mask(k0_10, result[0].o, zmm1[0].o)
                _kortest_mask8_u8(k1_18, k1_18)
                
                if (not(cond:18_1))
                    var_360_1 = _mm256_mask_storeu_ps(k1_18, arg18)
            
            int64_t k0_11 = _mm256_cmp_ps_mask(k0_10, arg18, arg10, 1)
            result[0].o = _mm_movm_epi16(k0_11)
            arg7[0].o = result[0].o & zmm7
            int64_t k1_19 = _mm_mask_test_epi16_mask(k0_11, arg7[0].o, zmm1[0].o)
            _kortest_mask8_u8(k1_19, k1_19)
            
            if (not(cond:14_1))
                var_340_1 = _mm256_mask_storeu_ps(k1_19, arg10)
            
            result[0].o ^= zmm1[0].o
            result[0].o &= zmm7
            int64_t k0_12 = _mm_mask_test_epi16_mask(k0_11, result[0].o, zmm1[0].o)
            _kortest_mask8_u8(k0_12, k0_12)
            
            if (not(cond:17_1))
                k0_12 = _mm256_cmp_ps_mask(k0_12, arg18, zmm31, 1)
                zmm4[0].o = _mm_movm_epi16(k0_12)
                arg7[0].o = result[0].o & zmm4[0].o
                int64_t k1_20 = _mm_mask_test_epi16_mask(k0_12, arg7[0].o, zmm1[0].o)
                _kortest_mask8_u8(k1_20, k1_20)
                
                if (not(cond:21_1))
                    arg7 = __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_12, zmm31, 0x80000000)
                    var_340_1 = _mm256_mask_storeu_ps(k1_20, arg7)
                
                arg7[0].o = zmm4[0].o ^ zmm1[0].o
                result[0].o &= arg7[0].o
                int64_t k1_21 = _mm_mask_test_epi16_mask(k0_12, result[0].o, zmm1[0].o)
                _kortest_mask8_u8(k1_21, k1_21)
                
                if (not(cond:23_1))
                    var_340_1 = _mm256_mask_storeu_ps(k1_21, arg18)
            
            int64_t k0_13 = _mm256_cmp_ps_mask(k0_12, arg18, zmm30, 1)
            result[0].o = _mm_movm_epi16(k0_13)
            arg7[0].o = result[0].o & zmm7
            int64_t k1_22 = _mm_mask_test_epi16_mask(k0_13, arg7[0].o, zmm1[0].o)
            _kortest_mask8_u8(k1_22, k1_22)
            
            if (not(cond:20_1))
                var_320_1 = _mm256_mask_storeu_ps(k1_22, zmm30)
            
            result[0].o ^= zmm1[0].o
            result[0].o &= zmm7
            arg5 = _mm_mask_test_epi16_mask(k0_13, result[0].o, zmm1[0].o)
            _kortest_mask8_u8(arg5, arg5)
            
            if (not(cond:22_1))
                arg5 = _mm256_cmp_ps_mask(arg5, arg18, zmm29, 1)
                zmm4[0].o = _mm_movm_epi16(arg5)
                arg7[0].o = result[0].o & zmm4[0].o
                int64_t k1_23 = _mm_mask_test_epi16_mask(arg5, arg7[0].o, zmm1[0].o)
                _kortest_mask8_u8(k1_23, k1_23)
                
                if (not(cond:24_1))
                    arg7 = __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm29, 0x80000000)
                    var_320_1 = _mm256_mask_storeu_ps(k1_23, arg7)
                
                arg7[0].o = zmm4[0].o ^ zmm1[0].o
                result[0].o &= arg7[0].o
                int64_t k1_24 = _mm_mask_test_epi16_mask(arg5, result[0].o, zmm1[0].o)
                _kortest_mask8_u8(k1_24, k1_24)
                
                if (not(cond:25_1))
                    var_320_1 = _mm256_mask_storeu_ps(k1_24, arg18)
            
            zmm4 = var_320_1
            result = _mm256_fmadd_ps(
                _mm256_fmadd_ps(_mm256_mask3_fmadd_ps(var_360_1, arg5, var_360_1, arg18), 
                    var_340_1, var_340_1), 
                zmm4, zmm4)
            arg7 = _mm256_mask_rsqrt14_ps(arg5, result)
            result = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                _mm256_mul_ps(arg7, 
                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                        _mm256_mul_ps(result, arg7), arg5, arg7, 0x40400000)), 
                0x3f000000)
            arg7 = _mm256_mask_rcp14_ps(arg5, result)
            _mm256_mul_ps(arg7, 
                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(result, arg5, arg7, 0x40000000))
            arg19 = _mm256_mask_mov_ps(arg5, 
                _mm256_mask_mov_ps(
                    __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, arg9[0].o, zmm1[0].o), 
                    arg19))
        
        result = _mm256_mask_sub_ps(arg5, arg19, zmm20)
        int64_t k1_26 =
            __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(arg5, result, 0xb8d1b717, 1)
        _kortest_mask8_u8(k1_26, k1_26)
        
        if (not(cond:4_1))
            zmm26 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm26, arg5, result, var_2e0)
            zmm27 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm27, arg5, result, var_2c0)
            zmm28 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm28, arg5, result, var_2a0)
            var_2e0 = _mm256_mask_storeu_ps(k1_26, zmm26)
            var_2c0 = _mm256_mask_storeu_ps(k1_26, zmm27)
            var_2a0 = _mm256_mask_storeu_ps(k1_26, zmm28)
            arg11 = _mm256_mask_add_ps(k1_26, arg11, result)
        
        rbx += 8
        rax_1 += 0x20
        cond:0_1 = rbx == rdi_4
        cond:1_1 = rbx == rdi_4
        cond:2_1 = rbx == rdi_4
        cond:3_1 = rbx == rdi_4
        cond:4_1 = rbx == rdi_4
        cond:5_1 = rbx == rdi_4
        cond:6_1 = rbx == rdi_4
        cond:7_1 = rbx == rdi_4
        cond:8_1 = rbx u< rdi_4
        cond:9_1 = rbx == rdi_4
        cond:10_1 = rbx == rdi_4
        cond:11_1 = rbx == rdi_4
        cond:12_1 = rbx u< rdi_4
        cond:13_1 = rbx == rdi_4
        cond:14_1 = rbx == rdi_4
        cond:15_1 = rbx == rdi_4
        cond:16_1 = rbx == rdi_4
        cond:17_1 = rbx == rdi_4
        cond:18_1 = rbx == rdi_4
        cond:19_1 = rbx == rdi_4
        cond:20_1 = rbx == rdi_4
        cond:21_1 = rbx == rdi_4
        cond:22_1 = rbx == rdi_4
        cond:23_1 = rbx == rdi_4
        cond:24_1 = rbx == rdi_4
        cond:25_1 = rbx == rdi_4
    while (rbx s< rdi_4)
    
    r11 = arg23
    r10 = arg22
    
    if (rbx s< arg24)
        goto label_1400468f1
result = _mm256_hadd_ps(var_2e0, var_2e0)
result = _mm256_hadd_ps(result, result)
zmm1 = _mm256_hadd_ps(var_2c0, var_2c0)
arg7[0].o = _mm256_extractf128_ps(result[0].o, 1)
result[0].o = result[0].o f+ arg7[0]
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
arg7[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
arg6 = _mm256_hadd_ps(var_2a0, var_2a0)
arg6 = _mm256_hadd_ps(arg6, arg6)
zmm1[0].o = zmm1[0].o f+ arg7[0]
result[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(result[0].o, zmm1[0].o, 0x10)
zmm1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
zmm1[0].o = arg6[0].o f+ zmm1[0]
arg6[0].o = __vmovsd_xmmdq_memq(*r11)
result[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(result[0].o, zmm1[0].o, 0x20)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, r11[2], 0x20)
result[0].o = __vaddps_xmmdq_xmmdq_xmmdq(result[0].o, zmm1[0].o)
*r11 = result[0]
r11[1] = __vextractps_memd_xmmdq_immb(result[0].o, 1)
r11[2] = __vextractps_memd_xmmdq_immb(result[0].o, 2)
result = _mm256_hadd_ps(arg11, arg11)
result = _mm256_hadd_ps(result, result)
zmm1[0].o = _mm256_extractf128_ps(result[0].o, 1)
result[0].o = result[0].o f+ zmm1[0]
result[0].o = result[0].o f+ *r10
*r10 = result[0]
arg9[0].o = var_d8
arg10[0].o = var_b8
arg11[0].o = var_a8
arg12[0].o = var_98
arg13[0].o = var_88
arg14[0].o = var_78
arg15[0].o = var_68
arg16[0].o = var_58
arg17[0].o = var_48
_mm256_zeroupper()
return result
