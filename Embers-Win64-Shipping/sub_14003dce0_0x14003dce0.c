// 函数: sub_14003dce0
// 地址: 0x14003dce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38 = arg15[0].o
int128_t var_58 = arg14[0].o
int128_t var_68 = arg13[0].o
int128_t var_78 = arg12[0].o
int128_t var_88 = arg11[0].o
int128_t var_98 = arg10[0].o
int128_t var_a8 = arg9[0].o
int128_t var_b8 = arg8[0].o
int128_t var_c8 = arg7[0].o
float zmm0[0x8]
zmm0[0].o = *arg22
float zmm3[0x8]
zmm3[0].o = arg18
float zmm14[0x8]
zmm14[0].o = zx.o(0)
float var_2c0[0x8] = zmm14
int32_t rsi_4 = ((arg21 s>> 0x1f u>> 0x1d) + arg21) & 0xfffffff8
float var_2e0_1[0x8] = zmm14
float var_300[0x8] = zmm14
uint64_t var_390[0x2] = zmm0[0].o
int32_t* r10
double* r11
float zmm1[0x8]
float zmm2[0x8]
float zmm22[0x8]
uint32_t rbx
float zmm5[0x8]
float zmm16[0x8]
float zmm17[0x8]
float zmm18[0x8]
float zmm19[0x8]
float zmm20[0x8]
float zmm23[0x8]
float zmm24[0x8]
float zmm25[0x8]
float zmm26[0x8]
bool cond:1
bool cond:3
bool cond:5
bool cond:9
bool cond:10
bool cond:17
bool cond:18
bool cond:24
bool cond:25
bool cond:26
bool cond:30
bool cond:31
bool cond:34
bool cond:35
bool cond:38
bool cond:39
bool cond:42
bool cond:43
bool cond:45
bool cond:46
bool cond:48
bool cond:49
bool cond:50
bool cond:51
bool cond:52

