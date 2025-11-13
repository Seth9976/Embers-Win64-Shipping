// 函数: sub_140048070
// 地址: 0x140048070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38 = arg15[0].o
int128_t var_48 = arg14[0].o
int128_t var_58 = arg13[0].o
int128_t var_68 = arg12[0].o
int128_t var_78 = arg11[0].o
int128_t var_88 = arg10[0].o
int128_t var_98 = arg9[0].o
int128_t var_a8 = arg8[0].o
int16_t zmm7[0x8]
int16_t var_b8[0x8] = zmm7
uint16_t zmm6[0x8]
uint16_t var_c8[0x8] = zmm6
float zmm3[0x8]
zmm3[0].o = arg18
arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
float var_2e0[0x8] = arg13
int32_t rsi_4 = ((arg21 s>> 0x1f u>> 0x1d) + arg21) & 0xfffffff8
float var_300_1[0x8] = arg13
float var_320[0x8] = arg13
int32_t* r10
double* r11
float zmm0[0x8]
float zmm1[0x8]
uint32_t rbx
float zmm5[0x8]
float zmm16[0x8]
float zmm17[0x8]
float zmm18[0x8]
float zmm19[0x8]
float zmm20[0x8]
float zmm21[0x8]
float zmm22[0x8]
float zmm23[0x8]
float zmm24[0x8]
float zmm26[0x8]
bool cond:0
bool cond:2
bool cond:5
bool cond:12
bool cond:13
bool cond:18
bool cond:19
bool cond:24
bool cond:25
bool cond:26
bool cond:31
bool cond:32
bool cond:35
bool cond:36
bool cond:39
bool cond:40
bool cond:42
bool cond:43
bool cond:45
bool cond:46
bool cond:47
bool cond:48
bool cond:49
bool cond:50
bool cond:51

