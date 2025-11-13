// 函数: sub_14004f390
// 地址: 0x14004f390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15_4 = ((arg12 s>> 0x1f u>> 0x1d) + arg12) & 0xfffffff8
int32_t result
uint32_t rbx
int32_t zmm0[0x8]
int32_t zmm2[0x8]
uint32_t zmm3[0x8]
float zmm17[0x8]
float zmm18[0x8]
float zmm19[0x8]
float zmm20[0x8]
float zmm21[0x8]
float zmm22[0x8]

if (r15_4 s<= 0)
    rbx = 0
    result = 0
else
    result = 0
    zmm0 = data_142fc93a0
    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
    rbx = 0
    
    while (true)
        char temp1_1 = result.b & 1
        result.b = 1
        
        if (temp1_1 == 0)
            zmm2 = _mm256_add_epi32(_mm256_mask_set1_epi32(arg5, rbx), zmm0)
            zmm3 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 3)
            int64_t k1_1 = _kxnor_mask16(arg5, arg5)
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            int64_t k1_2
            int128_t temp0_6
            temp0_6, k1_2 = _mm256_mmask_i32gather_ps(k1_1, *(arg4 + (zmm3[0].q << 2)))
            arg7 = temp0_6
            zmm3 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 0xc)
            arg8 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm3, 4)
            int64_t k1_3 = _kxnor_mask16(arg5, arg5)
            arg9[0].o = _mm_mask_xor_ps(arg5, arg9[0].o, arg9[0].o)
            int64_t k1_4
            int128_t temp0_10
            temp0_10, k1_4 = _mm256_mmask_i32gather_ps(k1_3, *(arg4 + arg8[0].q))
            arg9 = temp0_10
            zmm3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm3, 8)
            int64_t k1_5 = _kxnor_mask16(arg5, arg5)
            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
            int64_t k1_6
            int128_t temp0_13
            temp0_13, k1_6 = _mm256_mmask_i32gather_ps(k1_5, *(arg4 + zmm3[0].q))
            arg8 = temp0_13
            float var_2c0_1[0x8] = arg7
            float var_2a0_1[0x8] = _mm256_mask_store_ps(arg5, arg9)
            float var_280_1[0x8] = arg8
            int32_t var_260_1[0x8] = arg6
            zmm3 = _mm256_broadcast_ss(arg3[3])
            uint32_t var_140_1[0x8] = zmm3
            uint32_t var_120_1[0x8] = zmm3
            uint32_t var_100_1[0x8] = zmm3
            uint32_t var_e0_1[0x8] = zmm3
            zmm17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[1])
            zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[2])
            zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg3)
            zmm20 = _mm256_mask_mul_ps(arg5, arg9, zmm18)
            zmm21 = _mm256_mask_mul_ps(arg5, arg8, zmm19)
            zmm22 = _mm256_mask_mul_ps(arg5, arg7, zmm17)
            arg8 = _mm256_mask3_fmsub_ps(arg8, arg5, zmm17, zmm20)
            arg7 = _mm256_mask3_fmsub_ps(arg7, arg5, zmm18, zmm21)
            arg9 = _mm256_mask3_fmsub_ps(arg9, arg5, zmm19, zmm22)
            arg8 = _mm256_add_ps(arg8, arg8)
            arg7 = _mm256_add_ps(arg7, arg7)
            arg9 = _mm256_mask_add_ps(arg5, arg9, arg9)
            zmm20 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_2c0_1), arg5, zmm3, arg8)
            zmm21 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_2a0_1), arg5, zmm3, arg7)
            zmm3 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm3, arg5, arg9, var_280_1)
            zmm22 = _mm256_mask_mul_ps(arg5, arg7, zmm18)
            float zmm23[0x8] = _mm256_mask_mul_ps(arg5, arg9, zmm19)
            float zmm24[0x8] = _mm256_mask_mul_ps(arg5, arg8, zmm17)
            arg9 = _mm256_mask_add_ps(arg5, zmm20, _mm256_mask3_fmsub_ps(zmm22, arg5, arg9, zmm17))
            arg8 = _mm256_mask_add_ps(arg5, zmm21, _mm256_mask3_fmsub_ps(zmm23, arg5, arg8, zmm18))
            zmm3 = _mm256_mask_add_ps(arg5, zmm3, _mm256_mask3_fmsub_ps(zmm24, arg5, arg7, zmm19))
            arg7 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg9, arg3[4])
            arg8 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg8, arg3[5])
            zmm3 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm3, arg3[6])
            arg7 = __vsubps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg7, *arg2)
            arg8 = __vsubps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg8, (*arg2)[1])
            arg9 = __vsubps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm3, (*arg2)[2])
            zmm3 = __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                    __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg8, (*arg1)[1]), arg5, 
                    arg7, *arg1), 
                arg5, arg9, (*arg1)[2])
            arg5 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(arg5, zmm3, *arg11, 1)
            _kortest_mask8_u8(arg5, arg5)
            
            if (temp1_1 == 0)
                result = 0
                rbx += 8
                
                if (rbx s>= r15_4)
                    break
                
                continue
            else
                uint64_t i = zx.q(_cvtmask32_u32(arg5))
                result = 0
                
                do
                    uint64_t rdi_1 = _tzcnt_u64(i)
                    i &= not.q(1 << (rdi_1 u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        uint32_t var_200[0x8] = zmm3
                        uint64_t rdi_2 = zx.q(rdi_1.d) & 7
                        arg7[0].o = var_200[rdi_2]
                        *arg11 = arg7[0]
                        int32_t var_1e0[0x8] = zmm2
                        *arg10 = var_1e0[rdi_2]
                    
                    result.b = 1
                while (i != 0)
        
        rbx += 8
        
        if (rbx s>= r15_4)
            break

if (rbx s< arg12)
    char temp2_1 = result.b
    result.b = 1
    
    if (temp2_1 == 0)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_mask_set1_epi32(arg5, rbx), data_142fc93a0)
        uint64_t k1_7 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, 
            _mm256_mask_set1_epi32(arg5, arg12), zmm0)
        arg6 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 3)
        int64_t k2_2
        int128_t temp0_56
        temp0_56, k2_2 = _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_7), 
            *(arg4 + (arg6[0].q << 2)))
        zmm2 = temp0_56
        arg6 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0xc)
        zmm3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 4)
        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
        int64_t k2_4
        int128_t temp0_60
        temp0_60, k2_4 =
            _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_7), *(arg4 + zmm3[0].q))
        arg7 = temp0_60
        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 8)
        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        int64_t k2_6
        int128_t temp0_64
        temp0_64, k2_6 =
            _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_7), *(arg4 + arg6[0].q))
        arg8 = temp0_64
        int32_t var_1c0_1[0x8] = zmm2
        float var_1a0_1[0x8] = arg7
        float var_180_1[0x8] = arg8
        uint32_t var_160_1[0x8] = zmm3
        arg6 = _mm256_broadcast_ss(arg3[3])
        int32_t var_140_2[0x8] = arg6
        int32_t var_120_2[0x8] = arg6
        int32_t var_100_2[0x8] = arg6
        int32_t var_e0_2[0x8] = arg6
        arg9 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[1])
        zmm17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[2])
        zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg3)
        zmm3 = _mm256_mul_ps(arg6, zmm3)
        zmm19 = _mm256_mask_mul_ps(arg5, arg7, zmm17)
        zmm20 = _mm256_mask_mul_ps(arg5, arg8, zmm18)
        zmm21 = _mm256_mask_mul_ps(arg5, zmm2, arg9)
        zmm19 = _mm256_mask3_fmsub_ps(zmm19, arg5, arg9, arg8)
        zmm20 = _mm256_mask3_fmsub_ps(zmm20, arg5, zmm17, zmm2)
        zmm21 = _mm256_mask3_fmsub_ps(zmm21, arg5, zmm18, arg7)
        zmm2 = _mm256_sub_ps(zmm3, zmm3)
        zmm3 = _mm256_mask_add_ps(arg5, zmm19, zmm19)
        arg7 = _mm256_mask_add_ps(arg5, zmm20, zmm20)
        arg8 = _mm256_mask_add_ps(arg5, zmm21, zmm21)
        uint32_t var_2c0_2[0x8] = zmm3
        float var_2a0_2[0x8] = arg7
        float var_280_2[0x8] = arg8
        zmm2 = _mm256_add_ps(zmm2, zmm2)
        int32_t var_260_2[0x8] = zmm2
        arg9 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_1c0_1), arg5, arg6, zmm3)
        zmm17 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_1a0_1), arg5, arg6, arg7)
        zmm18 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_180_1), arg5, arg6, arg8)
        zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm2, arg6, var_160_1)
        int256_t var_c0_1 = _mm256_mask_store_ps(arg5, arg9)
        int256_t var_a0_1 = _mm256_mask_store_ps(arg5, zmm17)
        int256_t var_80_1 = _mm256_mask_store_ps(arg5, zmm18)
        int32_t var_60_1[0x8] = zmm2
        arg6 = _mm256_broadcast_ss(arg3[1])
        zmm2 = _mm256_broadcast_ss(arg3[2])
        zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg3)
        zmm20 = _mm256_mask_mul_ps(arg5, arg7, zmm2)
        zmm21 = _mm256_mask_mul_ps(arg5, arg8, zmm19)
        zmm22 = _mm256_mask_mul_ps(arg5, zmm3, arg6)
        zmm20 = _mm256_mask3_fmsub_ps(zmm20, arg5, arg8, arg6)
        zmm21 = _mm256_mask3_fmsub_ps(zmm21, arg5, zmm3, zmm2)
        zmm22 = _mm256_mask3_fmsub_ps(zmm22, arg5, arg7, zmm19)
        arg6 = _mm256_mask_add_ps(arg5, arg9, zmm20)
        zmm2 = _mm256_mask_add_ps(arg5, zmm17, zmm21)
        zmm3 = _mm256_mask_add_ps(arg5, zmm18, zmm22)
        arg6 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg6, arg3[4])
        zmm2 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm2, arg3[5])
        zmm3 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm3, arg3[6])
        arg7 = __vsubps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg6, *arg2)
        arg6 = __vsubps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm2, (*arg2)[1])
        zmm2 = __vsubps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm3, (*arg2)[2])
        arg6 = __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
            __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg6, (*arg1)[1]), arg5, arg7, 
                *arg1), 
            arg5, zmm2, (*arg1)[2])
        int64_t k0 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k1_7, arg6, *arg11, 1)
        _kortest_mask8_u8(k0, k0)
        
        if (temp2_1 == 0)
            result = 0
        else
            uint64_t i_1 = zx.q(_cvtmask32_u32(k0))
            result = 0
            
            do
                uint64_t rdx = _tzcnt_u64(i_1)
                i_1 &= not.q(1 << (rdx u% 0x40))
                
                if ((result.b & 1) == 0)
                    int32_t var_240[0x8] = arg6
                    uint64_t rdx_1 = zx.q(rdx.d) & 7
                    zmm2[0].o = var_240[rdx_1]
                    *arg11 = zmm2[0]
                    int32_t var_220[0x8] = zmm0
                    *arg10 = var_220[rdx_1]
                
                result.b = 1
            while (i_1 != 0)

_mm256_zeroupper()
return result