if (rsi_4 s<= 0)
    rbx = 0
    r11 = arg20
    r10 = arg19
    cond:1 = 0 u< arg21
    cond:3 = 0 u< arg21
    cond:5 = 0 u< arg21
    cond:9 = 0 == arg21
    cond:10 = 0 u< arg21
    cond:17 = 0 == arg21
    cond:18 = 0 u< arg21
    cond:24 = 0 == arg21
    cond:25 = 0 == arg21
    cond:26 = 0 == arg21
    cond:30 = 0 == arg21
    cond:31 = 0 == arg21
    cond:34 = 0 == arg21
    cond:35 = 0 == arg21
    cond:38 = 0 == arg21
    cond:39 = 0 == arg21
    cond:42 = 0 == arg21
    cond:43 = 0 == arg21
    cond:45 = 0 == arg21
    cond:46 = 0 == arg21
    cond:48 = 0 == arg21
    cond:49 = 0 == arg21
    cond:50 = 0 == arg21
    cond:51 = 0 == arg21
    cond:52 = 0 == arg21
    
    if (0 s< arg21)
    label_14003e457:
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_mask_set1_epi32(arg5, rbx), data_142fc93a0)
        uint64_t k1_27 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, 
            _mm256_mask_set1_epi32(arg5, arg21), zmm0)
        zmm1 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 3)
        int64_t k2_2
        char temp0_132
        temp0_132, k2_2 = _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_27), 
            *(arg4 + (zmm1[0].q << 2)))
        zmm2 = temp0_132
        zmm0 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0xc)
        zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
        int64_t k2_3 = __kmovq_maskmskw_masku64_avx512(k1_27)
        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        int64_t k2_4
        char temp0_136
        temp0_136, k2_4 = _mm256_mmask_i32gather_ps(k2_3, *(arg4 + zmm1[0].q))
        zmm3 = temp0_136
        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
        int64_t k2_5 = __kmovq_maskmskw_masku64_avx512(k1_27)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        int64_t k2_6
        char temp0_140
        temp0_140, k2_6 = _mm256_mmask_i32gather_ps(k2_5, *(arg4 + zmm0[0].q))
        arg6 = temp0_140
        float var_1e0_1[0x8] = zmm2
        float var_1c0_1[0x8] = zmm3
        float var_180_1[0x8] = zmm1
        zmm0 = _mm256_broadcast_ss(arg3[3])
        float var_380_2[0x8] = zmm0
        float var_360_2[0x8] = zmm0
        float var_340_2[0x8] = zmm0
        float var_320_2[0x8] = zmm0
        zmm5 = _mm256_broadcast_ss(arg3[1])
        zmm16 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[2])
        zmm17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg3)
        zmm1 = _mm256_mul_ps(zmm0, zmm1)
        arg8[0].o = __vpbroadcastw_xmmdq_memw(0xff)
        zmm18 = _mm256_mask_mul_ps(arg5, zmm3, zmm16)
        zmm19 = _mm256_mask_mul_ps(arg5, arg6, zmm17)
        zmm20 = _mm256_mask_mul_ps(arg5, zmm2, zmm5)
        zmm18 = _mm256_mask3_fmsub_ps(zmm18, arg5, zmm5, arg6)
        zmm19 = _mm256_mask3_fmsub_ps(zmm19, arg5, zmm16, zmm2)
        zmm20 = _mm256_mask3_fmsub_ps(zmm20, arg5, zmm17, zmm3)
        zmm1 = _mm256_sub_ps(zmm1, zmm1)
        zmm2 = _mm256_mask_add_ps(arg5, zmm18, zmm18)
        zmm3 = _mm256_mask_add_ps(arg5, zmm19, zmm19)
        zmm5 = _mm256_mask_add_ps(arg5, zmm20, zmm20)
        zmm1 = _mm256_add_ps(zmm1, zmm1)
        float var_2a0_2[0x8] = zmm2
        float var_280_2[0x8] = zmm3
        float var_260_2[0x8] = zmm5
        float var_240_2[0x8] = zmm1
        zmm16 = _mm256_mask_load_ps(arg5, var_1e0_1)
        arg6[0].o = _mm_movm_epi16(k1_27)
        zmm16 = _mm256_mask3_fmadd_ps(zmm16, arg5, zmm0, zmm2)
        zmm17 = _mm256_mask_load_ps(arg5, var_1c0_1)
        zmm18 = _mm256_mask_load_ps(arg5, arg6)
        zmm17 = _mm256_mask3_fmadd_ps(zmm17, arg5, zmm0, zmm3)
        zmm18 = _mm256_mask3_fmadd_ps(zmm18, arg5, zmm0, zmm5)
        zmm1 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm1, zmm0, var_180_1)
        int256_t var_160_1 = _mm256_mask_store_ps(arg5, zmm16)
        int256_t var_140_1 = _mm256_mask_store_ps(arg5, zmm17)
        int256_t var_120_1 = _mm256_mask_store_ps(arg5, zmm18)
        float var_100_1[0x8] = zmm1
        zmm0 = _mm256_broadcast_ss(arg3[1])
        zmm1 = _mm256_broadcast_ss(arg3[2])
        zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg3)
        arg7[0].o = arg6[0].o & arg8[0].o
        zmm20 = _mm256_mask_mul_ps(arg5, zmm3, zmm1)
        arg16 = _mm256_mask_mul_ps(arg5, zmm5, zmm19)
        zmm22 = _mm256_mask_mul_ps(arg5, zmm2, zmm0)
        zmm20 = _mm256_mask3_fmsub_ps(zmm20, arg5, zmm5, zmm0)
        arg16 = _mm256_mask3_fmsub_ps(arg16, arg5, zmm2, zmm1)
        zmm22 = _mm256_mask3_fmsub_ps(zmm22, arg5, zmm3, zmm19)
        zmm0 = _mm256_mask_add_ps(arg5, zmm16, zmm20)
        zmm1 = _mm256_mask_add_ps(arg5, zmm17, arg16)
        zmm2 = _mm256_mask_add_ps(arg5, zmm18, zmm22)
        zmm26 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm0, arg3[4])
        zmm24 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm1, arg3[5])
        zmm25 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm2, arg3[6])
        zmm1 = _mm256_broadcast_ss(*arg2)
        zmm16 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg2[1])
        zmm17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg2[2])
        zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg1)
        zmm22 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[1])
        zmm23 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[2])
        int64_t k0_15 = _mm256_cmp_ps_mask(arg5, zmm26, zmm1, 2)
        zmm5[0].o = _mm_movm_epi16(k0_15)
        zmm0[0].o = zmm5[0].o ^ data_142fc92e0
        zmm2[0].o = zmm0[0].o & arg6[0].o
        zmm0[0].o = zmm2[0].o & arg8[0].o
        int64_t k0_16 =
            __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_15, zmm0[0].o, arg7[0].o)
        _kortest_mask8_u8(k0_16, k0_16)
        
        if (not(cond:1))
            k0_16 = _mm256_cmp_ps_mask(_mm256_cmp_ps_mask(k1_27, zmm26, zmm1, 2), zmm24, zmm16, 2)
            zmm5[0].o = _mm_movm_epi16(k0_16)
            zmm2[0].o = zmm5[0].o ^ data_142fc92e0
            zmm2[0].o &= arg6[0].o
        
        zmm3[0].o = zmm2[0].o & arg8[0].o
        int64_t k0_17 =
            __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_16, zmm3[0].o, arg7[0].o)
        _kortest_mask8_u8(k0_17, k0_17)
        
        if (not(cond:3))
            int64_t k2_8 = _mm256_cmp_ps_mask(k0_17, zmm25, zmm17, 2)
            zmm2[0].o = zmm5[0].o & arg6[0].o
            zmm5[0].o = _mm_mask_mov_epi16(k2_8, zmm2[0].o)
            zmm2[0].o = zmm5[0].o ^ arg6[0].o
        
        zmm2[0].o &= arg8[0].o
        int64_t k0_18 =
            __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_17, zmm2[0].o, arg7[0].o)
        _kortest_mask8_u8(k0_18, k0_18)
        
        if (not(cond:5))
            zmm5[0].o &= arg6[0].o
            zmm2[0].o = zmm5[0].o & arg8[0].o
            int64_t k0_19 = _mm256_cmp_ps_mask(k0_18, zmm19, zmm26, 2)
            arg7[0].o = _mm_movm_epi16(k0_19)
            zmm3[0].o = arg7[0].o ^ data_142fc92e0
            zmm3[0].o &= zmm5[0].o
            zmm0[0].o = zmm3[0].o & arg8[0].o
            int64_t k0_20 =
                __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_19, zmm0[0].o, zmm2[0].o)
            _kortest_mask8_u8(k0_20, k0_20)
            
            if (not(cond:10))
                int64_t k2_9 = _mm256_cmp_ps_mask(k0_20, zmm22, zmm24, 2)
                zmm0[0].o = zmm5[0].o & arg7[0].o
                arg7[0].o = _mm_mask_mov_epi16(k2_9, zmm0[0].o)
                zmm3[0].o = arg7[0].o ^ zmm5[0].o
            
            zmm0[0].o = zmm3[0].o & arg8[0].o
            k0_18 = __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_20, zmm0[0].o, zmm2[0].o)
            _kortest_mask8_u8(k0_18, k0_18)
            
            if (not(cond:18))
                int64_t k2_10 = _mm256_cmp_ps_mask(k0_18, zmm23, zmm25, 2)
                zmm0[0].o = arg7[0].o & zmm5[0].o
                arg7[0].o = _mm_mask_mov_epi16(k2_10, zmm0[0].o)
            
            zmm5[0].o &= arg7[0].o
        
        arg16 = _mm256_mask_sub_ps(k0_18, zmm26, zmm1)
        zmm1 = _mm256_mask_sub_ps(k0_18, zmm24, zmm16)
        zmm18 = _mm256_mask_sub_ps(k0_18, zmm25, zmm17)
        zmm20 = _mm256_mask_sub_ps(k0_18, zmm19, zmm26)
        zmm19 = _mm256_mask_sub_ps(k0_18, zmm22, zmm24)
        zmm17 = _mm256_mask_sub_ps(k0_18, zmm23, zmm25)
        zmm0[0].o = zmm5[0].o & arg6[0].o
        int64_t k0_21 =
            __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_18, zmm0[0].o, data_142fc92e0)
        _kortest_mask8_u8(k0_21, k0_21)
        
        if (not(cond:9))
            zmm16 = _mm256_mask_max_ps(k0_21, zmm20, arg16)
            zmm23 = _mm256_mask_max_ps(k0_21, zmm19, zmm1)
            zmm22 = _mm256_mask_max_ps(k0_21, zmm17, zmm18)
            int64_t k0_22 = _mm256_cmp_ps_mask(k0_21, zmm23, zmm16, 1)
            zmm2[0].o = _mm_movm_epi16(k0_22)
            zmm3[0].o = zmm5[0].o & zmm2[0].o
            zmm0[0].o = zmm3[0].o & arg6[0].o
            int64_t k0_23 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_22, zmm0[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_23, k0_23)
            
            if (not(cond:17))
                zmm3[0].o =
                    _mm_mask_mov_epi16(_mm256_cmp_ps_mask(k0_23, zmm22, zmm16, 5), zmm3[0].o)
                zmm0[0].o = zmm3[0].o & arg6[0].o
                k0_23 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_23, zmm0[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_23, k0_23)
                
                if (not(cond:26))
                    zmm16 = _mm256_mask_blend_ps(
                        __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_23, zmm3[0].o, 
                            data_142fc92e0), 
                        zmm22, zmm16)
            
            zmm0[0].o = zmm2[0].o ^ data_142fc92e0
            zmm2[0].o = zmm5[0].o & zmm0[0].o
            zmm0[0].o = zmm2[0].o & arg6[0].o
            k0_21 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_23, zmm0[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_21, k0_21)
            
            if (not(cond:25))
                int64_t k0_24 = _mm256_cmp_ps_mask(k0_21, zmm22, zmm23, 1)
                arg7[0].o = _mm_movm_epi16(k0_24)
                zmm3[0].o = zmm2[0].o & arg7[0].o
                zmm0[0].o = zmm3[0].o & arg6[0].o
                int64_t k0_25 = _mm_mask_test_epi16_mask(k0_24, zmm0[0].o, arg8[0].o)
                _kortest_mask8_u8(k0_25, k0_25)
                
                if (not(cond:31))
                    zmm16 = _mm256_mask_mov_ps(k0_25, 
                        _mm256_mask_mov_ps(_mm_mask_testn_epi16_mask(k0_25, zmm3[0].o, arg8[0].o), 
                            zmm16))
                
                zmm0[0].o = arg7[0].o ^ data_142fc92e0
                zmm2[0].o &= zmm0[0].o
                zmm0[0].o = zmm2[0].o & arg6[0].o
                k0_21 = _mm_mask_test_epi16_mask(k0_25, zmm0[0].o, arg8[0].o)
                _kortest_mask8_u8(k0_21, k0_21)
                
                if (not(cond:35))
                    zmm22 = _mm256_mask_mov_ps(
                        __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_21, zmm2[0].o, 
                            data_142fc92e0), 
                        zmm16)
                    zmm16 = _mm256_mask_mov_ps(k0_21, zmm22)
        
        zmm22[0].o = _mm_mask_load_epi64(k0_21, var_390)
        arg8[0].o = zmm5[0].o ^ data_142fc92e0
        zmm0[0].o = arg8[0].o & arg6[0].o
        arg5 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_21, zmm0[0].o, data_142fc92e0)
        _kortest_mask8_u8(arg5, arg5)
        
        if (cond:24)
            arg7[0].o = arg18
        else
            zmm0[0].o = zx.o(0)
            int64_t k0_26 = _mm256_cmp_ps_mask(arg5, zmm0, arg16, 1)
            zmm2[0].o = _mm_movm_epi16(k0_26)
            zmm3[0].o = zmm2[0].o & arg8[0].o
            zmm0[0].o = zmm3[0].o & arg6[0].o
            int64_t k0_27 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_26, zmm0[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_27, k0_27)
            
            if (not(cond:30))
                var_380_2 = _mm256_mask_storeu_ps(
                    __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_27, zmm3[0].o, 
                        data_142fc92e0), 
                    arg16)
            
            zmm0[0].o = zmm2[0].o ^ data_142fc92e0
            zmm2[0].o = zmm0[0].o & arg8[0].o
            zmm0[0].o = zmm2[0].o & arg6[0].o
            int64_t k0_28 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_27, zmm0[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_28, k0_28)
            
            if (not(cond:34))
                zmm0[0].o = zx.o(0)
                int64_t k0_29 = _mm256_cmp_ps_mask(k0_28, zmm0, zmm20, 1)
                zmm3[0].o = _mm_movm_epi16(k0_29)
                arg7[0].o = zmm2[0].o & zmm3[0].o
                zmm0[0].o = arg7[0].o & arg6[0].o
                int64_t k0_30 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_29, zmm0[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_30, k0_30)
                
                if (not(cond:39))
                    zmm0 = __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_30, zmm20, 0x80000000)
                    var_380_2 = _mm256_mask_storeu_ps(
                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_30, arg7[0].o, 
                            data_142fc92e0), 
                        zmm0)
                
                zmm0[0].o = zmm3[0].o ^ data_142fc92e0
                zmm2[0].o &= zmm0[0].o
                zmm0[0].o = zmm2[0].o & arg6[0].o
                k0_28 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_30, zmm0[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_28, k0_28)
                
                if (not(cond:43))
                    int64_t k2_17 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_28, 
                        zmm2[0].o, data_142fc92e0)
                    zmm0[0].o = zx.o(0)
                    var_380_2 = _mm256_mask_storeu_ps(k2_17, zmm0)
            
            zmm0[0].o = zx.o(0)
            int64_t k0_31 = _mm256_cmp_ps_mask(k0_28, zmm0, zmm1, 1)
            zmm2[0].o = _mm_movm_epi16(k0_31)
            zmm3[0].o = zmm2[0].o & arg8[0].o
            zmm0[0].o = zmm3[0].o & arg6[0].o
            int64_t k0_32 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_31, zmm0[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_32, k0_32)
            
            if (not(cond:38))
                var_360_2 = _mm256_mask_storeu_ps(
                    __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_32, zmm3[0].o, 
                        data_142fc92e0), 
                    zmm1)
            
            zmm0[0].o = zmm2[0].o ^ data_142fc92e0
            zmm1[0].o = zmm0[0].o & arg8[0].o
            zmm0[0].o = zmm1[0].o & arg6[0].o
            int64_t k0_33 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_32, zmm0[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_33, k0_33)
            arg7[0].o = arg18
            
            if (not(cond:42))
                zmm0[0].o = zx.o(0)
                int64_t k0_34 = _mm256_cmp_ps_mask(k0_33, zmm0, zmm19, 1)
                zmm2[0].o = _mm_movm_epi16(k0_34)
                zmm3[0].o = zmm1[0].o & zmm2[0].o
                zmm0[0].o = zmm3[0].o & arg6[0].o
                int64_t k0_35 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_34, zmm0[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_35, k0_35)
                
                if (not(cond:46))
                    zmm0 = __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_35, zmm19, 0x80000000)
                    var_360_2 = _mm256_mask_storeu_ps(
                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_35, zmm3[0].o, 
                            data_142fc92e0), 
                        zmm0)
                
                zmm0[0].o = zmm2[0].o ^ data_142fc92e0
                zmm1[0].o &= zmm0[0].o
                zmm0[0].o = zmm1[0].o & arg6[0].o
                k0_33 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_35, zmm0[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_33, k0_33)
                
                if (not(cond:49))
                    int64_t k2_20 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_33, 
                        zmm1[0].o, data_142fc92e0)
                    zmm0[0].o = zx.o(0)
                    var_360_2 = _mm256_mask_storeu_ps(k2_20, zmm0)
            
            zmm0[0].o = zx.o(0)
            int64_t k0_36 = _mm256_cmp_ps_mask(k0_33, zmm0, zmm18, 1)
            zmm1[0].o = _mm_movm_epi16(k0_36)
            zmm2[0].o = zmm1[0].o & arg8[0].o
            zmm0[0].o = zmm2[0].o & arg6[0].o
            int64_t k0_37 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_36, zmm0[0].o, data_142fc92e0)
            _kortest_mask8_u8(k0_37, k0_37)
            
            if (not(cond:45))
                var_340_2 = _mm256_mask_storeu_ps(
                    __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_37, zmm2[0].o, 
                        data_142fc92e0), 
                    zmm18)
            
            zmm0[0].o = zmm1[0].o ^ data_142fc92e0
            zmm1[0].o = zmm0[0].o & arg8[0].o
            zmm0[0].o = zmm1[0].o & arg6[0].o
            arg5 =
                __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_37, zmm0[0].o, data_142fc92e0)
            _kortest_mask8_u8(arg5, arg5)
            
            if (not(cond:48))
                zmm0[0].o = zx.o(0)
                int64_t k0_38 = _mm256_cmp_ps_mask(arg5, zmm0, zmm17, 1)
                zmm2[0].o = _mm_movm_epi16(k0_38)
                zmm3[0].o = zmm1[0].o & zmm2[0].o
                zmm0[0].o = zmm3[0].o & arg6[0].o
                int64_t k0_39 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_38, zmm0[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(k0_39, k0_39)
                
                if (not(cond:50))
                    zmm0 = __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_39, zmm17, 0x80000000)
                    var_340_2 = _mm256_mask_storeu_ps(
                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_39, zmm3[0].o, 
                            data_142fc92e0), 
                        zmm0)
                
                zmm0[0].o = zmm2[0].o ^ data_142fc92e0
                zmm1[0].o &= zmm0[0].o
                zmm0[0].o = zmm1[0].o & arg6[0].o
                arg5 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_39, zmm0[0].o, 
                    data_142fc92e0)
                _kortest_mask8_u8(arg5, arg5)
                
                if (not(cond:52))
                    int64_t k2_23 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, 
                        zmm1[0].o, data_142fc92e0)
                    zmm0[0].o = zx.o(0)
                    var_340_2 = _mm256_mask_storeu_ps(k2_23, zmm0)
            
            zmm1[0].o = zx.o(0)
            zmm2 = var_360_2
            zmm0 = _mm256_fmadd_ps(
                _mm256_fmadd_ps(_mm256_fmadd_ps(var_380_2, var_380_2, zmm1), zmm2, zmm2), 
                var_340_2, var_340_2)
            zmm1 = _mm256_mask_rsqrt14_ps(arg5, zmm0)
            zmm0 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                _mm256_mul_ps(zmm1, 
                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(_mm256_mul_ps(zmm0, zmm1), 
                        arg5, zmm1, 0x40400000)), 
                0x3f000000)
            zmm1 = _mm256_mask_rcp14_ps(arg5, zmm0)
            _mm256_mul_ps(zmm1, 
                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm0, arg5, zmm1, 0x40000000))
            zmm1[0].o = zmm5[0].o & data_142fc92e0
            zmm16 = _mm256_mask_mov_ps(arg5, 
                _mm256_mask_mov_ps(
                    __vpcmpeqw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, zmm1[0].o, 
                        data_142fc92e0), 
                    zmm16))
        
        zmm1 = _mm256_mask_sub_ps(arg5, zmm16, _mm256_broadcastss_ps(arg7[0].o))
        int64_t k1_28 =
            __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k1_27, zmm1, 0xb8d1b717, 1)
        _kortest_mask8_u8(k1_28, k1_28)
        
        if (not(cond:51))
            zmm26 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm26, arg5, zmm1, var_300)
            zmm24 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm24, arg5, zmm1, var_2e0_1)
            zmm25 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm25, arg5, zmm1, var_2c0)
            var_300 = _mm256_mask_storeu_ps(k1_28, zmm26)
            var_2e0_1 = _mm256_mask_storeu_ps(k1_28, zmm24)
            var_2c0 = _mm256_mask_storeu_ps(k1_28, zmm25)
            zmm14 = _mm256_mask_add_ps(k1_28, zmm14, zmm1)
    else
        zmm22[0].o = _mm_mask_load_epi64(arg5, var_390)