if (rsi_4 s<= 0)
    rbx = 0
    r11 = arg20
    r10 = arg19
    cond:0 = 0 u< arg21
    cond:2 = 0 u< arg21
    cond:5 = 0 u< arg21
    cond:12 = 0 == arg21
    cond:13 = 0 u< arg21
    cond:18 = 0 == arg21
    cond:19 = 0 u< arg21
    cond:24 = 0 == arg21
    cond:25 = 0 == arg21
    cond:26 = 0 == arg21
    cond:31 = 0 == arg21
    cond:32 = 0 == arg21
    cond:35 = 0 == arg21
    cond:36 = 0 == arg21
    cond:39 = 0 == arg21
    cond:40 = 0 == arg21
    cond:42 = 0 == arg21
    cond:43 = 0 == arg21
    cond:45 = 0 == arg21
    cond:46 = 0 == arg21
    cond:47 = 0 == arg21
    cond:48 = 0 == arg21
    cond:49 = 0 == arg21
    cond:50 = 0 == arg21
    cond:51 = 0 == arg21
    
    if (0 s< arg21)
    label_14004881d:
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_mask_set1_epi32(arg5, rbx), data_142fc93a0)
        uint64_t k1_27 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, 
            _mm256_mask_set1_epi32(arg5, arg21), zmm0)
        zmm1 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 3)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        int64_t k2_2
        int128_t temp0_147
        temp0_147, k2_2 = _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_27), 
            *(arg4 + (zmm1[0].q << 2)))
        arg6 = temp0_147
        zmm0 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0xc)
        zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        int64_t k2_4
        int128_t temp0_151
        temp0_151, k2_4 =
            _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_27), *(arg4 + zmm1[0].q))
        zmm3 = temp0_151
        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
        int64_t k2_6
        int128_t temp0_155
        temp0_155, k2_6 =
            _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_27), *(arg4 + zmm0[0].q))
        arg7 = temp0_155
        float var_1e0_1[0x8] = arg6
        float var_1a0_1[0x8] = arg7
        float var_180_1[0x8] = zmm1
        zmm0 = _mm256_broadcast_ss(arg3[3])
        float var_3a0_2[0x8] = zmm0
        float var_380_2[0x8] = zmm0
        float var_360_2[0x8] = zmm0
        float var_340_2[0x8] = zmm0
        zmm5 = _mm256_broadcast_ss(arg3[1])
        zmm16 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[2])
        zmm17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg3)
        zmm1 = _mm256_mul_ps(zmm0, zmm1)
        int16_t temp0_161[0x8] = __vpbroadcastw_xmmdq_memw(0xff)
        zmm18 = _mm256_mask_mul_ps(arg5, zmm3, zmm16)
        zmm19 = _mm256_mask_mul_ps(arg5, arg7, zmm17)
        zmm20 = _mm256_mask_mul_ps(arg5, arg6, zmm5)
        zmm18 = _mm256_mask3_fmsub_ps(zmm18, arg5, zmm5, arg7)
        zmm19 = _mm256_mask3_fmsub_ps(zmm19, arg5, zmm16, arg6)
        zmm20 = _mm256_mask3_fmsub_ps(zmm20, arg5, zmm17, zmm3)
        zmm1 = _mm256_sub_ps(zmm1, zmm1)
        arg6 = _mm256_mask_add_ps(arg5, zmm18, zmm18)
        arg7 = _mm256_mask_add_ps(arg5, zmm19, zmm19)
        zmm5 = _mm256_mask_add_ps(arg5, zmm20, zmm20)
        zmm1 = _mm256_add_ps(zmm1, zmm1)
        float var_2c0_2[0x8] = arg6
        float var_2a0_2[0x8] = arg7
        float var_280_2[0x8] = zmm5
        float var_260_2[0x8] = zmm1
        zmm16 = _mm256_mask_load_ps(arg5, var_1e0_1)
        zmm3[0].o = _mm_movm_epi16(k1_27)
        zmm16 = _mm256_mask3_fmadd_ps(zmm16, arg5, zmm0, arg6)
        zmm17 = _mm256_mask_load_ps(arg5, zmm3)
        zmm18 = _mm256_mask_load_ps(arg5, var_1a0_1)
        zmm17 = _mm256_mask3_fmadd_ps(zmm17, arg5, zmm0, arg7)
        zmm18 = _mm256_mask3_fmadd_ps(zmm18, arg5, zmm0, zmm5)
        zmm1 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm1, zmm0, var_180_1)
        int256_t var_160_1 = _mm256_mask_store_ps(arg5, zmm16)
        int256_t var_140_1 = _mm256_mask_store_ps(arg5, zmm17)
        int256_t var_120_1 = _mm256_mask_store_ps(arg5, zmm18)
        float var_100_1[0x8] = zmm1
        zmm0 = _mm256_broadcast_ss(arg3[1])
        zmm1 = _mm256_broadcast_ss(arg3[2])
        zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg3)
        zmm6 = zmm3[0].o & temp0_161
        zmm20 = _mm256_mask_mul_ps(arg5, arg7, zmm1)
        zmm21 = _mm256_mask_mul_ps(arg5, zmm5, zmm19)
        zmm22 = _mm256_mask_mul_ps(arg5, arg6, zmm0)
        zmm20 = _mm256_mask3_fmsub_ps(zmm20, arg5, zmm5, zmm0)
        zmm21 = _mm256_mask3_fmsub_ps(zmm21, arg5, arg6, zmm1)
        zmm22 = _mm256_mask3_fmsub_ps(zmm22, arg5, arg7, zmm19)
        zmm0 = _mm256_mask_add_ps(arg5, zmm16, zmm20)
        zmm1 = _mm256_mask_add_ps(arg5, zmm17, zmm21)
        arg6 = _mm256_mask_add_ps(arg5, zmm18, zmm22)
        zmm26 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm0, arg3[4])
        zmm24 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm1, arg3[5])
        arg16 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg6, arg3[6])
        zmm5 = _mm256_broadcast_ss(*arg2)
        zmm16 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg2[1])
        zmm17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg2[2])
        zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg1)
        zmm22 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[1])
        zmm23 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[2])
        int64_t k0_14 = _mm256_cmp_ps_mask(arg5, zmm26, zmm5, 2)
        arg7[0].o = _mm_movm_epi16(k0_14)
        zmm0[0].o = arg7[0].o ^ data_142fc92e0
        zmm1[0].o = zmm0[0].o & zmm3[0].o
        zmm0[0].o = zmm1[0].o & temp0_161
        int64_t k0_15 = __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_14, zmm0[0].o, zmm6)
        _kortest_mask8_u8(k0_15, k0_15)
        
        if (not(cond:0))
            k0_15 = _mm256_cmp_ps_mask(_mm256_cmp_ps_mask(k1_27, zmm26, zmm5, 2), zmm24, zmm16, 2)
            arg7[0].o = _mm_movm_epi16(k0_15)
            zmm1[0].o = arg7[0].o ^ data_142fc92e0
            zmm1[0].o &= zmm3[0].o
        
        arg6[0].o = zmm1[0].o & temp0_161
        int64_t k0_16 = __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_15, arg6[0].o, zmm6)
        _kortest_mask8_u8(k0_16, k0_16)
        
        if (not(cond:2))
            int64_t k2_8 = _mm256_cmp_ps_mask(k0_16, arg16, zmm17, 2)
            zmm1[0].o = arg7[0].o & zmm3[0].o
            arg7[0].o = _mm_mask_mov_epi16(k2_8, zmm1[0].o)
            zmm1[0].o = arg7[0].o ^ zmm3[0].o
        
        zmm1[0].o &= temp0_161
        int64_t k0_17 = __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_16, zmm1[0].o, zmm6)
        _kortest_mask8_u8(k0_17, k0_17)
        
        if (not(cond:5))
            arg7[0].o &= zmm3[0].o
            zmm1[0].o = arg7[0].o & temp0_161
            int64_t k0_18 = _mm256_cmp_ps_mask(k0_17, zmm18, zmm26, 2)
            zmm6 = _mm_movm_epi16(k0_18)
            arg6[0].o = zmm6 ^ data_142fc92e0
            arg6[0].o &= arg7[0].o
            zmm0[0].o = arg6[0].o & temp0_161
            int64_t k0_19 =
                __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_18, zmm0[0].o, zmm1[0].o)
            _kortest_mask8_u8(k0_19, k0_19)
            
            if (not(cond:13))
                int64_t k2_9 = _mm256_cmp_ps_mask(k0_19, zmm22, zmm24, 2)
                zmm0[0].o = arg7[0].o & zmm6
                zmm6 = _mm_mask_mov_epi16(k2_9, zmm0[0].o)
                arg6[0].o = zmm6 ^ arg7[0].o
            
            zmm0[0].o = arg6[0].o & temp0_161
            k0_17 = __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_19, zmm0[0].o, zmm1[0].o)
            _kortest_mask8_u8(k0_17, k0_17)
            
            if (not(cond:19))
                int64_t k2_10 = _mm256_cmp_ps_mask(k0_17, zmm23, arg16, 2)
                zmm0[0].o = zmm6 & arg7[0].o
                zmm6 = _mm_mask_mov_epi16(k2_10, zmm0[0].o)
            
            arg7[0].o &= zmm6
        
        zmm21 = _mm256_mask_sub_ps(k0_17, zmm26, zmm5)
        zmm19 = _mm256_mask_sub_ps(k0_17, zmm24, zmm16)
        zmm17 = _mm256_mask_sub_ps(k0_17, arg16, zmm17)
        zmm20 = _mm256_mask_sub_ps(k0_17, zmm18, zmm26)
        zmm18 = _mm256_mask_sub_ps(k0_17, zmm22, zmm24)
        zmm16 = _mm256_mask_sub_ps(k0_17, zmm23, arg16)
        zmm0[0].o = arg7[0].o & zmm3[0].o
        int64_t k0_20 =
            __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_17, zmm0[0].o, data_142fc92e0)
        _kortest_mask8_u8(k0_20, k0_20)
        
        if (not(cond:12))
            zmm5 = _mm256_mask_max_ps(k0_20, zmm20, zmm21)
            zmm23 = _mm256_mask_max_ps(k0_20, zmm18, zmm19)
            zmm22 = _mm256_mask_max_ps(k0_20, zmm16, zmm17)
            int64_t k0_21 = _mm256_cmp_ps_mask(k0_20, zmm23, zmm5, 1)
            zmm1[0].o = _mm_movm_epi16(k0_21)
            arg6[0].o = arg7[0].o & zmm1[0].o
            zmm0[0].o = arg6[0].o & zmm3[0].o
            int64_t k0_22 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_21, zmm0[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_22, k0_22)
            
            if (not(cond:18))
                arg6[0].o = _mm_mask_mov_epi16(_mm256_cmp_ps_mask(k0_22, zmm22, zmm5, 5), arg6[0].o)
                zmm0[0].o = arg6[0].o & zmm3[0].o
                k0_22 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_22, zmm0[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_22, k0_22)
                
                if (not(cond:26))
                    zmm5 = _mm256_mask_blend_ps(
                        __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_22, arg6[0].o, 
                            data_142fc92e0), 
                        zmm22, zmm5)
            
            zmm0[0].o = zmm1[0].o ^ data_142fc92e0
            zmm1[0].o = arg7[0].o & zmm0[0].o
            zmm0[0].o = zmm1[0].o & zmm3[0].o
            k0_20 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_22, zmm0[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_20, k0_20)
            
            if (not(cond:25))
                int64_t k0_23 = _mm256_cmp_ps_mask(k0_20, zmm22, zmm23, 1)
                uint16_t temp0_223[0x8] = _mm_movm_epi16(k0_23)
                arg6[0].o = zmm1[0].o & temp0_223
                zmm0[0].o = arg6[0].o & zmm3[0].o
                int64_t k0_24 = _mm_mask_test_epi16_mask(k0_23, zmm0[0].o, temp0_161)
                _kortest_mask8_u8(k0_24, k0_24)
                
                if (not(cond:32))
                    zmm5 = _mm256_mask_mov_ps(k0_24, 
                        _mm256_mask_mov_ps(_mm_mask_testn_epi16_mask(k0_24, arg6[0].o, temp0_161), 
                            zmm5))
                
                zmm0[0].o = temp0_223 ^ data_142fc92e0
                zmm1[0].o &= zmm0[0].o
                zmm0[0].o = zmm1[0].o & zmm3[0].o
                k0_20 = _mm_mask_test_epi16_mask(k0_24, zmm0[0].o, temp0_161)
                _kortest_mask8_u8(k0_20, k0_20)
                
                if (not(cond:36))
                    zmm5 = _mm256_mask_mov_ps(k0_20, 
                        _mm256_mask_mov_ps(
                            __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_20, zmm1[0].o, 
                                data_142fc92e0), 
                            zmm5))
        
        zmm7 = arg7[0].o ^ data_142fc92e0
        zmm0[0].o = zmm7 & zmm3[0].o
        int64_t k0_25 =
            __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_20, zmm0[0].o, data_142fc92e0)
        _kortest_mask8_u8(k0_25, k0_25)
        
        if (cond:24)
            zmm19[0].o = _mm_mask_load_ss(k0_25, arg18)
        else
            zmm0[0].o = zx.o(0)
            int64_t k0_26 = _mm256_cmp_ps_mask(k0_25, zmm0, zmm21, 1)
            zmm1[0].o = _mm_movm_epi16(k0_26)
            arg6[0].o = zmm1[0].o & zmm7
            zmm0[0].o = arg6[0].o & zmm3[0].o
            int64_t k0_27 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_26, zmm0[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_27, k0_27)
            
            if (not(cond:31))
                var_3a0_2 = _mm256_mask_storeu_ps(
                    __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_27, arg6[0].o, 
                        data_142fc92e0), 
                    zmm21)
            
            zmm0[0].o = zmm1[0].o ^ data_142fc92e0
            zmm1[0].o = zmm0[0].o & zmm7
            zmm0[0].o = zmm1[0].o & zmm3[0].o
            int64_t k0_28 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_27, zmm0[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_28, k0_28)
            
            if (not(cond:35))
                zmm0[0].o = zx.o(0)
                int64_t k0_29 = _mm256_cmp_ps_mask(k0_28, zmm0, zmm20, 1)
                arg6[0].o = _mm_movm_epi16(k0_29)
                zmm6 = zmm1[0].o & arg6[0].o
                zmm0[0].o = zmm6 & zmm3[0].o
                int64_t k0_30 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_29, zmm0[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_30, k0_30)
                
                if (not(cond:40))
                    zmm0 = __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_30, zmm20, 0x80000000)
                    var_3a0_2 = _mm256_mask_storeu_ps(
                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_30, zmm6, 
                            data_142fc92e0), 
                        zmm0)
                
                zmm0[0].o = arg6[0].o ^ data_142fc92e0
                zmm1[0].o &= zmm0[0].o
                zmm0[0].o = zmm1[0].o & zmm3[0].o
                k0_28 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_30, zmm0[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_28, k0_28)
                
                if (not(cond:43))
                    int64_t k2_17 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_28, 
                        zmm1[0].o, data_142fc92e0)
                    zmm0[0].o = zx.o(0)
                    var_3a0_2 = _mm256_mask_storeu_ps(k2_17, zmm0)
            
            zmm0[0].o = zx.o(0)
            int64_t k0_31 = _mm256_cmp_ps_mask(k0_28, zmm0, zmm19, 1)
            zmm1[0].o = _mm_movm_epi16(k0_31)
            arg6[0].o = zmm1[0].o & zmm7
            zmm0[0].o = arg6[0].o & zmm3[0].o
            int64_t k0_32 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_31, zmm0[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_32, k0_32)
            
            if (not(cond:39))
                var_380_2 = _mm256_mask_storeu_ps(
                    __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_32, arg6[0].o, 
                        data_142fc92e0), 
                    zmm19)
            
            zmm0[0].o = zmm1[0].o ^ data_142fc92e0
            zmm1[0].o = zmm0[0].o & zmm7
            zmm0[0].o = zmm1[0].o & zmm3[0].o
            int64_t k0_33 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_32, zmm0[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_33, k0_33)
            zmm19[0].o = _mm_mask_load_ss(k0_33, arg18)
            
            if (not(cond:42))
                zmm0[0].o = zx.o(0)
                int64_t k0_34 = _mm256_cmp_ps_mask(k0_33, zmm0, zmm18, 1)
                arg6[0].o = _mm_movm_epi16(k0_34)
                zmm6 = zmm1[0].o & arg6[0].o
                zmm0[0].o = zmm6 & zmm3[0].o
                int64_t k0_35 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_34, zmm0[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_35, k0_35)
                
                if (not(cond:46))
                    zmm0 = __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_35, zmm18, 0x80000000)
                    var_380_2 = _mm256_mask_storeu_ps(
                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_35, zmm6, 
                            data_142fc92e0), 
                        zmm0)
                
                zmm0[0].o = arg6[0].o ^ data_142fc92e0
                zmm1[0].o &= zmm0[0].o
                zmm0[0].o = zmm1[0].o & zmm3[0].o
                k0_33 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_35, zmm0[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_33, k0_33)
                
                if (not(cond:48))
                    int64_t k2_20 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_33, 
                        zmm1[0].o, data_142fc92e0)
                    zmm0[0].o = zx.o(0)
                    var_380_2 = _mm256_mask_storeu_ps(k2_20, zmm0)
            
            zmm0[0].o = zx.o(0)
            int64_t k0_36 = _mm256_cmp_ps_mask(k0_33, zmm0, zmm17, 1)
            zmm1[0].o = _mm_movm_epi16(k0_36)
            arg6[0].o = zmm1[0].o & zmm7
            zmm0[0].o = arg6[0].o & zmm3[0].o
            int64_t k0_37 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_36, zmm0[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_37, k0_37)
            
            if (not(cond:45))
                var_360_2 = _mm256_mask_storeu_ps(
                    __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_37, arg6[0].o, 
                        data_142fc92e0), 
                    zmm17)
            
            zmm0[0].o = zmm1[0].o ^ data_142fc92e0
            zmm1[0].o = zmm0[0].o & zmm7
            zmm0[0].o = zmm1[0].o & zmm3[0].o
            k0_25 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_37, zmm0[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_25, k0_25)
            
            if (not(cond:47))
                zmm0[0].o = zx.o(0)
                int64_t k0_38 = _mm256_cmp_ps_mask(k0_25, zmm0, zmm16, 1)
                arg6[0].o = _mm_movm_epi16(k0_38)
                zmm7 = zmm1[0].o & arg6[0].o
                zmm0[0].o = zmm7 & zmm3[0].o
                int64_t k0_39 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_38, zmm0[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_39, k0_39)
                
                if (not(cond:49))
                    zmm0 = __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_39, zmm16, 0x80000000)
                    var_360_2 = _mm256_mask_storeu_ps(
                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_39, zmm7, 
                            data_142fc92e0), 
                        zmm0)
                
                zmm0[0].o = arg6[0].o ^ data_142fc92e0
                zmm1[0].o &= zmm0[0].o
                zmm0[0].o = zmm1[0].o & zmm3[0].o
                k0_25 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_39, zmm0[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_25, k0_25)
                
                if (not(cond:51))
                    int64_t k2_23 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_25, 
                        zmm1[0].o, data_142fc92e0)
                    zmm0[0].o = zx.o(0)
                    var_360_2 = _mm256_mask_storeu_ps(k2_23, zmm0)
            
            zmm1[0].o = zx.o(0)
            zmm3 = var_360_2
            zmm0 = _mm256_fmadd_ps(
                _mm256_fmadd_ps(_mm256_fmadd_ps(var_3a0_2, var_3a0_2, zmm1), var_380_2, var_380_2), 
                zmm3, zmm3)
            zmm1 = _mm256_mask_rsqrt14_ps(k0_25, zmm0)
            zmm0 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(k0_25, 
                _mm256_mul_ps(zmm1, 
                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(_mm256_mul_ps(zmm0, zmm1), 
                        k0_25, zmm1, 0x40400000)), 
                0x3f000000)
            zmm1 = _mm256_mask_rcp14_ps(k0_25, zmm0)
            _mm256_mul_ps(zmm1, 
                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm0, k0_25, zmm1, 0x40000000))
            zmm1[0].o = arg7[0].o & data_142fc92e0
            zmm5 = _mm256_mask_mov_ps(
                __vpcmpeqw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_25, zmm1[0].o, 
                    data_142fc92e0), 
                zmm5)
        
        zmm1 = _mm256_sub_ps(zmm5, _mm256_mask_broadcastss_ps(k0_25, zmm19[0].o))
        int64_t k1_28 =
            __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k1_27, zmm1, 0xb8d1b717, 1)
        _kortest_mask8_u8(k1_28, k1_28)
        
        if (not(cond:50))
            zmm26 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm26, k0_25, zmm1, var_320)
            zmm24 =
                __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm24, k0_25, zmm1, var_300_1)
            arg16 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg16, k0_25, zmm1, var_2e0)
            var_320 = _mm256_mask_storeu_ps(k1_28, zmm26)
            var_300_1 = _mm256_mask_storeu_ps(k1_28, zmm24)
            var_2e0 = _mm256_mask_storeu_ps(k1_28, arg16)
            arg13 = _mm256_mask_add_ps(k1_28, arg13, zmm1)
