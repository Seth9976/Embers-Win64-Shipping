// 函数: sub_14003ed40
// 地址: 0x14003ed40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15_4 = ((arg12 s>> 0x1f u>> 0x1d) + arg12) & 0xfffffff8
int32_t result
uint32_t r12
uint32_t zmm0[0x8]
float zmm2[0x8]
uint32_t zmm5[0x8]
float zmm16[0x8]
float zmm17[0x8]
float zmm18[0x8]
uint32_t zmm19[0x8]
float zmm20[0x8]
float zmm21[0x8]
float zmm22[0x8]
float zmm23[0x8]
float zmm24[0x8]
float zmm25[0x8]
float zmm26[0x8]
float zmm27[0x8]

if (r15_4 s<= 0)
    r12 = 0
    result = 0
else
    result = 0
    zmm19 = _mm256_mask_load_epi64(arg5, data_142fc93a0)
    arg9[0].o = _mm_mask_xor_ps(arg5, arg9[0].o, arg9[0].o)
    uint64_t zmm29[0x2] = _mm_mask_load_epi64(arg5, data_142fc92e0)
    zmm21[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
    r12 = 0
    
    while (true)
        char rbx_1 = result.b
        result.b = 1
        char temp1_1 = rbx_1 & 1
        
        if (temp1_1 == 0)
            zmm5 = _mm256_mask_add_epi32(arg5, _mm256_mask_set1_epi32(arg5, r12), zmm19)
            zmm0 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm5, 3)
            int64_t k1_1 = _kxnor_mask16(arg5, arg5)
            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            int64_t k1_2
            char temp0_9
            temp0_9, k1_2 = _mm256_mmask_i32gather_ps(k1_1, *(arg4 + (zmm0[0].q << 2)))
            arg6 = temp0_9
            zmm0 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm5, 0xc)
            zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
            int64_t k1_3 = _kxnor_mask16(arg5, arg5)
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            int64_t k1_4
            char temp0_13
            temp0_13, k1_4 = _mm256_mmask_i32gather_ps(k1_3, *(arg4 + zmm2[0].q))
            arg7 = temp0_13
            zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
            int64_t k1_5 = _kxnor_mask16(arg5, arg5)
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            int64_t k1_6
            char temp0_16
            temp0_16, k1_6 = _mm256_mmask_i32gather_ps(k1_5, *(arg4 + zmm0[0].q))
            zmm2 = temp0_16
            float var_240_1[0x8] = arg6
            float var_220_1[0x8] = arg7
            float var_200_1[0x8] = zmm2
            int256_t var_1e0_1 = _mm256_mask_store_ps(arg5, arg9)
            zmm0 = _mm256_broadcast_ss(arg3[3])
            uint32_t var_2c0_1[0x8] = zmm0
            uint32_t var_2a0_1[0x8] = zmm0
            uint32_t var_280_1[0x8] = zmm0
            uint32_t var_260_1[0x8] = zmm0
            zmm16 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[1])
            zmm17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[2])
            zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg3)
            zmm20 = _mm256_mask_mul_ps(arg5, arg7, zmm17)
            zmm22 = _mm256_mask_mul_ps(arg5, zmm2, zmm18)
            zmm23 = _mm256_mask_mul_ps(arg5, arg6, zmm16)
            zmm2 = _mm256_mask3_fmsub_ps(zmm2, arg5, zmm16, zmm20)
            arg6 = _mm256_mask3_fmsub_ps(arg6, arg5, zmm17, zmm22)
            arg7 = _mm256_mask3_fmsub_ps(arg7, arg5, zmm18, zmm23)
            zmm2 = _mm256_add_ps(zmm2, zmm2)
            arg6 = _mm256_add_ps(arg6, arg6)
            arg7 = _mm256_add_ps(arg7, arg7)
            zmm20 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_240_1), arg5, zmm0, zmm2)
            zmm22 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_220_1), arg5, zmm0, arg6)
            zmm0 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm0, arg7, var_200_1)
            zmm23 = _mm256_mask_mul_ps(arg5, arg6, zmm17)
            zmm24 = _mm256_mask_mul_ps(arg5, arg7, zmm18)
            zmm25 = _mm256_mask_mul_ps(arg5, zmm2, zmm16)
            zmm23 = _mm256_mask3_fmsub_ps(zmm23, arg5, arg7, zmm16)
            arg7 = _mm256_mask_add_ps(arg5, zmm20, zmm23)
            zmm2 = _mm256_mask_add_ps(arg5, zmm22, _mm256_mask3_fmsub_ps(zmm24, arg5, zmm2, zmm17))
            zmm0 = _mm256_mask_add_ps(arg5, zmm0, _mm256_mask3_fmsub_ps(zmm25, arg5, arg6, zmm18))
            arg7 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg7, arg3[4])
            zmm16 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm2, arg3[5])
            zmm24 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm0, arg3[6])
            zmm17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg2)
            zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg2[1])
            zmm22 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg2[2])
            zmm25 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg1)
            zmm26 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[1])
            zmm27 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[2])
            int64_t k1_7 = _mm256_cmp_ps_mask(arg5, arg7, zmm17, 2)
            _kortest_mask8_u8(k1_7, k1_7)
            
            if (temp1_1 != 0)
                k1_7 = _mm256_cmp_ps_mask(_mm256_cmp_ps_mask(arg5, zmm16, zmm18, 2), arg7, zmm17, 2)
                _kortest_mask8_u8(k1_7, k1_7)
            
            uint64_t zmm30[0x2]
            
            if (temp1_1 == 0 || temp1_1 == 0)
                zmm0[0].o = _mm_movm_epi16(k1_7)
            else
                int64_t k1_9 = _mm256_cmp_ps_mask(k1_7, zmm24, zmm22, 2)
                zmm0[0].o = _mm_movm_epi16(k1_9)
                _kortest_mask8_u8(k1_9, k1_9)
                
                if (temp1_1 != 0)
                    int64_t k0 = _mm256_cmp_ps_mask(arg5, zmm25, arg7, 2)
                    arg6[0].o = _mm_movm_epi16(k0)
                    zmm23[0].o = __vpbroadcastw_xmmu16_maskmskw_memu16_avx512(k0, 0xff)
                    zmm2[0].o = _mm_mask_xor_epi64(k0, arg6[0].o, zmm29)
                    zmm20[0].o = _mm_mask_and_epi64(k0, zmm0[0].o, zmm23[0].o)
                    zmm30 = _mm_mask_and_epi64(k0, zmm2[0].o, zmm0[0].o)
                    zmm2[0].o = _mm_mask_and_epi64(k0, zmm30, zmm23[0].o)
                    int64_t k0_1 =
                        __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0, zmm2[0].o, zmm20[0].o)
                    _kortest_mask8_u8(k0_1, k0_1)
                    
                    if (temp1_1 u>= 0)
                        k0_1 = _mm256_cmp_ps_mask(_mm256_cmp_ps_mask(k1_9, zmm25, arg7, 2), zmm26, 
                            zmm16, 2)
                        arg6[0].o = _mm_movm_epi16(k0_1)
                        zmm2[0].o = _mm_mask_xor_epi64(k0_1, arg6[0].o, zmm29)
                        zmm30 = _mm_mask_and_epi64(k0_1, zmm2[0].o, zmm0[0].o)
                    
                    zmm2[0].o = _mm_mask_and_epi64(k0_1, zmm30, zmm23[0].o)
                    arg5 = __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_1, zmm2[0].o, 
                        zmm20[0].o)
                    _kortest_mask8_u8(arg5, arg5)
                    
                    if (temp1_1 u>= 0)
                        int64_t k1_11 = _mm256_cmp_ps_mask(arg5, zmm27, zmm24, 2)
                        arg6[0].o &= zmm0[0].o
                        arg6[0].o = _mm_mask_mov_epi16(k1_11, arg6[0].o)
                    
                    zmm0[0].o &= arg6[0].o
            
            zmm23 = _mm256_mask_sub_ps(arg5, arg7, zmm17)
            zmm20 = _mm256_mask_sub_ps(arg5, zmm16, zmm18)
            zmm17 = _mm256_mask_sub_ps(arg5, zmm24, zmm22)
            zmm22 = _mm256_mask_sub_ps(arg5, zmm25, arg7)
            zmm18 = _mm256_mask_sub_ps(arg5, zmm26, zmm16)
            zmm16 = _mm256_mask_sub_ps(arg5, zmm27, zmm24)
            int64_t k0_2 = _mm_mask_test_epi16_mask(arg5, zmm0[0].o, zmm29)
            _kortest_mask8_u8(k0_2, k0_2)
            
            if (temp1_1 != 0)
                zmm25 = _mm256_mask_max_ps(k0_2, zmm22, zmm23)
                zmm24 = _mm256_mask_max_ps(k0_2, zmm18, zmm20)
                zmm26 = _mm256_mask_max_ps(k0_2, zmm16, zmm17)
                int64_t k0_3 = _mm256_cmp_ps_mask(k0_2, zmm24, zmm25, 1)
                zmm30 = _mm_movm_epi16(k0_3)
                zmm2[0].o = _mm_mask_and_epi64(k0_3, zmm0[0].o, zmm30)
                int64_t k0_4 = _mm_mask_test_epi16_mask(k0_3, zmm2[0].o, zmm29)
                _kortest_mask8_u8(k0_4, k0_4)
                
                if (temp1_1 != 0)
                    int64_t k0_5 = _mm256_cmp_ps_mask(k0_4, zmm26, zmm25, 1)
                    zmm27[0].o = _mm_movm_epi16(k0_5)
                    arg6[0].o = _mm_mask_and_epi64(k0_5, zmm2[0].o, zmm27[0].o)
                    arg7[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                    int64_t k0_6 = _mm_mask_test_epi16_mask(k0_5, arg6[0].o, arg7[0].o)
                    _kortest_mask8_u8(k0_6, k0_6)
                    
                    if (temp1_1 != 0)
                        zmm25 = _mm256_mask_mov_ps(
                            _mm_mask_testn_epi16_mask(k0_6, arg6[0].o, arg7[0].o), arg8)
                        arg8 = _mm256_mask_mov_ps(k0_6, zmm25)
                    
                    arg6[0].o = _mm_mask_xor_epi64(k0_6, zmm27[0].o, zmm29)
                    arg6[0].o &= zmm2[0].o
                    k0_4 = _mm_mask_test_epi16_mask(k0_6, arg6[0].o, arg7[0].o)
                    _kortest_mask8_u8(k0_4, k0_4)
                    
                    if (temp1_1 != 0)
                        arg8 = _mm256_mask_blend_ps(
                            _mm_mask_testn_epi16_mask(k0_4, arg6[0].o, zmm29), zmm26, arg8)
                
                arg6[0].o = _mm_mask_xor_epi64(k0_4, zmm30, zmm29)
                arg6[0].o &= zmm0[0].o
                k0_2 = _mm_mask_test_epi16_mask(k0_4, arg6[0].o, zmm29)
                _kortest_mask8_u8(k0_2, k0_2)
                
                if (temp1_1 != 0)
                    int64_t k0_7 = _mm256_cmp_ps_mask(k0_2, zmm26, zmm24, 1)
                    zmm25[0].o = _mm_movm_epi16(k0_7)
                    zmm2[0].o = _mm_mask_and_epi64(k0_7, arg6[0].o, zmm25[0].o)
                    arg7[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                    int64_t k0_8 = _mm_mask_test_epi16_mask(k0_7, zmm2[0].o, arg7[0].o)
                    _kortest_mask8_u8(k0_8, k0_8)
                    
                    if (temp1_1 != 0)
                        zmm24 = _mm256_mask_mov_ps(
                            _mm_mask_testn_epi16_mask(k0_8, zmm2[0].o, arg7[0].o), arg8)
                        arg8 = _mm256_mask_mov_ps(k0_8, zmm24)
                    
                    zmm2[0].o = _mm_mask_xor_epi64(k0_8, zmm25[0].o, zmm29)
                    arg6[0].o &= zmm2[0].o
                    k0_2 = _mm_mask_test_epi16_mask(k0_8, arg6[0].o, arg7[0].o)
                    _kortest_mask8_u8(k0_2, k0_2)
                    
                    if (temp1_1 != 0)
                        zmm26 = _mm256_mask_mov_ps(
                            _mm_mask_testn_epi16_mask(k0_2, arg6[0].o, zmm29), arg8)
                        arg8 = _mm256_mask_mov_ps(k0_2, zmm26)
            
            zmm24[0].o = _mm_mask_and_epi64(k0_2, zmm0[0].o, zmm29)
            int64_t k0_9 = _mm_cmp_epi16_mask(k0_2, zmm24[0].o, zmm21[0].o, 4)
            _kortest_mask8_u8(k0_9, k0_9)
            
            if (temp1_1 != 0)
                zmm0[0].o = _mm_mask_xor_epi64(k0_9, zmm0[0].o, zmm21[0].o)
                int64_t k0_10 = _mm256_cmp_ps_mask(k0_9, arg9, zmm23, 1)
                arg6[0].o = _mm_movm_epi16(k0_10)
                zmm2[0].o = arg6[0].o & zmm0[0].o
                int64_t k1_16 = _mm_mask_test_epi16_mask(k0_10, zmm2[0].o, zmm29)
                _kortest_mask8_u8(k1_16, k1_16)
                
                if (temp1_1 != 0)
                    var_2c0_1 = _mm256_mask_storeu_ps(k1_16, zmm23)
                
                arg6[0].o = _mm_mask_xor_epi64(k0_10, arg6[0].o, zmm29)
                arg6[0].o &= zmm0[0].o
                int64_t k0_11 = _mm_mask_test_epi16_mask(k0_10, arg6[0].o, zmm29)
                _kortest_mask8_u8(k0_11, k0_11)
                
                if (temp1_1 != 0)
                    k0_11 = _mm256_cmp_ps_mask(k0_11, arg9, zmm22, 1)
                    zmm2[0].o = _mm_movm_epi16(k0_11)
                    arg7[0].o = arg6[0].o & zmm2[0].o
                    int64_t k1_17 = _mm_mask_test_epi16_mask(k0_11, arg7[0].o, zmm29)
                    _kortest_mask8_u8(k1_17, k1_17)
                    
                    if (temp1_1 != 0)
                        arg7 =
                            __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_11, zmm22, 0x80000000)
                        var_2c0_1 = _mm256_mask_storeu_ps(k1_17, arg7)
                    
                    zmm2[0].o = _mm_mask_xor_epi64(k0_11, zmm2[0].o, zmm29)
                    arg6[0].o &= zmm2[0].o
                    int64_t k1_18 = _mm_mask_test_epi16_mask(k0_11, arg6[0].o, zmm29)
                    _kortest_mask8_u8(k1_18, k1_18)
                    
                    if (temp1_1 != 0)
                        var_2c0_1 = _mm256_mask_storeu_ps(k1_18, arg9)
                
                int64_t k0_12 = _mm256_cmp_ps_mask(k0_11, arg9, zmm20, 1)
                arg6[0].o = _mm_movm_epi16(k0_12)
                zmm2[0].o = arg6[0].o & zmm0[0].o
                int64_t k1_19 = _mm_mask_test_epi16_mask(k0_12, zmm2[0].o, zmm29)
                _kortest_mask8_u8(k1_19, k1_19)
                
                if (temp1_1 != 0)
                    var_2a0_1 = _mm256_mask_storeu_ps(k1_19, zmm20)
                
                arg6[0].o = _mm_mask_xor_epi64(k0_12, arg6[0].o, zmm29)
                arg6[0].o &= zmm0[0].o
                int64_t k0_13 = _mm_mask_test_epi16_mask(k0_12, arg6[0].o, zmm29)
                _kortest_mask8_u8(k0_13, k0_13)
                
                if (temp1_1 != 0)
                    k0_13 = _mm256_cmp_ps_mask(k0_13, arg9, zmm18, 1)
                    zmm2[0].o = _mm_movm_epi16(k0_13)
                    arg7[0].o = arg6[0].o & zmm2[0].o
                    int64_t k1_20 = _mm_mask_test_epi16_mask(k0_13, arg7[0].o, zmm29)
                    _kortest_mask8_u8(k1_20, k1_20)
                    
                    if (temp1_1 != 0)
                        arg7 =
                            __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_13, zmm18, 0x80000000)
                        var_2a0_1 = _mm256_mask_storeu_ps(k1_20, arg7)
                    
                    zmm2[0].o = _mm_mask_xor_epi64(k0_13, zmm2[0].o, zmm29)
                    arg6[0].o &= zmm2[0].o
                    int64_t k1_21 = _mm_mask_test_epi16_mask(k0_13, arg6[0].o, zmm29)
                    _kortest_mask8_u8(k1_21, k1_21)
                    
                    if (temp1_1 != 0)
                        var_2a0_1 = _mm256_mask_storeu_ps(k1_21, arg9)
                
                int64_t k0_14 = _mm256_cmp_ps_mask(k0_13, arg9, zmm17, 1)
                arg6[0].o = _mm_movm_epi16(k0_14)
                zmm2[0].o = arg6[0].o & zmm0[0].o
                int64_t k1_22 = _mm_mask_test_epi16_mask(k0_14, zmm2[0].o, zmm29)
                _kortest_mask8_u8(k1_22, k1_22)
                
                if (temp1_1 != 0)
                    var_280_1 = _mm256_mask_storeu_ps(k1_22, zmm17)
                
                arg6[0].o = _mm_mask_xor_epi64(k0_14, arg6[0].o, zmm29)
                zmm0[0].o &= arg6[0].o
                k0_9 = _mm_mask_test_epi16_mask(k0_14, zmm0[0].o, zmm29)
                _kortest_mask8_u8(k0_9, k0_9)
                
                if (temp1_1 != 0)
                    k0_9 = _mm256_cmp_ps_mask(k0_9, arg9, zmm16, 1)
                    arg6[0].o = _mm_movm_epi16(k0_9)
                    zmm2[0].o = zmm0[0].o & arg6[0].o
                    int64_t k1_23 = _mm_mask_test_epi16_mask(k0_9, zmm2[0].o, zmm29)
                    _kortest_mask8_u8(k1_23, k1_23)
                    
                    if (temp1_1 != 0)
                        var_280_1 = _mm256_mask_storeu_ps(k1_23, 
                            __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_9, zmm16, 0x80000000))
                    
                    arg6[0].o = _mm_mask_xor_epi64(k0_9, arg6[0].o, zmm29)
                    zmm0[0].o &= arg6[0].o
                    int64_t k1_24 = _mm_mask_test_epi16_mask(k0_9, zmm0[0].o, zmm29)
                    _kortest_mask8_u8(k1_24, k1_24)
                    
                    if (temp1_1 != 0)
                        var_280_1 = _mm256_mask_storeu_ps(k1_24, arg9)
                
                arg6 = var_2a0_1
                zmm2 = var_280_1
                zmm0 = _mm256_fmadd_ps(
                    _mm256_fmadd_ps(_mm256_mask3_fmadd_ps(var_2c0_1, k0_9, var_2c0_1, arg9), arg6, 
                        arg6), 
                    zmm2, zmm2)
                arg6 = _mm256_mask_rsqrt14_ps(k0_9, zmm0)
                zmm0 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(k0_9, 
                    _mm256_mul_ps(arg6, 
                        __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                            _mm256_mul_ps(zmm0, arg6), k0_9, arg6, 0x40400000)), 
                    0x3f000000)
                arg6 = _mm256_mask_rcp14_ps(k0_9, zmm0)
                _mm256_mul_ps(arg6, 
                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm0, k0_9, arg6, 
                        0x40000000))
                zmm0 = _mm256_mask_mov_ps(
                    __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_9, zmm24[0].o, zmm29), 
                    arg8)
                arg8 = zmm0
            
            arg5 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k0_9, arg8, *arg11, 1)
            _kortest_mask8_u8(arg5, arg5)
            
            if (temp1_1 == 0)
                result = 0
                r12 += 8
                
                if (r12 s>= r15_4)
                    break
                
                continue
            else
                uint64_t i = zx.q(_cvtmask32_u32(arg5))
                result = 0
                
                do
                    uint64_t rdi_1 = _tzcnt_u64(i)
                    i &= not.q(1 << (rdi_1 u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        float var_180[0x8] = arg8
                        uint64_t rdi_2 = zx.q(rdi_1.d) & 7
                        zmm0[0].o = var_180[rdi_2]
                        *arg11 = zmm0[0]
                        uint32_t var_160[0x8] = zmm5
                        *arg10 = var_160[rdi_2]
                    
                    result.b = 1
                while (i != 0)
        
        r12 += 8
        
        if (r12 s>= r15_4)
            break

if (r12 s< arg12)
    char temp2_1 = result.b
    result.b = 1
    
    if (temp2_1 == 0)
        zmm24 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
            _mm256_mask_set1_epi32(arg5, r12), data_142fc93a0)
        uint64_t k1_26 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, 
            _mm256_mask_set1_epi32(arg5, arg12), zmm24)
        zmm0 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm24, 3)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        int64_t k2_2
        char temp0_138
        temp0_138, k2_2 = _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_26), 
            *(arg4 + (zmm0[0].q << 2)))
        arg6 = temp0_138
        zmm0 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm24, 0xc)
        zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
        int64_t k2_4
        char temp0_141
        temp0_141, k2_4 =
            _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_26), *(arg4 + zmm2[0].q))
        arg7 = temp0_141
        zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        int64_t k2_6
        char temp0_144
        temp0_144, k2_6 =
            _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_26), *(arg4 + zmm0[0].q))
        zmm2 = temp0_144
        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        float var_140_1[0x8] = arg6
        float var_120_1[0x8] = arg7
        float var_100_1[0x8] = zmm2
        float var_e0_1[0x8] = zmm0
        arg8 = _mm256_broadcast_ss(arg3[3])
        float var_2c0_2[0x8] = arg8
        float var_2a0_2[0x8] = arg8
        float var_280_2[0x8] = arg8
        float var_260_2[0x8] = arg8
        zmm5 = _mm256_broadcast_ss(arg3[1])
        zmm16 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[2])
        zmm17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg3)
        zmm0 = _mm256_mul_ps(arg8, zmm0)
        zmm18 = _mm256_mask_mul_ps(arg5, arg7, zmm16)
        zmm19 = _mm256_mask_mul_ps(arg5, zmm2, zmm17)
        zmm20 = _mm256_mask_mul_ps(arg5, arg6, zmm5)
        zmm18 = _mm256_mask3_fmsub_ps(zmm18, arg5, zmm5, zmm2)
        zmm19 = _mm256_mask3_fmsub_ps(zmm19, arg5, zmm16, arg6)
        zmm20 = _mm256_mask3_fmsub_ps(zmm20, arg5, zmm17, arg7)
        zmm0 = _mm256_sub_ps(zmm0, zmm0)
        arg6 = _mm256_mask_add_ps(arg5, zmm18, zmm18)
        zmm2 = _mm256_mask_add_ps(arg5, zmm19, zmm19)
        arg7 = _mm256_mask_add_ps(arg5, zmm20, zmm20)
        zmm0 = _mm256_add_ps(zmm0, zmm0)
        float var_240_2[0x8] = arg6
        float var_220_2[0x8] = zmm2
        float var_200_2[0x8] = arg7
        uint32_t var_1e0_2[0x8] = zmm0
        zmm5 = _mm256_fmadd_ps(var_140_1, arg8, arg6)
        zmm16 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_120_1), arg5, arg8, zmm2)
        zmm17 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_100_1), arg5, arg8, arg7)
        zmm0 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm0, arg8, var_e0_1)
        uint32_t var_c0_1[0x8] = zmm5
        int256_t var_a0_1 = _mm256_mask_store_ps(arg5, zmm16)
        int256_t var_80_1 = _mm256_mask_store_ps(arg5, zmm17)
        uint32_t var_60_1[0x8] = zmm0
        zmm0 = _mm256_broadcast_ss(arg3[1])
        arg8 = _mm256_broadcast_ss(arg3[2])
        zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg3)
        zmm19 = _mm256_mask_mul_ps(arg5, zmm2, arg8)
        zmm20 = _mm256_mask_mul_ps(arg5, arg7, zmm18)
        zmm21 = _mm256_mask_mul_ps(arg5, arg6, zmm0)
        zmm19 = _mm256_mask3_fmsub_ps(zmm19, arg5, arg7, zmm0)
        zmm20 = _mm256_mask3_fmsub_ps(zmm20, arg5, arg6, arg8)
        zmm21 = _mm256_mask3_fmsub_ps(zmm21, arg5, zmm2, zmm18)
        zmm0 = _mm256_mask_add_ps(arg5, zmm5, zmm19)
        arg6 = _mm256_mask_add_ps(arg5, zmm16, zmm20)
        zmm2 = _mm256_mask_add_ps(arg5, zmm17, zmm21)
        zmm27 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm0, arg3[4])
        zmm16 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg6, arg3[5])
        zmm17 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm2, arg3[6])
        zmm20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg2)
        zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg2[1])
        zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg2[2])
        zmm21 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg1)
        zmm22 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[1])
        zmm23 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[2])
        arg6[0].o = _mm_movm_epi16(k1_26)
        int64_t k0_15 = _mm256_cmp_ps_mask(arg5, zmm27, zmm20, 2)
        zmm26[0].o = _mm_movm_epi16(k0_15)
        zmm0[0].o = __vpxorq_xmmu64_maskmskw_xmmu64_memu64_avx512(k0_15, zmm26[0].o, data_142fc92e0)
        zmm5[0].o = zmm0[0].o & arg6[0].o
        arg8[0].o = __vpbroadcastw_xmmdq_memw(0xff)
        zmm2[0].o = zmm5[0].o & arg8[0].o
        zmm0[0].o = arg6[0].o & arg8[0].o
        int64_t k0_16 =
            __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_15, zmm2[0].o, zmm0[0].o)
        _kortest_mask8_u8(k0_16, k0_16)
        
        if (temp2_1 u>= 0)
            k0_16 = _mm256_cmp_ps_mask(_mm256_cmp_ps_mask(k1_26, zmm27, zmm20, 2), zmm16, zmm18, 2)
            zmm26[0].o = _mm_movm_epi16(k0_16)
            zmm2[0].o =
                __vpxorq_xmmu64_maskmskw_xmmu64_memu64_avx512(k0_16, zmm26[0].o, data_142fc92e0)
            zmm5[0].o = zmm2[0].o & arg6[0].o
        
        zmm2[0].o = zmm5[0].o & arg8[0].o
        int64_t k0_17 =
            __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_16, zmm2[0].o, zmm0[0].o)
        _kortest_mask8_u8(k0_17, k0_17)
        
        if (temp2_1 u>= 0)
            int64_t k2_8 = _mm256_cmp_ps_mask(k0_17, zmm17, zmm19, 2)
            zmm2[0].o = _mm_mask_and_epi64(k0_17, zmm26[0].o, arg6[0].o)
            zmm26[0].o = _mm_mask_mov_epi16(k2_8, zmm2[0].o)
            zmm5[0].o = _mm_mask_xor_epi64(k0_17, zmm26[0].o, arg6[0].o)
        
        zmm2[0].o = zmm5[0].o & arg8[0].o
        int64_t k0_18 =
            __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_17, zmm2[0].o, zmm0[0].o)
        _kortest_mask8_u8(k0_18, k0_18)
        
        if (temp2_1 u>= 0)
            zmm2[0].o = _mm_mask_and_epi64(k0_18, zmm26[0].o, arg6[0].o)
            zmm25[0].o = _mm_mask_and_epi64(k0_18, zmm2[0].o, arg8[0].o)
            int64_t k0_19 = _mm256_cmp_ps_mask(k0_18, zmm21, zmm27, 2)
            zmm0[0].o = _mm_movm_epi16(k0_19)
            zmm5[0].o = zmm0[0].o ^ data_142fc92e0
            zmm5[0].o &= zmm2[0].o
            arg7[0].o = zmm5[0].o & arg8[0].o
            int64_t k0_20 =
                __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_19, arg7[0].o, zmm25[0].o)
            _kortest_mask8_u8(k0_20, k0_20)
            
            if (temp2_1 u>= 0)
                int64_t k2_9 = _mm256_cmp_ps_mask(k0_20, zmm22, zmm16, 2)
                zmm0[0].o &= zmm2[0].o
                zmm0[0].o = _mm_mask_mov_epi16(k2_9, zmm0[0].o)
                zmm5[0].o = zmm0[0].o ^ zmm2[0].o
            
            arg7[0].o = zmm5[0].o & arg8[0].o
            k0_18 = __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_20, arg7[0].o, zmm25[0].o)
            _kortest_mask8_u8(k0_18, k0_18)
            
            if (temp2_1 u>= 0)
                int64_t k2_10 = _mm256_cmp_ps_mask(k0_18, zmm23, zmm17, 2)
                zmm0[0].o &= zmm2[0].o
                zmm0[0].o = _mm_mask_mov_epi16(k2_10, zmm0[0].o)
            
            zmm26[0].o = _mm_mask_and_epi64(k0_18, zmm0[0].o, zmm2[0].o)
        
        zmm20 = _mm256_mask_sub_ps(k0_18, zmm27, zmm20)
        zmm18 = _mm256_mask_sub_ps(k0_18, zmm16, zmm18)
        zmm25 = _mm256_mask_sub_ps(k0_18, zmm17, zmm19)
        zmm19 = _mm256_mask_sub_ps(k0_18, zmm21, zmm27)
        zmm16 = _mm256_mask_sub_ps(k0_18, zmm22, zmm16)
        zmm17 = _mm256_mask_sub_ps(k0_18, zmm23, zmm17)
        zmm0[0].o = _mm_mask_and_epi64(k0_18, zmm26[0].o, arg6[0].o)
        int64_t k0_21 =
            __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_18, zmm0[0].o, data_142fc92e0)
        _kortest_mask8_u8(k0_21, k0_21)
        
        if (temp2_1 != 0)
            arg7 = _mm256_mask_max_ps(k0_21, zmm19, zmm20)
            zmm22 = _mm256_mask_max_ps(k0_21, zmm16, zmm18)
            zmm21 = _mm256_mask_max_ps(k0_21, zmm17, zmm25)
            int64_t k0_22 = _mm256_cmp_ps_mask(k0_21, zmm22, arg7, 1)
            zmm0[0].o = _mm_movm_epi16(k0_22)
            zmm5[0].o = _mm_mask_and_epi64(k0_22, zmm26[0].o, zmm0[0].o)
            zmm2[0].o = zmm5[0].o & arg6[0].o
            int64_t k0_23 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_22, zmm2[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_23, k0_23)
            
            if (temp2_1 != 0)
                zmm5[0].o = _mm_mask_mov_epi16(_mm256_cmp_ps_mask(k0_23, zmm21, arg7, 5), zmm5[0].o)
                zmm2[0].o = zmm5[0].o & arg6[0].o
                k0_23 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_23, zmm2[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_23, k0_23)
                
                if (temp2_1 != 0)
                    arg7 = _mm256_mask_blend_ps(
                        __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_23, zmm5[0].o, 
                            data_142fc92e0), 
                        zmm21, arg7)
            
            zmm0[0].o ^= data_142fc92e0
            zmm0[0].o = _mm_mask_and_epi64(k0_23, zmm26[0].o, zmm0[0].o)
            zmm2[0].o = zmm0[0].o & arg6[0].o
            k0_21 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_23, zmm2[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_21, k0_21)
            
            if (temp2_1 != 0)
                int64_t k0_24 = _mm256_cmp_ps_mask(k0_21, zmm21, zmm22, 1)
                zmm23[0].o = _mm_movm_epi16(k0_24)
                zmm5[0].o = _mm_mask_and_epi64(k0_24, zmm0[0].o, zmm23[0].o)
                zmm2[0].o = zmm5[0].o & arg6[0].o
                int64_t k0_25 = _mm_mask_test_epi16_mask(k0_24, zmm2[0].o, arg8[0].o)
                _kortest_mask8_u8(k0_25, k0_25)
                
                if (temp2_1 != 0)
                    arg7 = _mm256_mask_mov_ps(k0_25, 
                        _mm256_mask_mov_ps(_mm_mask_testn_epi16_mask(k0_25, zmm5[0].o, arg8[0].o), 
                            arg7))
                
                zmm2[0].o =
                    __vpxorq_xmmu64_maskmskw_xmmu64_memu64_avx512(k0_25, zmm23[0].o, data_142fc92e0)
                zmm0[0].o &= zmm2[0].o
                zmm2[0].o = zmm0[0].o & arg6[0].o
                k0_21 = _mm_mask_test_epi16_mask(k0_25, zmm2[0].o, arg8[0].o)
                _kortest_mask8_u8(k0_21, k0_21)
                
                if (temp2_1 != 0)
                    arg7 = _mm256_mask_mov_ps(k0_21, 
                        _mm256_mask_mov_ps(
                            __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_21, zmm0[0].o, 
                                data_142fc92e0), 
                            arg7))
        
        arg8[0].o = __vpxorq_xmmu64_maskmskw_xmmu64_memu64_avx512(k0_21, zmm26[0].o, data_142fc92e0)
        zmm0[0].o = arg8[0].o & arg6[0].o
        int64_t k0_26 =
            __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_21, zmm0[0].o, data_142fc92e0)
        _kortest_mask8_u8(k0_26, k0_26)
        
        if (temp2_1 != 0)
            zmm0[0].o = zx.o(0)
            int64_t k0_27 = _mm256_cmp_ps_mask(k0_26, zmm0, zmm20, 1)
            zmm0[0].o = _mm_movm_epi16(k0_27)
            zmm5[0].o = zmm0[0].o & arg8[0].o
            zmm2[0].o = zmm5[0].o & arg6[0].o
            int64_t k0_28 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_27, zmm2[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_28, k0_28)
            
            if (temp2_1 != 0)
                var_2c0_2 = _mm256_mask_storeu_ps(
                    __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_28, zmm5[0].o, 
                        data_142fc92e0), 
                    zmm20)
            
            zmm0[0].o ^= data_142fc92e0
            zmm0[0].o &= arg8[0].o
            zmm2[0].o = zmm0[0].o & arg6[0].o
            int64_t k0_29 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_28, zmm2[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_29, k0_29)
            
            if (temp2_1 != 0)
                zmm2[0].o = zx.o(0)
                int64_t k0_30 = _mm256_cmp_ps_mask(k0_29, zmm2, zmm19, 1)
                zmm20[0].o = _mm_movm_epi16(k0_30)
                zmm5[0].o = _mm_mask_and_epi64(k0_30, zmm0[0].o, zmm20[0].o)
                zmm2[0].o = zmm5[0].o & arg6[0].o
                int64_t k0_31 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_30, zmm2[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_31, k0_31)
                
                if (temp2_1 != 0)
                    zmm2 = __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_31, zmm19, 0x80000000)
                    var_2c0_2 = _mm256_mask_storeu_ps(
                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_31, zmm5[0].o, 
                            data_142fc92e0), 
                        zmm2)
                
                zmm2[0].o =
                    __vpxorq_xmmu64_maskmskw_xmmu64_memu64_avx512(k0_31, zmm20[0].o, data_142fc92e0)
                zmm0[0].o &= zmm2[0].o
                zmm2[0].o = zmm0[0].o & arg6[0].o
                k0_29 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_31, zmm2[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_29, k0_29)
                
                if (temp2_1 != 0)
                    int64_t k2_17 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_29, 
                        zmm0[0].o, data_142fc92e0)
                    zmm0[0].o = zx.o(0)
                    var_2c0_2 = _mm256_mask_storeu_ps(k2_17, zmm0)
            
            zmm0[0].o = zx.o(0)
            int64_t k0_32 = _mm256_cmp_ps_mask(k0_29, zmm0, zmm18, 1)
            zmm0[0].o = _mm_movm_epi16(k0_32)
            zmm5[0].o = zmm0[0].o & arg8[0].o
            zmm2[0].o = zmm5[0].o & arg6[0].o
            int64_t k0_33 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_32, zmm2[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_33, k0_33)
            
            if (temp2_1 != 0)
                var_2a0_2 = _mm256_mask_storeu_ps(
                    __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_33, zmm5[0].o, 
                        data_142fc92e0), 
                    zmm18)
            
            zmm0[0].o ^= data_142fc92e0
            zmm0[0].o &= arg8[0].o
            zmm2[0].o = zmm0[0].o & arg6[0].o
            int64_t k0_34 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_33, zmm2[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_34, k0_34)
            
            if (temp2_1 != 0)
                zmm2[0].o = zx.o(0)
                int64_t k0_35 = _mm256_cmp_ps_mask(k0_34, zmm2, zmm16, 1)
                zmm5[0].o = _mm_movm_epi16(k0_35)
                zmm18[0].o = _mm_mask_and_epi64(k0_35, zmm0[0].o, zmm5[0].o)
                zmm2[0].o = _mm_mask_and_epi64(k0_35, zmm18[0].o, arg6[0].o)
                int64_t k0_36 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_35, zmm2[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_36, k0_36)
                
                if (temp2_1 != 0)
                    zmm2 = __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_36, zmm16, 0x80000000)
                    var_2a0_2 = _mm256_mask_storeu_ps(
                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_36, zmm18[0].o, 
                            data_142fc92e0), 
                        zmm2)
                
                zmm2[0].o = zmm5[0].o ^ data_142fc92e0
                zmm0[0].o &= zmm2[0].o
                zmm2[0].o = zmm0[0].o & arg6[0].o
                k0_34 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_36, zmm2[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_34, k0_34)
                
                if (temp2_1 != 0)
                    int64_t k2_20 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_34, 
                        zmm0[0].o, data_142fc92e0)
                    zmm0[0].o = zx.o(0)
                    var_2a0_2 = _mm256_mask_storeu_ps(k2_20, zmm0)
            
            zmm0[0].o = zx.o(0)
            int64_t k0_37 = _mm256_cmp_ps_mask(k0_34, zmm0, zmm25, 1)
            zmm0[0].o = _mm_movm_epi16(k0_37)
            zmm5[0].o = zmm0[0].o & arg8[0].o
            zmm2[0].o = zmm5[0].o & arg6[0].o
            int64_t k0_38 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_37, zmm2[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_38, k0_38)
            
            if (temp2_1 != 0)
                var_280_2 = _mm256_mask_storeu_ps(
                    __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_38, zmm5[0].o, 
                        data_142fc92e0), 
                    zmm25)
            
            zmm0[0].o ^= data_142fc92e0
            zmm0[0].o &= arg8[0].o
            zmm2[0].o = zmm0[0].o & arg6[0].o
            int64_t k0_39 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_38, zmm2[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_39, k0_39)
            
            if (temp2_1 != 0)
                zmm2[0].o = zx.o(0)
                int64_t k0_40 = _mm256_cmp_ps_mask(k0_39, zmm2, zmm17, 1)
                arg8[0].o = _mm_movm_epi16(k0_40)
                zmm5[0].o = zmm0[0].o & arg8[0].o
                zmm2[0].o = zmm5[0].o & arg6[0].o
                int64_t k0_41 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_40, zmm2[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_41, k0_41)
                
                if (temp2_1 != 0)
                    zmm2 = __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_41, zmm17, 0x80000000)
                    var_280_2 = _mm256_mask_storeu_ps(
                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_41, zmm5[0].o, 
                            data_142fc92e0), 
                        zmm2)
                
                zmm2[0].o = arg8[0].o ^ data_142fc92e0
                zmm0[0].o &= zmm2[0].o
                arg6[0].o &= zmm0[0].o
                k0_39 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_41, arg6[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_39, k0_39)
                
                if (temp2_1 != 0)
                    int64_t k2_23 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_39, 
                        zmm0[0].o, data_142fc92e0)
                    zmm0[0].o = zx.o(0)
                    var_280_2 = _mm256_mask_storeu_ps(k2_23, zmm0)
            
            zmm0 = var_2c0_2
            arg6[0].o = zx.o(0)
            zmm0 = _mm256_fmadd_ps(
                _mm256_fmadd_ps(_mm256_fmadd_ps(zmm0, zmm0, arg6), var_2a0_2, var_2a0_2), 
                var_280_2, var_280_2)
            arg6 = _mm256_mask_rsqrt14_ps(k0_39, zmm0)
            zmm0 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(k0_39, 
                _mm256_mul_ps(arg6, 
                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(_mm256_mul_ps(zmm0, arg6), 
                        k0_39, arg6, 0x40400000)), 
                0x3f000000)
            arg6 = _mm256_mask_rcp14_ps(k0_39, zmm0)
            _mm256_mul_ps(arg6, 
                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm0, k0_39, arg6, 0x40000000))
            arg6[0].o =
                __vpandq_xmmu64_maskmskw_xmmu64_memu64_avx512(k0_39, zmm26[0].o, data_142fc92e0)
            zmm0 = _mm256_mask_mov_ps(
                __vpcmpeqw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_39, arg6[0].o, 
                    data_142fc92e0), 
                arg7)
            arg7 = zmm0
        
        int64_t k0_42 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k1_26, arg7, *arg11, 1)
        _kortest_mask8_u8(k0_42, k0_42)
        
        if (temp2_1 == 0)
            result = 0
        else
            uint64_t i_1 = zx.q(_cvtmask32_u32(k0_42))
            result = 0
            
            do
                uint64_t rdx = _tzcnt_u64(i_1)
                i_1 &= not.q(1 << (rdx u% 0x40))
                
                if ((result.b & 1) == 0)
                    float var_1c0[0x8] = arg7
                    uint64_t rdx_1 = zx.q(rdx.d) & 7
                    zmm0[0].o = var_1c0[rdx_1]
                    *arg11 = zmm0[0]
                    int256_t var_1a0 = _mm256_mask_store_epi64(k0_42, zmm24)
                    *arg10 = *(&var_1a0 + (rdx_1 << 2))
                
                result.b = 1
            while (i_1 != 0)

_mm256_zeroupper()
return result