else
    zmm25 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[3])
    zmm0[0].o = *arg3
    zmm1[0].o = arg3[1]
    zmm2[0].o = arg3[2]
    arg13 = _mm256_broadcast_ss(*arg2)
    float var_200_1[0x8] = _mm256_broadcast_ss(arg2[1])
    arg6 = _mm256_broadcast_ss(arg2[2])
    float var_220_1[0x8] = arg6
    zmm17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg1)
    zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[1])
    zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[2])
    zmm20 = _mm256_mask_broadcastss_ps(arg5, zmm3[0].o)
    arg16[0].o = _mm_mask_xor_ps(arg5, arg16[0].o, arg16[0].o)
    rbx = 0
    bool cond:2_1 = true
    bool cond:4_1 = true
    bool cond:6_1 = true
    bool cond:7_1 = true
    bool cond:8_1 = true
    bool cond:11_1 = true
    bool cond:12_1 = true
    bool cond:13_1 = true
    bool cond:14_1 = true
    bool cond:15_1 = true
    bool cond:16_1 = false
    bool cond:19_1 = true
    bool cond:20_1 = false
    bool cond:21_1 = true
    bool cond:22_1 = true
    bool cond:23_1 = false
    bool cond:27_1 = true
    bool cond:28_1 = true
    bool cond:29_1 = true
    bool cond:32_1 = true
    bool cond:33_1 = true
    bool cond:36_1 = true
    bool cond:37_1 = true
    bool cond:40_1 = true
    bool cond:41_1 = true
    bool cond:44_1 = true
    bool cond:47_1 = true
    zmm22 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0xc)
    zmm26 = _mm256_mask_broadcastss_ps(arg5, zmm1[0].o)
    float zmm27[0x8] = _mm256_mask_broadcastss_ps(arg5, zmm2[0].o)
    float zmm28[0x8] = _mm256_mask_broadcastss_ps(arg5, zmm0[0].o)
    zmm2[0].o = data_142fc92e0
    arg8[0].o = data_142fc92e0
    zmm14[0].o = zx.o(0)
    
    do
        zmm0[0].o = zx.o(rbx)
        zmm0[0].o = _mm_mask_mullo_epi32(arg5, zmm0[0].o, zmm22[0].o)
        zmm0 = _mm256_broadcastd_epi32(zmm0[0])
        zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93c0)
        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        int64_t k1_2
        char temp0_18
        temp0_18, k1_2 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + zmm1[0].q))
        zmm3 = temp0_18
        zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93e0)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        int64_t k1_4
        char temp0_21
        temp0_21, k1_4 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + zmm1[0].q))
        arg6 = temp0_21
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc9400)
        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        int64_t k1_6
        char temp0_24
        temp0_24, k1_6 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + zmm0[0].q))
        zmm1 = temp0_24
        float var_2a0_1[0x8] = zmm3
        float var_280_1[0x8] = arg6
        float var_260_1[0x8] = zmm1
        int256_t var_240_1 = _mm256_mask_store_ps(arg5, arg16)
        float var_380_1[0x8] = _mm256_mask_store_ps(arg5, zmm25)
        float var_360_1[0x8] = _mm256_mask_store_ps(arg5, zmm25)
        float var_340_1[0x8] = _mm256_mask_store_ps(arg5, zmm25)
        int256_t var_320_1 = _mm256_mask_store_ps(arg5, zmm25)
        zmm0 = _mm256_mask_mul_ps(arg5, arg6, zmm27)
        zmm5 = _mm256_mask_mul_ps(arg5, zmm1, zmm28)
        zmm16 = _mm256_mask_mul_ps(arg5, zmm3, zmm26)
        zmm1 = _mm256_mask3_fmsub_ps(zmm1, arg5, zmm26, zmm0)
        zmm3 = _mm256_mask3_fmsub_ps(zmm3, arg5, zmm27, zmm5)
        arg6 = _mm256_mask3_fmsub_ps(arg6, arg5, zmm28, zmm16)
        zmm0 = _mm256_add_ps(zmm1, zmm1)
        zmm1 = _mm256_add_ps(zmm3, zmm3)
        zmm3 = _mm256_add_ps(arg6, arg6)
        arg6 = _mm256_mask3_fmadd_ps(var_2a0_1, arg5, zmm25, zmm0)
        zmm5 = _mm256_mask3_fmadd_ps(var_280_1, arg5, zmm25, zmm1)
        zmm16 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_260_1), arg5, zmm25, zmm3)
        zmm23 = _mm256_mask_mul_ps(arg5, zmm1, zmm27)
        zmm24 = _mm256_mask_mul_ps(arg5, zmm3, zmm28)
        float zmm29[0x8] = _mm256_mask_mul_ps(arg5, zmm0, zmm26)
        zmm3 = _mm256_add_ps(arg6, _mm256_mask3_fmsub_ps(zmm3, arg5, zmm26, zmm23))
        zmm0 = _mm256_add_ps(zmm5, _mm256_mask3_fmsub_ps(zmm0, arg5, zmm27, zmm24))
        zmm1 = _mm256_mask_add_ps(arg5, zmm16, _mm256_mask3_fmsub_ps(zmm1, arg5, zmm28, zmm29))
        arg7 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm3, arg3[4])
        zmm16 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm0, arg3[5])
        arg9 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm1, arg3[6])
        int64_t k1_7 = _mm256_cmp_ps_mask(arg5, arg7, arg13, 2)
        _kortest_mask8_u8(k1_7, k1_7)
        
        if (not(cond:2_1))
            k1_7 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(
                _mm256_cmp_ps_mask(arg5, arg7, arg13, 2), zmm16, arg2[1], 2)
            _kortest_mask8_u8(k1_7, k1_7)
        
        if (cond:2_1 || cond:4_1)
            zmm1[0].o = _mm_movm_epi16(k1_7)
        else
            int64_t k1_9 =
                __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k1_7, arg9, arg2[2], 2)
            zmm1[0].o = _mm_movm_epi16(k1_9)
            _kortest_mask8_u8(k1_9, k1_9)
            
            if (not(cond:8_1))
                zmm23 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg1)
                int64_t k0 = _mm256_cmp_ps_mask(arg5, zmm23, arg7, 2)
                zmm0[0].o = _mm_movm_epi16(k0)
                zmm5[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                zmm3[0].o = zmm0[0].o ^ zmm2[0].o
                arg6[0].o = zmm1[0].o & zmm5[0].o
                zmm3[0].o &= zmm1[0].o
                arg8[0].o = zmm3[0].o & zmm5[0].o
                int64_t k0_1 =
                    __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0, arg8[0].o, arg6[0].o)
                _kortest_mask8_u8(k0_1, k0_1)
                
                if (not(cond:16_1))
                    zmm0 = _mm256_broadcast_ss(arg1[1])
                    k0_1 =
                        _mm256_cmp_ps_mask(_mm256_cmp_ps_mask(k1_9, zmm23, arg7, 2), zmm0, zmm16, 2)
                    zmm0[0].o = _mm_movm_epi16(k0_1)
                    zmm3[0].o = zmm0[0].o ^ zmm2[0].o
                    zmm3[0].o &= zmm1[0].o
                
                zmm3[0].o &= zmm5[0].o
                arg5 = __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(k0_1, zmm3[0].o, arg6[0].o)
                _kortest_mask8_u8(arg5, arg5)
                
                if (not(cond:23_1))
                    zmm3 = _mm256_broadcast_ss(arg1[2])
                    int64_t k1_11 = _mm256_cmp_ps_mask(arg5, zmm3, arg9, 2)
                    zmm0[0].o &= zmm1[0].o
                    zmm0[0].o = _mm_mask_mov_epi16(k1_11, zmm0[0].o)
                
                arg8[0].o = data_142fc92e0
                zmm1[0].o &= zmm0[0].o
        
        zmm29 = _mm256_mask_sub_ps(arg5, arg7, arg13)
        arg14 = __vsubps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm16, var_200_1)
        arg11 = __vsubps_ymmqq_ymmqq_memqq(arg9, var_220_1)
        arg15 = _mm256_mask_sub_ps(arg5, zmm17, arg7)
        arg12 = _mm256_mask_sub_ps(arg5, zmm18, zmm16)
        arg10 = _mm256_mask_sub_ps(arg5, zmm19, arg9)
        int64_t k0_2 = _mm_mask_test_epi16_mask(arg5, zmm1[0].o, zmm2[0].o)
        _kortest_mask8_u8(k0_2, k0_2)
        
        if (cond:15_1)
        label_14003e1d3:
            zmm0[0].o = zmm1[0].o & zmm2[0].o
            arg5 = _mm_cmp_epi16_mask(k0_2, zmm0[0].o, arg8[0].o, 4)
            _kortest_mask8_u8(arg5, arg5)
            
            if (not(cond:6_1))
            label_14003e1e8:
                zmm1[0].o ^= arg8[0].o
                int64_t k0_10 = _mm256_cmp_ps_mask(arg5, arg16, zmm29, 1)
                zmm3[0].o = _mm_movm_epi16(k0_10)
                arg6[0].o = zmm3[0].o & zmm1[0].o
                int64_t k1_16 = _mm_mask_test_epi16_mask(k0_10, arg6[0].o, zmm2[0].o)
                _kortest_mask8_u8(k1_16, k1_16)
                
                if (not(cond:12_1))
                    var_380_1 = _mm256_mask_storeu_ps(k1_16, zmm29)
                
                zmm3[0].o ^= zmm2[0].o
                arg6[0].o = zmm3[0].o & zmm1[0].o
                int64_t k0_11 = _mm_mask_test_epi16_mask(k0_10, arg6[0].o, zmm2[0].o)
                _kortest_mask8_u8(k0_11, k0_11)
                
                if (not(cond:19_1))
                    k0_11 = _mm256_cmp_ps_mask(k0_11, arg16, arg15, 1)
                    zmm3[0].o = _mm_movm_epi16(k0_11)
                    zmm5[0].o = arg6[0].o & zmm3[0].o
                    int64_t k1_17 = _mm_mask_test_epi16_mask(k0_11, zmm5[0].o, zmm2[0].o)
                    _kortest_mask8_u8(k1_17, k1_17)
                    
                    if (not(cond:28_1))
                        zmm5 =
                            __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_11, arg15, 0x80000000)
                        var_380_1 = _mm256_mask_storeu_ps(k1_17, zmm5)
                    
                    zmm3[0].o ^= zmm2[0].o
                    zmm3[0].o &= arg6[0].o
                    int64_t k1_18 = _mm_mask_test_epi16_mask(k0_11, zmm3[0].o, zmm2[0].o)
                    _kortest_mask8_u8(k1_18, k1_18)
                    
                    if (not(cond:33_1))
                        var_380_1 = _mm256_mask_storeu_ps(k1_18, arg16)
                
                int64_t k0_12 = _mm256_cmp_ps_mask(k0_11, arg16, arg14, 1)
                zmm3[0].o = _mm_movm_epi16(k0_12)
                arg6[0].o = zmm3[0].o & zmm1[0].o
                int64_t k1_19 = _mm_mask_test_epi16_mask(k0_12, arg6[0].o, zmm2[0].o)
                _kortest_mask8_u8(k1_19, k1_19)
                
                if (not(cond:27_1))
                    var_360_1 = _mm256_mask_storeu_ps(k1_19, arg14)
                
                zmm3[0].o ^= zmm2[0].o
                arg6[0].o = zmm3[0].o & zmm1[0].o
                int64_t k0_13 = _mm_mask_test_epi16_mask(k0_12, arg6[0].o, zmm2[0].o)
                _kortest_mask8_u8(k0_13, k0_13)
                
                if (not(cond:32_1))
                    k0_13 = _mm256_cmp_ps_mask(k0_13, arg16, arg12, 1)
                    zmm3[0].o = _mm_movm_epi16(k0_13)
                    zmm5[0].o = arg6[0].o & zmm3[0].o
                    int64_t k1_20 = _mm_mask_test_epi16_mask(k0_13, zmm5[0].o, zmm2[0].o)
                    _kortest_mask8_u8(k1_20, k1_20)
                    
                    if (not(cond:37_1))
                        var_360_1 = _mm256_mask_storeu_ps(k1_20, 
                            __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_13, arg12, 0x80000000))
                    
                    zmm3[0].o ^= zmm2[0].o
                    zmm3[0].o &= arg6[0].o
                    int64_t k1_21 = _mm_mask_test_epi16_mask(k0_13, zmm3[0].o, zmm2[0].o)
                    _kortest_mask8_u8(k1_21, k1_21)
                    
                    if (not(cond:41_1))
                        var_360_1 = _mm256_mask_storeu_ps(k1_21, arg16)
                
                int64_t k0_14 = _mm256_cmp_ps_mask(k0_13, arg16, arg11, 1)
                zmm3[0].o = _mm_movm_epi16(k0_14)
                arg6[0].o = zmm3[0].o & zmm1[0].o
                int64_t k1_22 = _mm_mask_test_epi16_mask(k0_14, arg6[0].o, zmm2[0].o)
                _kortest_mask8_u8(k1_22, k1_22)
                
                if (not(cond:36_1))
                    var_340_1 = _mm256_mask_storeu_ps(k1_22, arg11)
                
                zmm3[0].o ^= zmm2[0].o
                zmm1[0].o &= zmm3[0].o
                arg5 = _mm_mask_test_epi16_mask(k0_14, zmm1[0].o, zmm2[0].o)
                _kortest_mask8_u8(arg5, arg5)
                
                if (not(cond:40_1))
                    arg5 = _mm256_cmp_ps_mask(arg5, arg16, arg10, 1)
                    zmm3[0].o = _mm_movm_epi16(arg5)
                    arg6[0].o = zmm1[0].o & zmm3[0].o
                    int64_t k1_23 = _mm_mask_test_epi16_mask(arg5, arg6[0].o, zmm2[0].o)
                    _kortest_mask8_u8(k1_23, k1_23)
                    
                    if (not(cond:44_1))
                        var_340_1 = _mm256_mask_storeu_ps(k1_23, 
                            __vxorps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg10, 0x80000000))
                    
                    zmm3[0].o ^= zmm2[0].o
                    zmm1[0].o &= zmm3[0].o
                    int64_t k1_24 = _mm_mask_test_epi16_mask(arg5, zmm1[0].o, zmm2[0].o)
                    _kortest_mask8_u8(k1_24, k1_24)
                    
                    if (not(cond:47_1))
                        var_340_1 = _mm256_mask_storeu_ps(k1_24, arg16)
                
                arg6 = var_340_1
                zmm1 = _mm256_fmadd_ps(
                    _mm256_fmadd_ps(_mm256_mask3_fmadd_ps(var_380_1, arg5, var_380_1, arg16), 
                        var_360_1, var_360_1), 
                    arg6, arg6)
                zmm3 = _mm256_mask_rsqrt14_ps(arg5, zmm1)
                zmm1 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                    _mm256_mul_ps(zmm3, 
                        __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                            _mm256_mul_ps(zmm1, zmm3), arg5, zmm3, 0x40400000)), 
                    0x3f000000)
                zmm3 = _mm256_mask_rcp14_ps(arg5, zmm1)
                _mm256_mul_ps(zmm3, 
                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm1, arg5, zmm3, 
                        0x40000000))
                zmm1 = _mm256_mask_mov_ps(
                    __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, zmm0[0].o, zmm2[0].o), 
                    arg17)
                arg17 = _mm256_mask_mov_ps(arg5, zmm1)
        else
            arg6 = _mm256_mask_max_ps(k0_2, arg15, zmm29)
            float zmm31[0x8] = _mm256_mask_max_ps(k0_2, arg12, arg14)
            zmm0 = _mm256_max_ps(arg10, arg11)
            int64_t k0_3 = _mm256_cmp_ps_mask(k0_2, zmm31, arg6, 1)
            zmm23[0].o = _mm_movm_epi16(k0_3)
            zmm24[0].o = _mm_mask_and_epi64(k0_3, zmm1[0].o, zmm23[0].o)
            int64_t k0_4 = _mm_mask_test_epi16_mask(k0_3, zmm24[0].o, zmm2[0].o)
            _kortest_mask8_u8(k0_4, k0_4)
            
            if (not(cond:7_1))
                arg8 = zmm14
                int64_t k0_5 = _mm256_cmp_ps_mask(k0_4, zmm0, arg6, 1)
                zmm5[0].o = _mm_movm_epi16(k0_5)
                zmm3[0].o = _mm_mask_and_epi64(k0_5, zmm24[0].o, zmm5[0].o)
                zmm14[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                int64_t k0_6 = _mm_mask_test_epi16_mask(k0_5, zmm3[0].o, zmm14[0].o)
                _kortest_mask8_u8(k0_6, k0_6)
                
                if (not(cond:14_1))
                    arg6 = _mm256_mask_mov_ps(
                        _mm_mask_testn_epi16_mask(k0_6, zmm3[0].o, zmm14[0].o), arg17)
                    arg17 = _mm256_mask_mov_ps(k0_6, arg6)
                
                zmm3[0].o = zmm5[0].o ^ zmm2[0].o
                zmm3[0].o = _mm_mask_and_epi64(k0_6, zmm24[0].o, zmm3[0].o)
                k0_4 = _mm_mask_test_epi16_mask(k0_6, zmm3[0].o, zmm14[0].o)
                _kortest_mask8_u8(k0_4, k0_4)
                
                if (not(cond:22_1))
                    arg17 = _mm256_mask_blend_ps(
                        _mm_mask_testn_epi16_mask(k0_4, zmm3[0].o, zmm2[0].o), zmm0, arg17)
                
                zmm14 = arg8
            
            zmm3[0].o = _mm_mask_xor_epi64(k0_4, zmm23[0].o, zmm2[0].o)
            zmm5[0].o = zmm1[0].o & zmm3[0].o
            int64_t k0_7 = _mm_mask_test_epi16_mask(k0_4, zmm5[0].o, zmm2[0].o)
            _kortest_mask8_u8(k0_7, k0_7)
            
            if (not(cond:13_1))
                int64_t k0_8 = _mm256_cmp_ps_mask(k0_7, zmm0, zmm31, 1)
                arg6[0].o = _mm_movm_epi16(k0_8)
                arg8[0].o = zmm5[0].o & arg6[0].o
                zmm3[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                int64_t k0_9 = _mm_mask_test_epi16_mask(k0_8, arg8[0].o, zmm3[0].o)
                _kortest_mask8_u8(k0_9, k0_9)
                
                if (not(cond:21_1))
                    arg17 = _mm256_mask_mov_ps(k0_9, 
                        _mm256_mask_mov_ps(_mm_mask_testn_epi16_mask(k0_9, arg8[0].o, zmm3[0].o), 
                            arg17))
                
                arg8[0].o = data_142fc92e0
                arg6[0].o ^= zmm2[0].o
                arg6[0].o &= zmm5[0].o
                k0_2 = _mm_mask_test_epi16_mask(k0_9, arg6[0].o, zmm3[0].o)
                _kortest_mask8_u8(k0_2, k0_2)
                
                if (not(cond:29_1))
                    zmm0 = _mm256_mask_mov_ps(
                        _mm_mask_testn_epi16_mask(k0_2, arg6[0].o, zmm2[0].o), arg17)
                    arg17 = _mm256_mask_mov_ps(k0_2, zmm0)
                
                goto label_14003e1d3
            
            arg8[0].o = data_142fc92e0
            zmm0[0].o = zmm1[0].o & zmm2[0].o
            arg5 = _mm_cmp_epi16_mask(k0_7, zmm0[0].o, arg8[0].o, 4)
            _kortest_mask8_u8(arg5, arg5)
            
            if (cond:20_1)
                goto label_14003e1e8
        
        zmm0 = _mm256_mask_sub_ps(arg5, arg17, zmm20)
        int64_t k1_26 =
            __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(arg5, zmm0, 0xb8d1b717, 1)
        _kortest_mask8_u8(k1_26, k1_26)
        
        if (not(cond:11_1))
            arg7 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg7, zmm0, var_300)
            zmm16 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm16, arg5, zmm0, var_2e0_1)
            arg9 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg9, zmm0, var_2c0)
            var_300 = _mm256_mask_storeu_ps(k1_26, arg7)
            var_2e0_1 = _mm256_mask_storeu_ps(k1_26, zmm16)
            var_2c0 = _mm256_mask_storeu_ps(k1_26, arg9)
            zmm14 = _mm256_mask_add_ps(k1_26, zmm14, zmm0)
        
        rbx += 8
        cond:2_1 = rbx == rsi_4
        cond:4_1 = rbx == rsi_4
        cond:6_1 = rbx == rsi_4
        cond:7_1 = rbx == rsi_4
        cond:8_1 = rbx == rsi_4
        cond:11_1 = rbx == rsi_4
        cond:12_1 = rbx == rsi_4
        cond:13_1 = rbx == rsi_4
        cond:14_1 = rbx == rsi_4
        cond:15_1 = rbx == rsi_4
        cond:16_1 = rbx u< rsi_4
        cond:19_1 = rbx == rsi_4
        cond:20_1 = rbx != rsi_4
        cond:21_1 = rbx == rsi_4
        cond:22_1 = rbx == rsi_4
        cond:23_1 = rbx u< rsi_4
        cond:27_1 = rbx == rsi_4
        cond:28_1 = rbx == rsi_4
        cond:29_1 = rbx == rsi_4
        cond:32_1 = rbx == rsi_4
        cond:33_1 = rbx == rsi_4
        cond:36_1 = rbx == rsi_4
        cond:37_1 = rbx == rsi_4
        cond:40_1 = rbx == rsi_4
        cond:41_1 = rbx == rsi_4
        cond:44_1 = rbx == rsi_4
        cond:47_1 = rbx == rsi_4
    while (rbx s< rsi_4)
    
    r11 = arg20
    r10 = arg19
    cond:1 = rbx u< arg21
    cond:3 = rbx u< arg21
    cond:5 = rbx u< arg21
    cond:9 = rbx == arg21
    cond:10 = rbx u< arg21
    cond:17 = rbx == arg21
    cond:18 = rbx u< arg21
    cond:24 = rbx == arg21
    cond:25 = rbx == arg21
    cond:26 = rbx == arg21
    cond:30 = rbx == arg21
    cond:31 = rbx == arg21
    cond:34 = rbx == arg21
    cond:35 = rbx == arg21
    cond:38 = rbx == arg21
    cond:39 = rbx == arg21
    cond:42 = rbx == arg21
    cond:43 = rbx == arg21
    cond:45 = rbx == arg21
    cond:46 = rbx == arg21
    cond:48 = rbx == arg21
    cond:49 = rbx == arg21
    cond:50 = rbx == arg21
    cond:51 = rbx == arg21
    cond:52 = rbx == arg21
    
    if (rbx s< arg21)
        goto label_14003e457
    
    zmm22[0].o = _mm_mask_load_epi64(arg5, var_390)