else
    arg11 = _mm256_broadcast_ss(arg3[3])
    zmm0[0].o = *arg3
    zmm1[0].o = arg3[1]
    arg6[0].o = arg3[2]
    zmm24 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg2)
    zmm16 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg2[1])
    zmm17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg2[2])
    zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg1)
    zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[1])
    zmm21 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[2])
    zmm20 = _mm256_mask_broadcastss_ps(arg5, zmm3[0].o)
    arg16[0].o = _mm_mask_xor_ps(arg5, arg16[0].o, arg16[0].o)
    rbx = 0
    bool cond:1_1 = true
    bool cond:3_1 = true
    bool cond:4_1 = true
    bool cond:6_1 = true
    bool cond:7_1 = true
    bool cond:8_1 = true
    bool cond:9_1 = true
    bool cond:10_1 = true
    bool cond:11_1 = false
    bool cond:14_1 = true
    bool cond:15_1 = true
    bool cond:16_1 = true
    bool cond:17_1 = false
    bool cond:20_1 = true
    bool cond:21_1 = true
    bool cond:22_1 = true
    bool cond:23_1 = true
    bool cond:27_1 = true
    bool cond:28_1 = true
    bool cond:29_1 = true
    bool cond:30_1 = false
    bool cond:33_1 = true
    bool cond:34_1 = true
    bool cond:37_1 = true
    bool cond:38_1 = true
    bool cond:41_1 = true
    bool cond:44_1 = true
    zmm3 = _mm256_broadcast_ss(1.68155816e-44f)
    int32_t var_200_1[0x4] = zmm3[0].o
    float var_220_1[0x8] = _mm256_broadcastss_ps(zmm1[0].o)
    zmm1 = _mm256_broadcastss_ps(arg6[0].o)
    float zmm27[0x8] = _mm256_mask_broadcastss_ps(arg5, zmm0[0].o)
    zmm1[0].o = data_142fc92e0
    arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
    
    do
        zmm0[0].o = zx.o(rbx)
        zmm0[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm0[0].o, var_200_1)
        zmm0 = _mm256_broadcastd_epi32(zmm0[0])
        arg6 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93c0)
        int64_t k1_1 = _kxnor_mask16(arg5, arg5)
        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        int64_t k1_2
        int128_t temp0_19
        temp0_19, k1_2 = _mm256_mmask_i32gather_ps(k1_1, *(arg4 + arg6[0].q))
        zmm3 = temp0_19
        arg6 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93e0)
        int64_t k1_3 = _kxnor_mask16(arg5, arg5)
        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
        int64_t k1_4
        int128_t temp0_22
        temp0_22, k1_4 = _mm256_mmask_i32gather_ps(k1_3, *(arg4 + arg6[0].q))
        arg7 = temp0_22
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc9400)
        int64_t k1_5 = _kxnor_mask16(arg5, arg5)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        int64_t k1_6
        int128_t temp0_25
        temp0_25, k1_6 = _mm256_mmask_i32gather_ps(k1_5, *(arg4 + zmm0[0].q))
        arg6 = temp0_25
        float var_2c0_1[0x8] = zmm3
        float var_2a0_1[0x8] = arg7
        float var_280_1[0x8] = arg6
        int256_t var_260_1 = _mm256_mask_store_ps(arg5, arg16)
        float var_3a0_1[0x8] = arg11
        float var_380_1[0x8] = arg11
        float var_360_1[0x8] = arg11
        float var_340_1[0x8] = arg11
        zmm26 = _mm256_mask_load_ps(arg5, zmm1)
        zmm0 = _mm256_mask_mul_ps(arg5, arg7, zmm26)
        zmm5 = _mm256_mask_mul_ps(arg5, arg6, zmm27)
        float zmm31[0x8] = _mm256_mask_load_ps(arg5, var_220_1)
        zmm22 = _mm256_mask_mul_ps(arg5, zmm3, zmm31)
        arg6 = _mm256_mask3_fmsub_ps(arg6, arg5, zmm31, zmm0)
        zmm3 = _mm256_mask3_fmsub_ps(zmm3, arg5, zmm26, zmm5)
        arg7 = _mm256_mask3_fmsub_ps(arg7, arg5, zmm27, zmm22)
        zmm0 = _mm256_add_ps(arg6, arg6)
        arg6 = _mm256_add_ps(zmm3, zmm3)
        zmm3 = _mm256_add_ps(arg7, arg7)
        arg7 = _mm256_fmadd_ps(var_2c0_1, arg11, zmm0)
        zmm5 = _mm256_fmadd_ps(var_2a0_1, arg11, arg6)
        zmm22 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_280_1), arg5, arg11, zmm3)
        zmm23 = _mm256_mask_mul_ps(arg5, arg6, zmm26)
        float zmm29[0x8] = _mm256_mask_mul_ps(arg5, zmm3, zmm27)
        float zmm30[0x8] = _mm256_mask_mul_ps(arg5, zmm0, zmm31)
        zmm3 = _mm256_add_ps(arg7, _mm256_mask3_fmsub_ps(zmm3, arg5, zmm31, zmm23))
        zmm0 = _mm256_add_ps(zmm5, _mm256_mask3_fmsub_ps(zmm0, arg5, zmm26, zmm29))
        arg6 = _mm256_mask_add_ps(arg5, zmm22, _mm256_mask3_fmsub_ps(arg6, arg5, zmm27, zmm30))
        zmm30 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm3, arg3[4])
        zmm31 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm0, arg3[5])
        zmm26 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg6, arg3[6])
        int64_t k1_7 = _mm256_cmp_ps_mask(arg5, zmm30, zmm24, 2)
        _kortest_mask8_u8(k1_7, k1_7)
        
        if (not(cond:20_1))
            k1_7 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(
                _mm256_cmp_ps_mask(arg5, zmm30, zmm24, 2), zmm31, arg2[1], 2)
            _kortest_mask8_u8(k1_7, k1_7)
        
        if (cond:20_1 || cond:1_1)
            zmm6 = _mm_movm_epi16(k1_7)
        else
            int64_t k1_9 =
                __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k1_7, zmm26, arg2[2], 2)
            zmm6 = _mm_movm_epi16(k1_9)
            _kortest_mask8_u8(k1_9, k1_9)
            
            if (not(cond:4_1))
                zmm22 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg1)
                int64_t k0 = _mm256_cmp_ps_mask(arg5, zmm22, zmm30, 2)
                zmm0[0].o = _mm_movm_epi16(k0)
                arg7[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                arg6[0].o = zmm0[0].o ^ zmm1[0].o
                zmm5[0].o = zmm6 & arg7[0].o
                zmm3[0].o = arg6[0].o & zmm6
                arg6[0].o = zmm3[0].o & arg7[0].o
                int64_t k0_1 =
                    __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0, arg6[0].o, zmm5[0].o)
                _kortest_mask8_u8(k0_1, k0_1)
                
                if (not(cond:11_1))
                    zmm0 = _mm256_broadcast_ss(arg1[1])
                    k0_1 = _mm256_cmp_ps_mask(_mm256_cmp_ps_mask(k1_9, zmm22, zmm30, 2), zmm0, 
                        zmm31, 2)
                    zmm0[0].o = _mm_movm_epi16(k0_1)
                    arg6[0].o = zmm0[0].o ^ zmm1[0].o
                    zmm3[0].o = arg6[0].o & zmm6
                
                arg6[0].o = zmm3[0].o & arg7[0].o
                arg5 = __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_1, arg6[0].o, zmm5[0].o)
                _kortest_mask8_u8(arg5, arg5)
                
                if (not(cond:17_1))
                    arg6 = _mm256_broadcast_ss(arg1[2])
                    int64_t k1_11 = _mm256_cmp_ps_mask(arg5, arg6, zmm26, 2)
                    zmm0[0].o &= zmm6
                    zmm0[0].o = _mm_mask_mov_epi16(k1_11, zmm0[0].o)
                
                zmm6 &= zmm0[0].o
        
        arg15 = _mm256_mask_sub_ps(arg5, zmm30, zmm24)
        arg12 = _mm256_mask_sub_ps(arg5, zmm31, zmm16)
        arg9 = _mm256_mask_sub_ps(arg5, zmm26, zmm17)
        arg14 = _mm256_mask_sub_ps(arg5, zmm18, zmm30)
        arg10 = _mm256_mask_sub_ps(arg5, zmm19, zmm31)
        arg8 = _mm256_mask_sub_ps(arg5, zmm21, zmm26)
        int64_t k0_2 = _mm_mask_test_epi16_mask(arg5, zmm6, zmm1[0].o)
        _kortest_mask8_u8(k0_2, k0_2)
        
        if (not(cond:10_1))
            arg7 = _mm256_max_ps(arg14, arg15)
            zmm29 = _mm256_mask_max_ps(k0_2, arg10, arg12)
            zmm0 = _mm256_max_ps(arg8, arg9)
            int64_t k0_3 = _mm256_cmp_ps_mask(k0_2, zmm29, arg7, 1)
            zmm22[0].o = _mm_movm_epi16(k0_3)
            zmm23[0].o = _mm_mask_and_epi64(k0_3, zmm6, zmm22[0].o)
            int64_t k0_4 = _mm_mask_test_epi16_mask(k0_3, zmm23[0].o, zmm1[0].o)
            _kortest_mask8_u8(k0_4, k0_4)
            
            if (not(cond:3_1))
                arg16 = _mm256_mask_mov_ps(k0_4, zmm20)
                zmm20 = _mm256_mask_mov_ps(k0_4, zmm24)
                zmm24 = _mm256_mask_mov_ps(k0_4, zmm21)
                zmm21 = _mm256_mask_mov_ps(k0_4, zmm18)
                zmm18 = _mm256_mask_mov_ps(k0_4, zmm17)
                zmm17 = _mm256_mask_mov_ps(k0_4, zmm16)
                zmm16 = _mm256_mask_mov_ps(k0_4, arg13)
                int64_t k0_5 = _mm256_cmp_ps_mask(k0_4, zmm0, arg7, 1)
                zmm5[0].o = _mm_movm_epi16(k0_5)
                zmm3[0].o = _mm_mask_and_epi64(k0_5, zmm23[0].o, zmm5[0].o)
                arg13[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                int64_t k0_6 = _mm_mask_test_epi16_mask(k0_5, zmm3[0].o, arg13[0].o)
                _kortest_mask8_u8(k0_6, k0_6)
                
                if (not(cond:9_1))
                    arg7 = _mm256_mask_mov_ps(
                        _mm_mask_testn_epi16_mask(k0_6, zmm3[0].o, arg13[0].o), arg17)
                    arg17 = _mm256_mask_mov_ps(k0_6, arg7)
                
                arg6[0].o = zmm5[0].o ^ zmm1[0].o
                arg6[0].o = _mm_mask_and_epi64(k0_6, zmm23[0].o, arg6[0].o)
                k0_4 = _mm_mask_test_epi16_mask(k0_6, arg6[0].o, arg13[0].o)
                _kortest_mask8_u8(k0_4, k0_4)
                
                if (not(cond:16_1))
                    arg17 = _mm256_mask_blend_ps(
                        _mm_mask_testn_epi16_mask(k0_4, arg6[0].o, zmm1[0].o), zmm0, arg17)
                
                arg13 = _mm256_mask_mov_ps(k0_4, zmm16)
                zmm16 = _mm256_mask_mov_ps(k0_4, zmm17)
                zmm17 = _mm256_mask_mov_ps(k0_4, zmm18)
                zmm18 = _mm256_mask_mov_ps(k0_4, zmm21)
                zmm21 = _mm256_mask_mov_ps(k0_4, zmm24)
                zmm24 = _mm256_mask_mov_ps(k0_4, zmm20)
                zmm20 = _mm256_mask_mov_ps(k0_4, arg16)
                arg16[0].o = _mm_mask_xor_ps(k0_4, arg16[0].o, arg16[0].o)
            
            arg6[0].o = _mm_mask_xor_epi64(k0_4, zmm22[0].o, zmm1[0].o)
            arg7[0].o = zmm6 & arg6[0].o
            k0_2 = _mm_mask_test_epi16_mask(k0_4, arg7[0].o, zmm1[0].o)
            _kortest_mask8_u8(k0_2, k0_2)
        
        if (cond:10_1 || cond:8_1)
            zmm7 = data_142fc92e0
        label_140048588:
            zmm0[0].o = zmm6 & zmm1[0].o
            arg5 = _mm_cmp_epi16_mask(k0_2, zmm0[0].o, zmm7, 4)
            _kortest_mask8_u8(arg5, arg5)
            
            if (not(cond:29_1))
            label_14004859d:
                zmm6 ^= zmm7
                int64_t k0_9 = _mm256_cmp_ps_mask(arg5, arg16, arg15, 1)
                zmm3[0].o = _mm_movm_epi16(k0_9)
                arg6[0].o = zmm3[0].o & zmm6
                int64_t k1_16 = _mm_mask_test_epi16_mask(k0_9, arg6[0].o, zmm1[0].o)
                _kortest_mask8_u8(k1_16, k1_16)
                
                if (not(cond:7_1))
                    var_3a0_1 = _mm256_mask_storeu_ps(k1_16, arg15)
                
                arg6[0].o = zmm3[0].o ^ zmm1[0].o
                arg7[0].o = arg6[0].o & zmm6
                int64_t k0_10 = _mm_mask_test_epi16_mask(k0_9, arg7[0].o, zmm1[0].o)
                _kortest_mask8_u8(k0_10, k0_10)
                
                if (not(cond:14_1))
                    k0_10 = _mm256_cmp_ps_mask(k0_10, arg16, arg14, 1)
                    zmm3[0].o = _mm_movm_epi16(k0_10)
                    arg6[0].o = arg7[0].o & zmm3[0].o
                    int64_t k1_17 = _mm_mask_test_epi16_mask(k0_10, arg6[0].o, zmm1[0].o)
                    _kortest_mask8_u8(k1_17, k1_17)
                    
                    if (not(cond:22_1))
                        arg6 =
                            __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_10, arg14, 0x80000000)
                        var_3a0_1 = _mm256_mask_storeu_ps(k1_17, arg6)
                    
                    arg6[0].o = zmm3[0].o ^ zmm1[0].o
                    arg6[0].o &= arg7[0].o
                    int64_t k1_18 = _mm_mask_test_epi16_mask(k0_10, arg6[0].o, zmm1[0].o)
                    _kortest_mask8_u8(k1_18, k1_18)
                    
                    if (not(cond:28_1))
                        var_3a0_1 = _mm256_mask_storeu_ps(k1_18, arg16)
                
                int64_t k0_11 = _mm256_cmp_ps_mask(k0_10, arg16, arg12, 1)
                zmm3[0].o = _mm_movm_epi16(k0_11)
                arg6[0].o = zmm3[0].o & zmm6
                int64_t k1_19 = _mm_mask_test_epi16_mask(k0_11, arg6[0].o, zmm1[0].o)
                _kortest_mask8_u8(k1_19, k1_19)
                
                if (not(cond:21_1))
                    var_380_1 = _mm256_mask_storeu_ps(k1_19, arg12)
                
                arg6[0].o = zmm3[0].o ^ zmm1[0].o
                arg7[0].o = arg6[0].o & zmm6
                int64_t k0_12 = _mm_mask_test_epi16_mask(k0_11, arg7[0].o, zmm1[0].o)
                _kortest_mask8_u8(k0_12, k0_12)
                
                if (not(cond:27_1))
                    k0_12 = _mm256_cmp_ps_mask(k0_12, arg16, arg10, 1)
                    zmm3[0].o = _mm_movm_epi16(k0_12)
                    arg6[0].o = arg7[0].o & zmm3[0].o
                    int64_t k1_20 = _mm_mask_test_epi16_mask(k0_12, arg6[0].o, zmm1[0].o)
                    _kortest_mask8_u8(k1_20, k1_20)
                    
                    if (not(cond:34_1))
                        arg6 =
                            __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_12, arg10, 0x80000000)
                        var_380_1 = _mm256_mask_storeu_ps(k1_20, arg6)
                    
                    arg6[0].o = zmm3[0].o ^ zmm1[0].o
                    arg6[0].o &= arg7[0].o
                    int64_t k1_21 = _mm_mask_test_epi16_mask(k0_12, arg6[0].o, zmm1[0].o)
                    _kortest_mask8_u8(k1_21, k1_21)
                    
                    if (not(cond:38_1))
                        var_380_1 = _mm256_mask_storeu_ps(k1_21, arg16)
                
                int64_t k0_13 = _mm256_cmp_ps_mask(k0_12, arg16, arg9, 1)
                zmm3[0].o = _mm_movm_epi16(k0_13)
                arg6[0].o = zmm3[0].o & zmm6
                int64_t k1_22 = _mm_mask_test_epi16_mask(k0_13, arg6[0].o, zmm1[0].o)
                _kortest_mask8_u8(k1_22, k1_22)
                
                if (not(cond:33_1))
                    var_360_1 = _mm256_mask_storeu_ps(k1_22, arg9)
                
                arg6[0].o = zmm3[0].o ^ zmm1[0].o
                arg7[0].o = arg6[0].o & zmm6
                arg5 = _mm_mask_test_epi16_mask(k0_13, arg7[0].o, zmm1[0].o)
                _kortest_mask8_u8(arg5, arg5)
                
                if (not(cond:37_1))
                    arg5 = _mm256_cmp_ps_mask(arg5, arg16, arg8, 1)
                    zmm3[0].o = _mm_movm_epi16(arg5)
                    arg6[0].o = arg7[0].o & zmm3[0].o
                    int64_t k1_23 = _mm_mask_test_epi16_mask(arg5, arg6[0].o, zmm1[0].o)
                    _kortest_mask8_u8(k1_23, k1_23)
                    
                    if (not(cond:41_1))
                        arg6 = __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg8, 0x80000000)
                        var_360_1 = _mm256_mask_storeu_ps(k1_23, arg6)
                    
                    arg6[0].o = zmm3[0].o ^ zmm1[0].o
                    arg6[0].o &= arg7[0].o
                    int64_t k1_24 = _mm_mask_test_epi16_mask(arg5, arg6[0].o, zmm1[0].o)
                    _kortest_mask8_u8(k1_24, k1_24)
                    
                    if (not(cond:44_1))
                        var_360_1 = _mm256_mask_storeu_ps(k1_24, arg16)
                
                arg7 = var_360_1
                arg6 = _mm256_fmadd_ps(
                    _mm256_fmadd_ps(_mm256_mask3_fmadd_ps(var_3a0_1, arg5, var_3a0_1, arg16), 
                        var_380_1, var_380_1), 
                    arg7, arg7)
                zmm3 = _mm256_mask_rsqrt14_ps(arg5, arg6)
                arg6 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                    _mm256_mul_ps(zmm3, 
                        __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                            _mm256_mul_ps(arg6, zmm3), arg5, zmm3, 0x40400000)), 
                    0x3f000000)
                zmm3 = _mm256_mask_rcp14_ps(arg5, arg6)
                _mm256_mul_ps(zmm3, 
                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg6, arg5, zmm3, 
                        0x40000000))
                arg6 = _mm256_mask_mov_ps(
                    __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, zmm0[0].o, zmm1[0].o), 
                    arg17)
                arg17 = _mm256_mask_mov_ps(arg5, arg6)
        else
            int64_t k0_7 = _mm256_cmp_ps_mask(k0_2, zmm0, zmm29, 1)
            zmm5[0].o = _mm_movm_epi16(k0_7)
            arg6[0].o = arg7[0].o & zmm5[0].o
            zmm3[0].o = __vpbroadcastw_xmmdq_memw(0xff)
            int64_t k0_8 = _mm_mask_test_epi16_mask(k0_7, arg6[0].o, zmm3[0].o)
            _kortest_mask8_u8(k0_8, k0_8)
            
            if (not(cond:15_1))
                arg17 = _mm256_mask_mov_ps(k0_8, 
                    _mm256_mask_mov_ps(_mm_mask_testn_epi16_mask(k0_8, arg6[0].o, zmm3[0].o), 
                        arg17))
            
            zmm7 = data_142fc92e0
            arg6[0].o = zmm5[0].o ^ zmm1[0].o
            arg6[0].o &= arg7[0].o
            k0_2 = _mm_mask_test_epi16_mask(k0_8, arg6[0].o, zmm3[0].o)
            _kortest_mask8_u8(k0_2, k0_2)
            
            if (cond:23_1)
                goto label_140048588
            
            zmm0 = _mm256_mask_mov_ps(_mm_mask_testn_epi16_mask(k0_2, arg6[0].o, zmm1[0].o), arg17)
            arg17 = _mm256_mask_mov_ps(k0_2, zmm0)
            zmm0[0].o = zmm6 & zmm1[0].o
            arg5 = _mm_cmp_epi16_mask(k0_2, zmm0[0].o, zmm7, 4)
            _kortest_mask8_u8(arg5, arg5)
            
            if (cond:30_1)
                goto label_14004859d
        
        zmm0 = _mm256_mask_sub_ps(arg5, arg17, zmm20)
        int64_t k1_26 =
            __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(arg5, zmm0, 0xb8d1b717, 1)
        _kortest_mask8_u8(k1_26, k1_26)
        
        if (not(cond:6_1))
            zmm30 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm30, arg5, zmm0, var_320)
            zmm31 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm31, arg5, zmm0, var_300_1)
            zmm26 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm26, arg5, zmm0, var_2e0)
            var_320 = _mm256_mask_storeu_ps(k1_26, zmm30)
            var_300_1 = _mm256_mask_storeu_ps(k1_26, zmm31)
            var_2e0 = _mm256_mask_storeu_ps(k1_26, zmm26)
            arg13 = _mm256_mask_add_ps(k1_26, arg13, zmm0)
        
        rbx += 8
        cond:1_1 = rbx == rsi_4
        cond:3_1 = rbx == rsi_4
        cond:4_1 = rbx == rsi_4
        cond:6_1 = rbx == rsi_4
        cond:7_1 = rbx == rsi_4
        cond:8_1 = rbx == rsi_4
        cond:9_1 = rbx == rsi_4
        cond:10_1 = rbx == rsi_4
        cond:11_1 = rbx u< rsi_4
        cond:14_1 = rbx == rsi_4
        cond:15_1 = rbx == rsi_4
        cond:16_1 = rbx == rsi_4
        cond:17_1 = rbx u< rsi_4
        cond:20_1 = rbx == rsi_4
        cond:21_1 = rbx == rsi_4
        cond:22_1 = rbx == rsi_4
        cond:23_1 = rbx == rsi_4
        cond:27_1 = rbx == rsi_4
        cond:28_1 = rbx == rsi_4
        cond:29_1 = rbx == rsi_4
        cond:30_1 = rbx != rsi_4
        cond:33_1 = rbx == rsi_4
        cond:34_1 = rbx == rsi_4
        cond:37_1 = rbx == rsi_4
        cond:38_1 = rbx == rsi_4
        cond:41_1 = rbx == rsi_4
        cond:44_1 = rbx == rsi_4
    while (rbx s< rsi_4)
    
    r11 = arg20
    r10 = arg19
    cond:0 = rbx u< arg21
    cond:2 = rbx u< arg21
    cond:5 = rbx u< arg21
    cond:12 = rbx == arg21
    cond:13 = rbx u< arg21
    cond:18 = rbx == arg21
    cond:19 = rbx u< arg21
    cond:24 = rbx == arg21
    cond:25 = rbx == arg21
    cond:26 = rbx == arg21
    cond:31 = rbx == arg21
    cond:32 = rbx == arg21
    cond:35 = rbx == arg21
    cond:36 = rbx == arg21
    cond:39 = rbx == arg21
    cond:40 = rbx == arg21
    cond:42 = rbx == arg21
    cond:43 = rbx == arg21
    cond:45 = rbx == arg21
    cond:46 = rbx == arg21
    cond:47 = rbx == arg21
    cond:48 = rbx == arg21
    cond:49 = rbx == arg21
    cond:50 = rbx == arg21
    cond:51 = rbx == arg21
    
    if (rbx s< arg21)
        goto label_14004881d
zmm0 = _mm256_hadd_ps(var_320, var_320)
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm1 = _mm256_hadd_ps(var_300_1, var_300_1)
zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
zmm0[0].o = zmm0[0].o f+ zmm3[0]
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
arg6 = _mm256_hadd_ps(var_2e0, var_2e0)
arg6 = _mm256_hadd_ps(arg6, arg6)
zmm1[0].o = zmm1[0].o f+ zmm3[0]
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x10)
zmm1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
zmm1[0].o = arg6[0].o f+ zmm1[0]
arg6[0].o = __vmovsd_xmmdq_memq(*r11)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x20)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, r11[1].d, 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
*r11 = zmm0[0]
*(r11 + 4) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
r11[1].d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0 = _mm256_hadd_ps(arg13, arg13)
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
zmm0[0].o = zmm0[0].o f+ zmm1[0]
zmm0[0].o = zmm0[0].o f+ *r10
*r10 = zmm0[0]
arg8[0].o = var_a8
arg9[0].o = var_98
arg10[0].o = var_88
arg11[0].o = var_78
arg12[0].o = var_68
arg13[0].o = var_58
arg14[0].o = var_48
arg15[0].o = var_38
_mm256_zeroupper()