int64_t k1_29 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, zmm22[0].o, data_142fc92e0)
zmm0 = _mm256_mask_load_ps(k1_29, var_300)
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
zmm0[0].o = zmm0[0].o f+ zmm1[0]
zmm1 = _mm256_mask_load_ps(k1_29, var_2e0_1)
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
zmm3 = _mm256_mask_load_ps(k1_29, var_2c0)
zmm3 = _mm256_hadd_ps(zmm3, zmm3)
zmm1[0].o = zmm1[0].o f+ zmm2[0]
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x10)
zmm1 = _mm256_hadd_ps(zmm3, zmm3)
zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
zmm1[0].o = zmm1[0].o f+ zmm2[0]
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x20)
zmm1[0].o = __vmovsd_xmmdq_memq(*r11)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, r11[1].d, 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
*r11 = zmm0[0]
*(r11 + 4) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
r11[1].d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0 = _mm256_mask_mov_ps(k1_29, zmm14)
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
zmm0[0].o = zmm0[0].o f+ zmm1[0]
zmm0[0].o = zmm0[0].o f+ *r10
*r10 = zmm0[0]
arg7[0].o = var_c8
arg8[0].o = var_b8
arg9[0].o = var_a8
arg10[0].o = var_98
arg11[0].o = var_88
arg12[0].o = var_78
arg13[0].o = var_68
arg14[0].o = var_58
arg15[0].o = var_38
_mm256_zeroupper()
