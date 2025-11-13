// 函数: sub_140100300
// 地址: 0x140100300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint16_t zmm15[0x8]
uint16_t var_58[0x8] = zmm15
int128_t var_68 = arg18[0].o
int128_t var_78 = arg17[0].o
int128_t var_98 = arg16[0].o
int128_t var_a8 = arg15[0].o
int128_t var_b8 = arg14[0].o
int128_t var_c8 = arg13[0].o
int128_t var_d8 = arg12[0].o
int128_t var_e8 = arg11[0].o
int64_t rdi = sx.q(arg36)
uint32_t r13 = arg37
float zmm12[0x4] = arg34
uint8_t rcx[0x4] = 0x434421c0
int32_t var_408 = rdi.d
uint32_t rbx_1 = *(&data_1434421e0 + (rdi << 2)) * *(&data_1434421c0 + (rdi << 2))
uint16_t* r12 = arg33
int32_t r11_4 = ((r13 s>> 0x1f u>> 0x1d) + r13) & 0xfffffff8
uint32_t rbx_2
uint32_t zmm1[0x8]
uint32_t zmm26[0x8]
bool cond:1

if (r11_4 s<= 0)
    rbx_2 = 0
    cond:1 = 0 == r13
    
    if (0 s< r13)
    label_1401010ac:
        arg9 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_mask_set1_epi32(arg5, rbx_2), data_142fc93a0)
        arg10 = _mm256_mask_set1_epi32(arg5, r13)
        uint64_t k1_33 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, arg10, arg9)
        arg6 = _mm256_slli_epi32(arg9, 3)
        arg30[0].o = _mm_mask_xor_ps(arg5, arg30[0].o, arg30[0].o)
        int64_t k2_26
        uint32_t temp0_338[0x8]
        temp0_338, k2_26 = _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k1_33), 
            *(arg2 + arg6[0].q))
        arg7 = __vpbroadcastd_ymmqq_memd(4)
        arg6 |= arg7
        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        int64_t k2_28
        uint32_t temp0_341[0x8]
        temp0_341, k2_28 = _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k1_33), 
            *(arg2 + arg6[0].q))
        arg6[0].o = zx.o(arg4)
        arg6 = _mm256_mullo_epi32(temp0_341, _mm256_broadcastd_epi32(_mm256_slli_epi32(arg6, 2)[0]))
        int64_t k2_30
        uint32_t temp0_345[0x8]
        temp0_345, k2_30 = _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k1_33), 
            *(arg3 + arg6[0].q))
        arg8 = temp0_345
        arg6 = _mm256_add_epi32(arg6, arg7)
        arg21[0].o = _mm_mask_xor_epi32(arg5, arg21[0].o, arg21[0].o)
        int64_t k2_32
        uint32_t temp0_348[0x8]
        temp0_348, k2_32 = _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k1_33), 
            *(arg3 + arg6[0].q))
        uint32_t temp0_349 = _cvtmask32_u32(k1_33)
        arg7[0].o = zx.o(0)
        int64_t k0 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(k1_33, temp0_348, 2, 1)
        _kortest_mask8_u8(k0, k0)
        uint32_t rcx_29
        
        if (cond:1)
            arg7[0].o = zx.o(0)
            rcx_29 = rbx_1
            arg22[0].o = _mm_mask_xor_ps(k0, arg22[0].o, arg22[0].o)
            arg6[0].o = zx.o(0)
            
            if (zx.o(0) f>= zmm12[0])
            label_14010117b:
                arg19[0].o = _mm_mask_xor_epi32(k0, arg19[0].o, arg19[0].o)
                arg20[0].o = _mm_mask_xor_ps(k0, arg20[0].o, arg20[0].o)
                arg6[0].o = arg7[0].o & data_142fc92e0
                arg7 = _mm256_mask_mov_ps(
                    __vpcmpw_maskmskw_maskmskw_xmmi16_memi16_imm8_avx512(k0, arg6[0].o, 
                        data_142fc92e0, 4), 
                    arg22)
            else
            label_1401011a5:
                arg12[0].o = _mm_movm_epi16(k1_33)
                arg11[0].o = arg7[0].o ^ data_142fc92e0
                arg6 = _mm256_cmpeq_epi32(arg6, arg6)
                arg20 = _mm256_mask_add_epi32(k0, temp0_348, arg6)
                
                if (zmm12 f>= 1f)
                    arg6[0].o = arg11[0].o & arg12[0].o
                    arg19 = _mm256_mask_mov_epi32(
                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0, arg6[0].o, 
                            data_142fc92e0), 
                        arg20)
                    arg20 = _mm256_mask_mov_epi64(k0, arg19)
                else
                    arg6 = _mm256_broadcastss_ps(zmm12)
                    float temp0_363[0x8] =
                        _mm256_mask_mul_ps(k0, arg6, _mm256_mask_cvtepi32_ps(k0, arg20))
                    arg6[0].o = arg11[0].o & arg12[0].o
                    arg24 = _mm256_mask_roundscale_ps(k0, temp0_363, 9)
                    _mm256_mask_min_epi32(k0, arg20, _mm256_mask_cvttps_epi32(k0, arg24))
                    int64_t k2_33 = __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0, 
                        arg6[0].o, data_142fc92e0)
                    arg6[0].o = zx.o(0)
                    arg19 = _mm256_mask_mov_epi32(k2_33, arg6)
                    arg22[0].o = _mm_mask_xor_ps(k0, arg22[0].o, arg22[0].o)
                    
                    if (arg35 != 1)
                        arg22 = _mm256_mask_sub_ps(k0, temp0_363, arg24)
                    
                    arg11 = _mm256_cmpeq_epi32(arg11, arg11)
                    arg23 = _mm256_mask_sub_epi32(k0, arg19, arg11)
                    _mm256_mask_min_epi32(k0, arg23, arg20)
                    arg20 = _mm256_mask_mov_epi32(k2_33, arg6)
                
                arg6[0].o = arg7[0].o & data_142fc92e0
                arg7 = _mm256_mask_mov_ps(
                    __vpcmpw_maskmskw_maskmskw_xmmi16_memi16_imm8_avx512(k0, arg6[0].o, 
                        data_142fc92e0, 4), 
                    arg22)
        else
            arg2 = zx.q(_cvtmask32_u32(k0))
            arg19[0].o = _mm_mask_xor_ps(k0, arg19[0].o, arg19[0].o)
            arg20[0].o = _mm_mask_xor_ps(k0, arg20[0].o, arg20[0].o)
            rcx_29 = rbx_1
            
            if (temp0_349.b != arg2.b)
                arg7[0].o = _mm_movm_epi16(k0)
                arg22[0].o = _mm_mask_xor_ps(k0, arg22[0].o, arg22[0].o)
                arg6[0].o = zx.o(0)
                
                if (zx.o(0) f< zmm12[0])
                    goto label_1401011a5
                
                goto label_14010117b
        
        int64_t k0_1 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(k0, temp0_348, 2, 1)
        arg2.b = var_408 == 3
        arg2.b = neg.b(arg2.b)
        arg6[0].o = _mm_mask_set1_epi8(k0_1, arg2.d)
        int64_t k0_2 = _kor_mask8(k0_1, 
            __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_1, arg6[0].o, data_142fc92e0))
        arg6 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(_knot_mask8(k0_2), 0x18)
        uint32_t temp0_379[0x8] = _mm256_mask_set1_epi32(k0_2, rcx_29)
        uint64_t rbx_3 = zx.q(var_408)
        bool cond:5_1 = var_408 == 6
        float var_3e0_1[0x8]
        float var_3c0_1[0x8]
        float var_3a0_1[0x8]
        uint64_t k1_35
        
        if (var_408 u> 6)
        label_14010134e:
            arg22[0].o = _mm_mask_xor_epi32(k0_2, arg22[0].o, arg22[0].o)
            var_3e0_1 = _mm256_mask_storeu_ps(k1_33, arg22)
            var_3c0_1 = _mm256_mask_storeu_ps(k1_33, arg22)
        label_14010172c:
            var_3a0_1 = _mm256_mask_storeu_ps(k1_33, arg22)
            k1_35 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                _mm256_cmp_epi32_mask(k0_2, arg19, arg20, 4), arg10, arg9)
            _kortest_mask8_u8(k1_35, k1_35)
            
            if (not(cond:5_1))
                goto label_140101750
        else
            arg22 = _mm256_mask_mullo_epi32(k0_2, arg19, temp0_379)
            int64_t rdi_23 = sx.q(jump_table_140101d64[rbx_3])
            cond:5_1 = rdi_23 == -0x140101d64
            
            switch (rdi_23)
                case -0xaa0
                    arg23 = _mm256_mask_add_epi32(k0_2, arg6, arg8)
                    arg22 = _mm256_mask_add_epi32(k0_2, arg23, arg22)
                    uint64_t k2_38 = _cvtu32_mask32(temp0_349)
                    int64_t k3_1 = __kmovq_maskmskw_masku64_avx512(k2_38)
                    arg23[0].o = _mm_mask_xor_epi32(k0_2, arg23[0].o, arg23[0].o)
                    int64_t k3_2
                    float temp0_384[0x8]
                    temp0_384, k3_2 = _mm256_mmask_i32gather_ps(k3_1, *(r12 + arg22[0].q))
                    arg24 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, arg22, 4)
                    int64_t k3_3 = __kmovq_maskmskw_masku64_avx512(k2_38)
                    arg25[0].o = _mm_mask_xor_epi32(k0_2, arg25[0].o, arg25[0].o)
                    int64_t k3_4
                    float temp0_387[0x8]
                    temp0_387, k3_4 = _mm256_mmask_i32gather_ps(k3_3, *(r12 + arg24[0].q))
                    arg22 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, arg22, 8)
                    arg24[0].o = _mm_mask_xor_ps(k0_2, arg24[0].o, arg24[0].o)
                    int64_t k2_39
                    float temp0_390[0x8]
                    temp0_390, k2_39 = _mm256_mmask_i32gather_ps(k2_38, *(r12 + arg22[0].q))
                    arg24 = temp0_390
                    var_3e0_1 = _mm256_mask_storeu_ps(k1_33, temp0_384)
                    var_3c0_1 = _mm256_mask_storeu_ps(k1_33, temp0_387)
                    var_3a0_1 = _mm256_mask_storeu_ps(k1_33, arg24)
                    k1_35 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                        _mm256_cmp_epi32_mask(k0_2, arg19, arg20, 4), arg10, arg9)
                    _kortest_mask8_u8(k1_35, k1_35)
                    
                    if (rdi_23 != -0x140101d64)
                    label_140101750:
                        float var_320_1[0x8]
                        float var_300_1[0x8]
                        float var_2e0_1[0x8]
                        
                        if (var_408 u> 6)
                        label_1401017d1:
                            arg6[0].o = zx.o(0)
                            var_320_1 = _mm256_mask_storeu_ps(k1_35, arg6)
                            var_300_1 = _mm256_mask_storeu_ps(k1_35, arg6)
                            var_2e0_1 = _mm256_mask_storeu_ps(k1_35, arg6)
                        else
                            arg9 = _mm256_mask_mullo_epi32(k0_2, arg20, temp0_379)
                            
                            switch (rbx_3)
                                case 0, 1
                                    arg6 = _mm256_add_epi32(_mm256_add_epi32(arg6, arg8), arg9)
                                    int64_t k2_43
                                    float temp0_510[0x8]
                                    temp0_510, k2_43 = _mm256_mmask_i32gather_ps(
                                        __kmovq_maskmskw_masku64_avx512(k1_35), *(r12 + arg6[0].q))
                                    arg8 =
                                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, arg6, 4)
                                    int64_t k2_45
                                    float temp0_512[0x8]
                                    temp0_512, k2_45 = _mm256_mmask_i32gather_ps(
                                        __kmovq_maskmskw_masku64_avx512(k1_35), *(r12 + arg8[0].q))
                                    arg6 =
                                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, arg6, 8)
                                    arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                                    int64_t k2_47
                                    float temp0_515[0x8]
                                    temp0_515, k2_47 = _mm256_mmask_i32gather_ps(
                                        __kmovq_maskmskw_masku64_avx512(k1_35), *(r12 + arg6[0].q))
                                    var_320_1 = _mm256_mask_storeu_ps(k1_35, temp0_510)
                                    var_300_1 = _mm256_mask_storeu_ps(k1_35, temp0_512)
                                    var_2e0_1 = _mm256_mask_storeu_ps(k1_35, temp0_515)
                                case 2
                                    arg6 = _mm256_add_epi32(arg6, arg8)
                                    zmm1 = _mm256_add_epi32(arg6, arg9)
                                    arg6 = _mm256_mask_add_epi32(k1_35, arg6, arg9)
                                    int64_t r9_10 = sx.q(arg6[0])
                                    int64_t r10_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                                    int64_t r11_14 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                                    int64_t r14_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    int64_t rsi_33 = sx.q(arg6[0])
                                    int64_t rcx_42 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                                    int64_t rdx_27 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                                    int64_t rbx_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                                    arg6[0].o = zx.o(*(r12 + r9_10))
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                        *(r12 + r10_8), 1)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                        *(r12 + r11_14), 2)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                        *(r12 + r14_11), 3)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                        *(r12 + rsi_33), 4)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                        *(r12 + rcx_42), 5)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                        *(r12 + rdx_27), 6)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                        *(r12 + rbx_6), 7)
                                    arg8 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_35, 
                                        zmm1, 2)
                                    int64_t r9_11 = sx.q(arg8[0])
                                    int64_t r10_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1))
                                    int64_t r11_15 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2))
                                    int64_t r14_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3))
                                    arg8[0].o = _mm256_extracti128_si256(arg8, 1)
                                    int64_t rsi_35 = sx.q(arg8[0])
                                    int64_t rcx_45 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1))
                                    int64_t rdx_30 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2))
                                    int64_t rbx_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3))
                                    arg8[0].o = zx.o(*(r12 + r9_11))
                                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, 
                                        *(r12 + r10_9), 1)
                                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, 
                                        *(r12 + r11_15), 2)
                                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, 
                                        *(r12 + r14_12), 3)
                                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, 
                                        *(r12 + rsi_35), 4)
                                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, 
                                        *(r12 + rcx_45), 5)
                                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, 
                                        *(r12 + rdx_30), 6)
                                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, 
                                        *(r12 + rbx_9), 7)
                                    uint32_t temp0_553[0x8] =
                                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_35, zmm1, 
                                        4)
                                    int64_t r9_12 = sx.q(temp0_553[0])
                                    int32_t temp0_554 =
                                        __vpextrd_gpr32d_xmmdq_immb(temp0_553[0].o, 1)
                                    int64_t r10_10 =
                                        sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_553[0].o, 2))
                                    int64_t r14_13 =
                                        sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_553[0].o, 3))
                                    temp0_553[0].o = _mm256_extracti128_si256(temp0_553, 1)
                                    int64_t rsi_37 = sx.q(temp0_553[0])
                                    int32_t temp0_558 =
                                        __vpextrd_gpr32d_xmmdq_immb(temp0_553[0].o, 1)
                                    int64_t rbx_12 =
                                        sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_553[0].o, 2))
                                    int32_t temp0_560 =
                                        __vpextrd_gpr32d_xmmdq_immb(temp0_553[0].o, 3)
                                    temp0_553[0].o = zx.o(*(r12 + r9_12))
                                    temp0_553[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        temp0_553[0].o, *(r12 + sx.q(temp0_554)), 1)
                                    temp0_553[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        temp0_553[0].o, *(r12 + r10_10), 2)
                                    temp0_553[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        temp0_553[0].o, *(r12 + r14_13), 3)
                                    temp0_553[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        temp0_553[0].o, *(r12 + rsi_37), 4)
                                    temp0_553[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        temp0_553[0].o, *(r12 + sx.q(temp0_558)), 5)
                                    temp0_553[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        temp0_553[0].o, *(r12 + rbx_12), 6)
                                    temp0_553[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        temp0_553[0].o, *(r12 + sx.q(temp0_560)), 7)
                                    arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                                    arg9 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                                    float temp0_571[0x8] =
                                        _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, arg9))
                                    arg10 = _mm256_broadcast_ss(32767f)
                                    float temp0_573[0x8] = _mm256_div_ps(temp0_571, arg10)
                                    float temp0_577[0x8] = _mm256_div_ps(
                                        _mm256_cvtepi32_ps(_mm256_add_epi32(
                                            _mm256_cvtepu16_epi32(arg8[0].o), arg9)), 
                                        arg10)
                                    zmm1 = _mm256_div_ps(
                                        _mm256_cvtepi32_ps(_mm256_add_epi32(
                                            _mm256_cvtepu16_epi32(temp0_553[0].o), arg9)), 
                                        arg10)
                                    float temp0_582[0x8] = _mm256_broadcast_ss(128f)
                                    float temp0_583[0x8] = _mm256_mul_ps(temp0_573, temp0_582)
                                    float temp0_584[0x8] = _mm256_mul_ps(temp0_577, temp0_582)
                                    zmm1 = _mm256_mul_ps(zmm1, temp0_582)
                                    var_320_1 = _mm256_mask_storeu_ps(k1_35, temp0_583)
                                    var_300_1 = _mm256_mask_storeu_ps(k1_35, temp0_584)
                                    var_2e0_1 = _mm256_mask_storeu_ps(k1_35, zmm1)
                                case 3
                                    int64_t k2_49
                                    float temp0_589[0x8]
                                    temp0_589, k2_49 = _mm256_mmask_i32gather_ps(
                                        __kmovq_maskmskw_masku64_avx512(k1_35), *(r12 + arg8[0].q))
                                    uint32_t temp0_590[0x8] =
                                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, arg8, 4)
                                    int64_t k2_50 = __kmovq_maskmskw_masku64_avx512(k1_35)
                                    arg19[0].o = _mm_mask_xor_ps(k0_2, arg19[0].o, arg19[0].o)
                                    int64_t k2_51
                                    float temp0_592[0x8]
                                    temp0_592, k2_51 =
                                        _mm256_mmask_i32gather_ps(k2_50, *(r12 + temp0_590[0].q))
                                    uint32_t temp0_593[0x8] =
                                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, arg8, 8)
                                    int64_t k2_52 = __kmovq_maskmskw_masku64_avx512(k1_35)
                                    arg20[0].o = _mm_mask_xor_ps(k0_2, arg20[0].o, arg20[0].o)
                                    int64_t k2_53
                                    float temp0_595[0x8]
                                    temp0_595, k2_53 =
                                        _mm256_mmask_i32gather_ps(k2_52, *(r12 + temp0_593[0].q))
                                    uint32_t temp0_596[0x8] =
                                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, arg8, 
                                        0xc)
                                    int64_t k2_54 = __kmovq_maskmskw_masku64_avx512(k1_35)
                                    temp0_379[0].o =
                                        _mm_mask_xor_epi32(k0_2, temp0_379[0].o, temp0_379[0].o)
                                    int64_t k2_55
                                    float temp0_598[0x8]
                                    temp0_598, k2_55 =
                                        _mm256_mmask_i32gather_ps(k2_54, *(r12 + temp0_596[0].q))
                                    uint32_t temp0_599[0x8] =
                                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, arg8, 
                                        0x10)
                                    int64_t k2_56 = __kmovq_maskmskw_masku64_avx512(k1_35)
                                    arg22[0].o = _mm_mask_xor_ps(k0_2, arg22[0].o, arg22[0].o)
                                    int64_t k2_57
                                    float temp0_601[0x8]
                                    temp0_601, k2_57 =
                                        _mm256_mmask_i32gather_ps(k2_56, *(r12 + temp0_599[0].q))
                                    arg23 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, 
                                        arg8, 0x14)
                                    int64_t k2_58 = __kmovq_maskmskw_masku64_avx512(k1_35)
                                    arg24[0].o = _mm_mask_xor_ps(k0_2, arg24[0].o, arg24[0].o)
                                    int64_t k2_59
                                    float temp0_604[0x8]
                                    temp0_604, k2_59 =
                                        _mm256_mmask_i32gather_ps(k2_58, *(r12 + arg23[0].q))
                                    arg6 = _mm256_add_epi32(_mm256_add_epi32(arg6, arg8), arg9)
                                    int64_t k2_61
                                    uint32_t temp0_607[0x8]
                                    temp0_607, k2_61 = _mm256_mmask_i32gather_epi32(
                                        __kmovq_maskmskw_masku64_avx512(k1_35), *(r12 + arg6[0].q))
                                    arg6 = _mm256_srli_epi32(temp0_607, 0x15)
                                    arg8 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, 
                                        _mm256_srli_epi32(temp0_607, 0xa), 0x7ff)
                                    float temp0_615[0x8] = _mm256_mask3_fmadd_ps(
                                        __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(k0_2, 
                                            _mm256_cvtepi32_ps(
                                                __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, 
                                                __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, 
                                                    temp0_607, 0x3ff), 
                                                0xfffffe01)), 
                                            0x43ff8000), 
                                        k0_2, temp0_598, temp0_589)
                                    uint32_t temp0_616[0x8] = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                                    float temp0_618[0x8] =
                                        _mm256_cvtepi32_ps(_mm256_add_epi32(arg8, temp0_616))
                                    arg10 = _mm256_broadcast_ss(1023f)
                                    float temp0_621[0x8] = _mm256_mask3_fmadd_ps(
                                        _mm256_div_ps(temp0_618, arg10), k0_2, temp0_601, temp0_592)
                                    arg6 = _mm256_mask3_fmadd_ps(
                                        _mm256_div_ps(
                                            _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, temp0_616)), 
                                            arg10), 
                                        k0_2, temp0_604, temp0_595)
                                    var_320_1 = _mm256_mask_storeu_ps(k1_35, temp0_615)
                                    var_300_1 = _mm256_mask_storeu_ps(k1_35, temp0_621)
                                    var_2e0_1 = _mm256_mask_storeu_ps(k1_35, arg6)
                                case 4, 5, 6
                                    goto label_1401017d1
                        
                        arg9 = var_3e0_1
                        arg10 = var_3c0_1
                        arg19 = _mm256_mask_load_ps(k0_2, var_3a0_1)
                        float temp0_630[0x8] = _mm256_sub_ps(var_320_1, arg9)
                        zmm1 = _mm256_sub_ps(var_300_1, arg10)
                        float temp0_632[0x8] = _mm256_mask_sub_ps(k0_2, var_2e0_1, arg19)
                        arg6 = _mm256_fmadd_ps(temp0_630, arg7, arg9)
                        zmm1 = _mm256_fmadd_ps(zmm1, arg7, arg10)
                        arg8 = _mm256_mask3_fmadd_ps(temp0_632, k0_2, arg7, arg19)
                        var_3e0_1 = _mm256_mask_storeu_ps(k1_35, arg6)
                        var_3c0_1 = _mm256_mask_storeu_ps(k1_35, zmm1)
                        var_3a0_1 = _mm256_mask_storeu_ps(k1_35, arg8)
                case -0xa16
                    goto label_14010134e
                case -0x9fb
                    arg23 = _mm256_mask_add_epi32(k0_2, arg6, arg8)
                    arg24 = _mm256_mask_add_epi32(k0_2, arg23, arg22)
                    arg22 = _mm256_mask_add_epi32(k1_33, arg23, arg22)
                    int64_t r9_7 = sx.q(arg22[0])
                    int64_t r10_5 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(arg22[0].o, 1))
                    int64_t r11_11 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(arg22[0].o, 2))
                    int64_t r14_8 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(arg22[0].o, 3))
                    arg12[0].o = _mm256_extracti32x4_epi32(k0_2, arg22, 1)
                    int64_t r15_6 = sx.q(arg12[0])
                    int64_t rdi_27 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 1))
                    int64_t rsi_26 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 2))
                    int64_t rcx_32 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 3))
                    arg12[0].o = zx.o(*(r12 + r9_7))
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(r12 + r10_5), 1)
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(r12 + r11_11), 2)
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(r12 + r14_8), 3)
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(r12 + r15_6), 4)
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(r12 + rdi_27), 5)
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(r12 + rsi_26), 6)
                    arg23[0].o =
                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(arg12[0].o, *(r12 + rcx_32), 7)
                    arg22 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_33, arg24, 2)
                    int64_t r9_8 = sx.q(arg22[0])
                    int64_t r10_6 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(arg22[0].o, 1))
                    int64_t r11_12 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(arg22[0].o, 2))
                    int64_t r14_9 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(arg22[0].o, 3))
                    arg11[0].o = _mm256_extracti32x4_epi32(k0_2, arg22, 1)
                    int64_t r15_7 = sx.q(arg11[0])
                    int64_t rdx_19 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg11[0].o, 1))
                    int64_t rdi_30 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg11[0].o, 2))
                    int64_t rsi_29 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg11[0].o, 3))
                    arg11[0].o = zx.o(*(r12 + r9_8))
                    arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, *(r12 + r10_6), 1)
                    arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, *(r12 + r11_12), 2)
                    arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, *(r12 + r14_9), 3)
                    arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, *(r12 + r15_7), 4)
                    arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, *(r12 + rdx_19), 5)
                    arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, *(r12 + rdi_30), 6)
                    arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, *(r12 + rsi_29), 7)
                    arg22 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_33, arg24, 4)
                    int64_t r9_9 = sx.q(arg22[0])
                    uint32_t temp0_430 = __vpextrd_gpr32u32_xmmu32_imm8_avx512(arg22[0].o, 1)
                    int64_t r10_7 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(arg22[0].o, 2))
                    int64_t r14_10 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(arg22[0].o, 3))
                    arg12[0].o = _mm256_extracti32x4_epi32(k0_2, arg22, 1)
                    int64_t r15_8 = sx.q(arg12[0])
                    int32_t temp0_434 = __vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 1)
                    int64_t rdx_22 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 2))
                    int32_t temp0_436 = __vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 3)
                    arg12[0].o = zx.o(*(r12 + r9_9))
                    arg12[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(r12 + sx.q(temp0_430)), 1)
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(r12 + r10_7), 2)
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(r12 + r14_10), 3)
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(r12 + r15_8), 4)
                    arg12[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(r12 + sx.q(temp0_434)), 5)
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(r12 + rdx_22), 6)
                    arg12[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(r12 + sx.q(temp0_436)), 7)
                    arg22 = _mm256_mask_cvtepu16_epi32(k0_2, arg23[0].o)
                    arg23 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(k0_2, 0xffff8001)
                    float temp0_447[0x8] =
                        _mm256_mask_cvtepi32_ps(k0_2, _mm256_mask_add_epi32(k0_2, arg22, arg23))
                    float temp0_448[0x8] =
                        __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_2, 32767f)
                    float temp0_449[0x8] = _mm256_mask_div_ps(k0_2, temp0_447, temp0_448)
                    arg25 = _mm256_mask_div_ps(k0_2, 
                        _mm256_mask_cvtepi32_ps(k0_2, 
                            _mm256_mask_add_epi32(k0_2, 
                                _mm256_mask_cvtepu16_epi32(k0_2, arg11[0].o), arg23)), 
                        temp0_448)
                    float temp0_457[0x8] = _mm256_mask_div_ps(k0_2, 
                        _mm256_mask_cvtepi32_ps(k0_2, 
                            _mm256_mask_add_epi32(k0_2, 
                                _mm256_mask_cvtepu16_epi32(k0_2, arg12[0].o), arg23)), 
                        temp0_448)
                    arg24 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_2, 128f)
                    arg22 = _mm256_mask_mul_ps(k0_2, temp0_449, arg24)
                    arg25 = _mm256_mask_mul_ps(k0_2, arg25, arg24)
                    float temp0_461[0x8] = _mm256_mask_mul_ps(k0_2, temp0_457, arg24)
                    var_3e0_1 = _mm256_mask_storeu_ps(k1_33, arg22)
                    var_3c0_1 = _mm256_mask_storeu_ps(k1_33, arg25)
                    var_3a0_1 = _mm256_mask_storeu_ps(k1_33, temp0_461)
                    k1_35 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                        _mm256_cmp_epi32_mask(k0_2, arg19, arg20, 4), arg10, arg9)
                    _kortest_mask8_u8(k1_35, k1_35)
                    
                    if (rdi_23 != -0x140101d64)
                        goto label_140101750
                case -0x78a
                    uint64_t k2_40 = _cvtu32_mask32(temp0_349)
                    arg23[0].o = _mm_mask_xor_ps(k0_2, arg23[0].o, arg23[0].o)
                    int64_t k3_6
                    float temp0_466[0x8]
                    temp0_466, k3_6 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_40), *(r12 + arg8[0].q))
                    arg24 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, arg8, 4)
                    arg25[0].o = _mm_mask_xor_epi32(k0_2, arg25[0].o, arg25[0].o)
                    int64_t k3_8
                    float temp0_469[0x8]
                    temp0_469, k3_8 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_40), *(r12 + arg24[0].q))
                    arg24 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, arg8, 8)
                    arg26[0].o = _mm_mask_xor_epi32(k0_2, arg26[0].o, arg26[0].o)
                    int64_t k3_10
                    float temp0_472[0x8]
                    temp0_472, k3_10 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_40), *(r12 + arg24[0].q))
                    arg24 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, arg8, 0xc)
                    arg27[0].o = _mm_mask_xor_ps(k0_2, arg27[0].o, arg27[0].o)
                    int64_t k3_12
                    float temp0_475[0x8]
                    temp0_475, k3_12 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_40), *(r12 + arg24[0].q))
                    arg24 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, arg8, 0x10)
                    arg28[0].o = _mm_mask_xor_epi32(k0_2, arg28[0].o, arg28[0].o)
                    int64_t k3_14
                    float temp0_478[0x8]
                    temp0_478, k3_14 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_40), *(r12 + arg24[0].q))
                    arg24[0].o = _mm_mask_xor_epi32(k0_2, arg24[0].o, arg24[0].o)
                    uint32_t temp0_480[0x8] =
                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, arg8, 0x14)
                    arg29[0].o = _mm_mask_xor_ps(k0_2, arg29[0].o, arg29[0].o)
                    int64_t k3_16
                    float temp0_482[0x8]
                    temp0_482, k3_16 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_40), *(r12 + temp0_480[0].q))
                    int64_t k2_41
                    uint32_t temp0_485[0x8]
                    temp0_485, k2_41 = _mm256_mmask_i32gather_epi32(k2_40, 
                        *(r12 + _mm256_mask_add_epi32(k0_2, 
                            _mm256_mask_add_epi32(k0_2, arg6, arg8), arg22)[0].q))
                    arg24 = temp0_485
                    arg22 = _mm256_mask_srli_epi32(k0_2, arg24, 0x15)
                    uint32_t temp0_488[0x8] = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, 
                        _mm256_mask_srli_epi32(k0_2, arg24, 0xa), 0x7ff)
                    arg24 = _mm256_mask3_fmadd_ps(
                        __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(k0_2, 
                            _mm256_mask_cvtepi32_ps(k0_2, 
                                __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, 
                                    __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, arg24, 
                                        0x3ff), 
                                    0xfffffe01)), 
                            0x43ff8000), 
                        k0_2, temp0_475, temp0_466)
                    arg23 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(k0_2, 0xfffffc01)
                    arg27 =
                        _mm256_mask_cvtepi32_ps(k0_2, _mm256_mask_add_epi32(k0_2, temp0_488, arg23))
                    zmm26 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_2, 1023f)
                    arg27 = _mm256_mask3_fmadd_ps(_mm256_mask_div_ps(k0_2, arg27, zmm26), k0_2, 
                        temp0_478, temp0_469)
                    arg22 = _mm256_mask3_fmadd_ps(
                        _mm256_mask_div_ps(k0_2, 
                            _mm256_mask_cvtepi32_ps(k0_2, 
                                _mm256_mask_add_epi32(k0_2, arg22, arg23)), 
                            zmm26), 
                        k0_2, temp0_482, temp0_472)
                    var_3e0_1 = _mm256_mask_storeu_ps(k1_33, arg24)
                    var_3c0_1 = _mm256_mask_storeu_ps(k1_33, arg27)
                    goto label_14010172c
        arg6[0].o = var_3e0_1[0].o
        arg7[0].o = var_3e0_1[4].o
        arg8[0].o = var_3c0_1[0].o
        int128_t var_3b0
        arg9[0].o = var_3b0
        arg10[0].o = var_3a0_1[0].o
        arg12[0].o = var_3a0_1[4].o
        arg19[0].o = _mm_mask_xor_ps(k0_2, arg19[0].o, arg19[0].o)
        zmm1[0].o = _mm_mask_unpacklo_ps(k0_2, arg10[0].o, arg19[0].o)
        arg10[0].o = _mm_mask_unpackhi_ps(k0_2, arg10[0].o, arg19[0].o)
        arg11[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
        arg6[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
        arg8[0].o = arg11[0].q | zmm1[0].q << 0x40
        int128_t var_1c0 = arg8[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
        int128_t var_1b0_1 = zmm1[0].o
        zmm1[0].o = arg6[0].q | arg10[0].q << 0x40
        int128_t var_1a0_1 = zmm1[0].o
        arg6[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg10[0].o)
        int128_t var_190_1 = arg6[0].o
        arg6[0].o = _mm_mask_unpacklo_ps(k0_2, arg12[0].o, arg19[0].o)
        zmm1[0].o = _mm_mask_unpackhi_ps(k0_2, arg12[0].o, arg19[0].o)
        arg8[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
        arg7[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg9[0].o)
        arg9[0].o = arg8[0].q | arg6[0].q << 0x40
        int128_t var_180_1 = arg9[0].o
        arg6[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
        int128_t var_170_1 = arg6[0].o
        arg6[0].o = arg7[0].q | zmm1[0].q << 0x40
        int128_t var_160_1 = arg6[0].o
        arg6[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
        int128_t var_150_1 = arg6[0].o
        uint64_t i = zx.q(temp0_349.b)
        
        do
            uint64_t rcx_50 = _tzcnt_u64(i)
            uint64_t var_120[0x4] = _mm256_mask_store_epi64(k0_2, temp0_338)
            arg6[0].o = (&var_1c0)[rcx_50]
            *(arg1 + sx.q(*(&var_120 + ((zx.q(rcx_50.d) & 7) << 2))) * 0x30 + 0x20) = arg6[0].o
            i &= rol.q(-2, rcx_50.b)
        while (i != 0)
else
    zmm1[0].o = zx.o(arg4)
    zmm1 = _mm256_slli_epi32(zmm1, 2)
    arg17 = _mm256_broadcastd_epi32(zmm1[0])
    arg20 = _mm256_mask_broadcastss_ps(arg5, zmm12)
    rcx[0] = var_408 == 3
    rcx[0] = neg.b(rcx[0])
    arg12[0].o = _mm_mask_set1_epi8(arg5, rcx)
    arg18 = _mm256_mask_set1_epi32(arg5, rbx_1)
    rbx_2 = 0
    bool cond:9_1 = true
    uint64_t temp0_6[0x4] = _mm256_mask_load_epi64(arg5, data_143442140)
    arg21 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 4)
    arg19[0].o = _mm_mask_xor_epi32(arg5, arg19[0].o, arg19[0].o)
    arg22[0].o = _mm_mask_xor_ps(arg5, arg22[0].o, arg22[0].o)
    arg14[0].o = 0x3f800000
    zmm15 = data_142fc92e0
    arg13 = _mm256_cmpeq_epi32(arg13, arg13)
    arg5 = __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, arg12[0].o, data_142fc92e0)
    arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
    int64_t var_3e8_1 = arg3
    int32_t var_3f4_1 = arg4
    uint64_t var_3f0_1 = arg2
    int32_t var_3f8_1 = r11_4
    
    do
        uint32_t temp0_13[0x8] =
            _mm256_mask_slli_epi32(arg5, _mm256_mask_set1_epi32(arg5, rbx_2), 3)
        uint32_t temp0_14[0x8] = _mm256_mask_add_epi32(arg5, temp0_13, temp0_6)
        temp0_13[0].o = _mm_mask_xor_epi32(arg5, temp0_13[0].o, temp0_13[0].o)
        int64_t k1_2
        uint32_t temp0_16[0x8]
        temp0_16, k1_2 =
            _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(arg2 + temp0_14[0].q))
        arg25 = temp0_16
        uint32_t temp0_17[0x8] = _mm256_mask_or_epi32(arg5, temp0_14, arg21)
        arg28[0].o = _mm_mask_xor_epi32(arg5, arg28[0].o, arg28[0].o)
        int64_t k1_4
        uint32_t temp0_19[0x8]
        temp0_19, k1_4 =
            _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(arg2 + temp0_17[0].q))
        uint32_t temp0_20[0x8] = _mm256_mask_mullo_epi32(arg5, temp0_19, arg17)
        temp0_17[0].o = _mm_mask_xor_epi32(arg5, temp0_17[0].o, temp0_17[0].o)
        int64_t k1_6
        uint32_t temp0_22[0x8]
        temp0_22, k1_6 =
            _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(arg3 + temp0_20[0].q))
        arg27 = temp0_22
        zmm26 = _mm256_mask_add_epi32(arg5, temp0_20, arg21)
        temp0_20[0].o = _mm_mask_xor_epi32(arg5, temp0_20[0].o, temp0_20[0].o)
        int64_t k1_8
        uint32_t temp0_25[0x8]
        temp0_25, k1_8 =
            _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(arg3 + zmm26[0].q))
        int64_t k1_9 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(arg5, temp0_25, 2, 1)
        _kortest_mask8_u8(k1_9, k1_9)
        
        if (cond:9_1)
            arg12[0].o = zx.o(0)
            
            if (arg22[0].o f< zmm12)
            label_14010050f:
                bool cond:3_1 = zmm12 f>= arg14[0]
                arg29 = _mm256_mask_add_epi32(arg5, temp0_25, arg13)
                
                if (cond:3_1)
                    arg9[0].o = arg12[0].o & zmm15
                    int64_t k2_3 =
                        __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, arg9[0].o, zmm15)
                    arg28 = _mm256_mask_blend_epi32(k2_3, arg29, arg26)
                    arg29 = _mm256_mask_mov_epi32(k2_3, arg24)
                    zmm26[0].o = _mm_mask_xor_epi32(arg5, zmm26[0].o, zmm26[0].o)
                    arg24 = _mm256_mask_mov_epi64(arg5, arg29)
                else
                    arg30 = _mm256_mask_mul_ps(arg5, arg20, _mm256_mask_cvtepi32_ps(arg5, arg29))
                    arg31 = _mm256_mask_roundscale_ps(arg5, arg30, 9)
                    arg9 = _mm256_mask_cvttps_epi32(arg5, arg31)
                    _mm256_mask_min_epi32(arg5, arg29, arg9)
                    arg9[0].o = arg12[0].o & zmm15
                    int64_t k2_1 =
                        __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, arg9[0].o, zmm15)
                    arg28 = _mm256_mask_mov_epi32(k2_1, arg26)
                    zmm26[0].o = _mm_mask_xor_epi32(arg5, zmm26[0].o, zmm26[0].o)
                    
                    if (arg35 != 1)
                        _mm256_mask_sub_ps(arg5, arg30, arg31)
                    
                    _mm256_mask_min_epi32(arg5, _mm256_mask_sub_epi32(arg5, arg28, arg13), arg29)
                    arg9 = _mm256_mask_mov_epi32(k2_1, arg24)
                    arg24 = _mm256_mask_mov_epi64(arg5, arg9)
                
                goto label_1401005d2
            
        label_140100590:
            arg9[0].o = arg12[0].o & zmm15
            int64_t k2_2 = __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, arg9[0].o, zmm15)
            arg28 = _mm256_mask_mov_epi32(k2_2, arg26)
            zmm26[0].o = _mm_mask_xor_epi32(arg5, zmm26[0].o, zmm26[0].o)
            arg24 = _mm256_mask_mov_epi32(k2_2, arg24)
        label_1401005d2:
            arg9[0].o = arg12[0].o & zmm15
            zmm26 = _mm256_mask_mov_ps(
                __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, arg9[0].o, zmm15), arg23)
            arg26 = _mm256_mask_mov_epi64(arg5, arg28)
            arg23 = _mm256_mask_mov_ps(arg5, zmm26)
        else
            char temp0_26 = _cvtmask32_u32(k1_9)
            arg26 = _mm256_mask_mov_epi32(k1_9, arg19)
            arg24 = _mm256_mask_mov_epi32(k1_9, arg19)
            arg23 = _mm256_mask_mov_ps(k1_9, arg19)
            
            if (temp0_26 != 0xff)
                arg12[0].o = _mm_movm_epi16(k1_9)
                
                if (arg22[0].o f>= zmm12)
                    goto label_140100590
                
                goto label_14010050f
        
        arg28 =
            __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(_knot_mask8(_kor_mask8(k1_9, arg5)), 0x18)
        uint64_t r10_1 = zx.q(var_408)
        bool cond:4_1 = var_408 == 6
        float var_380_1[0x8]
        float var_360_1[0x8]
        float var_340_1[0x8]
        uint64_t k1_18
        
        if (var_408 u> 6)
        label_140100680:
            arg29[0].o = _mm_mask_xor_epi32(arg5, arg29[0].o, arg29[0].o)
            var_340_1 = _mm256_mask_store_epi64(arg5, arg29)
            var_360_1 = _mm256_mask_store_epi64(arg5, arg29)
            var_380_1 = _mm256_mask_store_epi64(arg5, arg29)
            arg30[0].o = _mm_mask_xor_ps(arg5, arg30[0].o, arg30[0].o)
            zmm26[0].o = _mm_mask_xor_epi32(arg5, zmm26[0].o, zmm26[0].o)
            k1_18 = _mm256_cmp_epi32_mask(arg5, arg26, arg24, 4)
            _kortest_mask8_u8(k1_18, k1_18)
            
            if (not(cond:4_1))
            label_1401006c0:
                float var_2c0_1[0x8]
                float var_2a0_1[0x8]
                float var_280_1[0x8]
                
                if (var_408 u> 6)
                label_140100760:
                    var_2c0_1 = _mm256_mask_storeu_ps(k1_18, arg19)
                    var_2a0_1 = _mm256_mask_storeu_ps(k1_18, arg19)
                    var_280_1 = _mm256_mask_storeu_ps(k1_18, arg19)
                else
                    arg31 = _mm256_mask_mullo_epi32(arg5, arg24, arg18)
                    
                    switch (r10_1)
                        case 0, 1
                            arg6 = _mm256_mask_add_epi32(arg5, 
                                _mm256_mask_add_epi32(arg5, arg28, arg27), arg31)
                            int64_t k2_6
                            float temp0_75[0x8]
                            temp0_75, k2_6 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(r12 + arg6[0].q))
                            arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 4)
                            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            int64_t k2_8
                            float temp0_78[0x8]
                            temp0_78, k2_8 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(r12 + arg7[0].q))
                            arg8 = temp0_78
                            arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 8)
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            int64_t k2_10
                            float temp0_81[0x8]
                            temp0_81, k2_10 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(r12 + arg6[0].q))
                            var_2c0_1 = _mm256_mask_storeu_ps(k1_18, temp0_75)
                            var_2a0_1 = _mm256_mask_storeu_ps(k1_18, arg8)
                            var_280_1 = _mm256_mask_storeu_ps(k1_18, temp0_81)
                        case 2
                            arg6 = _mm256_mask_add_epi32(arg5, arg28, arg27)
                            uint32_t temp0_193[0x8] = _mm256_mask_add_epi32(arg5, arg6, arg31)
                            arg6 = _mm256_mask_add_epi32(k1_18, arg6, arg31)
                            int64_t r8_3 = sx.q(arg6[0])
                            int64_t r9_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                            int64_t r10_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                            int64_t r11_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                            arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                            int64_t r14_5 = sx.q(arg6[0])
                            int64_t rdx_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                            int64_t rdi_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                            int64_t rsi_13 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                            arg6[0].o = zx.o(*(r12 + r8_3))
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + r9_4), 1)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + r10_2), 2)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + r11_8), 3)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + r14_5), 4)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + rdx_8), 5)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + rdi_11), 6)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + rsi_13), 7)
                            arg7 =
                                __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_18, temp0_193, 2)
                            int64_t r8_4 = sx.q(arg7[0])
                            int64_t r9_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
                            int64_t r10_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
                            int64_t r11_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
                            arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                            int64_t r14_6 = sx.q(arg7[0])
                            int64_t rdx_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
                            int64_t rdi_14 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
                            int64_t rsi_16 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
                            arg7[0].o = zx.o(*(r12 + r8_4))
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(r12 + r9_5), 1)
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(r12 + r10_3), 2)
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(r12 + r11_9), 3)
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(r12 + r14_6), 4)
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(r12 + rdx_11), 5)
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(r12 + rdi_14), 6)
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(r12 + rsi_16), 7)
                            uint32_t temp0_224[0x8] =
                                __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_18, temp0_193, 4)
                            int64_t r8_5 = sx.q(temp0_224[0])
                            int32_t temp0_225 = __vpextrd_gpr32d_xmmdq_immb(temp0_224[0].o, 1)
                            int64_t r9_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_224[0].o, 2))
                            int64_t r11_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_224[0].o, 3))
                            temp0_224[0].o = _mm256_extracti128_si256(temp0_224, 1)
                            int64_t r14_7 = sx.q(temp0_224[0])
                            int32_t temp0_229 = __vpextrd_gpr32d_xmmdq_immb(temp0_224[0].o, 1)
                            int64_t r15_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_224[0].o, 2))
                            int32_t temp0_231 = __vpextrd_gpr32d_xmmdq_immb(temp0_224[0].o, 3)
                            temp0_224[0].o = zx.o(*(r12 + r8_5))
                            temp0_224[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_224[0].o, 
                                *(r12 + sx.q(temp0_225)), 1)
                            temp0_224[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_224[0].o, *(r12 + r9_6), 2)
                            arg4 = var_3f4_1
                            arg3 = var_3e8_1
                            temp0_224[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_224[0].o, *(r12 + r11_10), 3)
                            r11_4 = var_3f8_1
                            arg2 = var_3f0_1
                            temp0_224[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_224[0].o, *(r12 + r14_7), 4)
                            temp0_224[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_224[0].o, 
                                *(r12 + sx.q(temp0_229)), 5)
                            temp0_224[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_224[0].o, *(r12 + r15_4), 6)
                            temp0_224[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_224[0].o, 
                                *(r12 + sx.q(temp0_231)), 7)
                            arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                            arg8 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                            float temp0_242[0x8] = _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, arg8))
                            arg9 = _mm256_broadcast_ss(32767f)
                            float temp0_244[0x8] = _mm256_div_ps(temp0_242, arg9)
                            float temp0_248[0x8] = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(arg7[0].o), arg8)), 
                                arg9)
                            zmm1 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(temp0_224[0].o), arg8)), 
                                arg9)
                            arg8 = _mm256_broadcast_ss(128f)
                            float temp0_254[0x8] = _mm256_mul_ps(temp0_244, arg8)
                            float temp0_255[0x8] = _mm256_mul_ps(temp0_248, arg8)
                            zmm1 = _mm256_mul_ps(zmm1, arg8)
                            var_2c0_1 = _mm256_mask_storeu_ps(k1_18, temp0_254)
                            var_2a0_1 = _mm256_mask_storeu_ps(k1_18, temp0_255)
                            var_280_1 = _mm256_mask_storeu_ps(k1_18, zmm1)
                            zmm26 = _mm256_mask_load_ps(arg5, var_380_1)
                            arg30 = _mm256_mask_load_ps(arg5, var_360_1)
                            arg29 = _mm256_mask_load_ps(arg5, var_340_1)
                        case 3
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int64_t k2_12
                            float temp0_264[0x8]
                            temp0_264, k2_12 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(r12 + arg27[0].q))
                            uint32_t temp0_265[0x8] =
                                __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg27, 4)
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            int64_t k2_14
                            float temp0_267[0x8]
                            temp0_267, k2_14 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(r12 + temp0_265[0].q))
                            uint32_t temp0_268[0x8] =
                                __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg27, 8)
                            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            int64_t k2_16
                            float temp0_270[0x8]
                            temp0_270, k2_16 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(r12 + temp0_268[0].q))
                            arg8 = temp0_270
                            uint32_t temp0_271[0x8] =
                                __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg27, 0xc)
                            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                            int64_t k2_18
                            float temp0_273[0x8]
                            temp0_273, k2_18 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(r12 + temp0_271[0].q))
                            uint32_t temp0_274[0x8] =
                                __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg27, 0x10)
                            arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                            int64_t k2_20
                            float temp0_276[0x8]
                            temp0_276, k2_20 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(r12 + temp0_274[0].q))
                            arg10 = temp0_276
                            uint32_t temp0_277[0x8] =
                                __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg27, 0x14)
                            arg32[0].o = _mm_mask_xor_ps(arg5, arg32[0].o, arg32[0].o)
                            int64_t k2_22
                            float temp0_279[0x8]
                            temp0_279, k2_22 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(r12 + temp0_277[0].q))
                            arg32 = temp0_279
                            uint32_t temp0_281[0x8] = _mm256_mask_add_epi32(arg5, 
                                _mm256_mask_add_epi32(arg5, arg28, arg27), arg31)
                            arg27[0].o = _mm_mask_xor_epi32(arg5, arg27[0].o, arg27[0].o)
                            int64_t k2_24
                            uint32_t temp0_283[0x8]
                            temp0_283, k2_24 = _mm256_mmask_i32gather_epi32(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(r12 + temp0_281[0].q))
                            uint32_t temp0_284[0x8] = _mm256_mask_srli_epi32(arg5, temp0_283, 0x15)
                            uint32_t temp0_286[0x8] = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                                arg5, _mm256_mask_srli_epi32(arg5, temp0_283, 0xa), 0x7ff)
                            arg27 = _mm256_mask3_fmadd_ps(
                                __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                    _mm256_mask_cvtepi32_ps(arg5, 
                                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                            __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                                temp0_283, 0x3ff), 
                                            0xfffffe01)), 
                                    0x43ff8000), 
                                arg5, temp0_273, temp0_264)
                            arg6 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                            float temp0_294[0x8] =
                                _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, temp0_286, arg6))
                            arg28 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                            arg9 = _mm256_fmadd_ps(_mm256_mask_div_ps(arg5, temp0_294, arg28), 
                                arg10, temp0_267)
                            float temp0_301[0x8] = _mm256_mask3_fmadd_ps(
                                _mm256_mask_div_ps(arg5, 
                                    _mm256_cvtepi32_ps(_mm256_add_epi32(temp0_284, arg6)), arg28), 
                                arg5, arg32, arg8)
                            var_2c0_1 = _mm256_mask_storeu_ps(k1_18, arg27)
                            var_2a0_1 = _mm256_mask_storeu_ps(k1_18, arg9)
                            var_280_1 = _mm256_mask_storeu_ps(k1_18, temp0_301)
                        case 4, 5, 6
                            goto label_140100760
                
                float temp0_305[0x8] = _mm256_mask_sub_ps(arg5, var_2c0_1, zmm26)
                zmm1 = _mm256_mask_sub_ps(arg5, var_2a0_1, arg30)
                float temp0_307[0x8] = _mm256_mask_sub_ps(arg5, var_280_1, arg29)
                arg6 = _mm256_mask3_fmadd_ps(temp0_305, arg5, arg23, zmm26)
                zmm1 = _mm256_mask3_fmadd_ps(zmm1, arg5, arg23, arg30)
                arg7 = _mm256_mask3_fmadd_ps(temp0_307, arg5, arg23, arg29)
                float temp0_311[0x8] = _mm256_mask_storeu_ps(k1_18, arg6)
                float temp0_312[0x8] = _mm256_mask_storeu_ps(k1_18, zmm1)
                float temp0_313[0x8] = _mm256_mask_storeu_ps(k1_18, arg7)
                zmm26 = _mm256_mask_load_ps(arg5, temp0_311)
                arg30 = _mm256_mask_load_ps(arg5, temp0_312)
                arg29 = _mm256_mask_load_ps(arg5, temp0_313)
        else
            zmm26 = _mm256_mask_mullo_epi32(arg5, arg26, arg18)
            int64_t rsi_1 = sx.q(jump_table_140101d2c[r10_1])
            cond:4_1 = rsi_1 == -0x140101d2c
            
            switch (rsi_1)
                case -0x1708
                    arg9 = _mm256_mask_add_epi32(arg5, _mm256_mask_add_epi32(arg5, arg28, arg27), 
                        zmm26)
                    zmm26[0].o = _mm_mask_xor_epi32(arg5, zmm26[0].o, zmm26[0].o)
                    int64_t k1_13
                    float temp0_59[0x8]
                    temp0_59, k1_13 =
                        _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(r12 + arg9[0].q))
                    zmm26 = temp0_59
                    uint32_t temp0_60[0x8] =
                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg9, 4)
                    arg30[0].o = _mm_mask_xor_ps(arg5, arg30[0].o, arg30[0].o)
                    int64_t k1_15
                    float temp0_62[0x8]
                    temp0_62, k1_15 =
                        _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(r12 + temp0_60[0].q))
                    arg30 = temp0_62
                    arg9 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg9, 8)
                    temp0_60[0].o = _mm_mask_xor_ps(arg5, temp0_60[0].o, temp0_60[0].o)
                    int64_t k1_17
                    float temp0_65[0x8]
                    temp0_65, k1_17 =
                        _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(r12 + arg9[0].q))
                    arg29 = temp0_65
                case -0x16ac
                    goto label_140100680
                case -0x15aa
                    arg9 = _mm256_mask_add_epi32(arg5, _mm256_mask_add_epi32(arg5, arg28, arg27), 
                        zmm26)
                    int64_t r15_1 = sx.q(arg9[0])
                    int64_t r8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1))
                    int64_t rsi_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
                    int64_t r13_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
                    arg12[0].o = _mm256_extracti128_si256(arg9, 1)
                    uint16_t* rdx = r12
                    int64_t r12_2 = sx.q(arg12[0])
                    int64_t r9_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 1))
                    int64_t r14_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 2))
                    int64_t rcx_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 3))
                    arg12[0].o = zx.o(*(rdx + r15_1))
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(rdx + r8), 1)
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(rdx + rsi_5), 2)
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(rdx + r13_2), 3)
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(rdx + r12_2), 4)
                    r12 = rdx
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(rdx + r9_1), 5)
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(rdx + r14_2), 6)
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(rdx + rcx_5), 7)
                    uint32_t temp0_104[0x8] =
                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg9, 2)
                    int64_t r8_1 = sx.q(temp0_104[0])
                    int64_t r9_2 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(temp0_104[0].o, 1))
                    int64_t r11_6 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(temp0_104[0].o, 2))
                    int64_t r14_3 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(temp0_104[0].o, 3))
                    arg6[0].o = _mm256_extracti32x4_epi32(arg5, temp0_104, 1)
                    int64_t r15_2 = sx.q(arg6[0])
                    int64_t rdi_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                    int64_t rsi_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                    int64_t rdx_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                    arg6[0].o = zx.o(*(r12 + r8_1))
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + r9_2), 1)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + r11_6), 2)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + r14_3), 3)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + r15_2), 4)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + rdi_5), 5)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + rsi_8), 6)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + rdx_3), 7)
                    arg9 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg9, 4)
                    int64_t r8_2 = sx.q(arg9[0])
                    int32_t temp0_120 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1)
                    int64_t r9_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
                    int64_t r14_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
                    arg9[0].o = _mm256_extracti128_si256(arg9, 1)
                    int64_t r15_3 = sx.q(arg9[0])
                    int32_t temp0_124 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1)
                    int64_t r13_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
                    int32_t temp0_126 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3)
                    arg9[0].o = zx.o(*(r12 + r8_2))
                    arg9[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(r12 + sx.q(temp0_120)), 1)
                    r11_4 = var_3f8_1
                    arg2 = var_3f0_1
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(r12 + r9_3), 2)
                    arg4 = var_3f4_1
                    arg3 = var_3e8_1
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(r12 + r14_4), 3)
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(r12 + r15_3), 4)
                    arg9[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(r12 + sx.q(temp0_124)), 5)
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(r12 + r13_3), 6)
                    r13 = arg37
                    arg9[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(r12 + sx.q(temp0_126)), 7)
                    zmm26 = _mm256_mask_cvtepu16_epi32(arg5, arg12[0].o)
                    uint32_t temp0_135[0x8] =
                        __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0xffff8001)
                    zmm26 =
                        _mm256_mask_cvtepi32_ps(arg5, _mm256_mask_add_epi32(arg5, zmm26, temp0_135))
                    float temp0_138[0x8] =
                        __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 32767f)
                    zmm26 = _mm256_mask_div_ps(arg5, zmm26, temp0_138)
                    arg6 = _mm256_mask_div_ps(arg5, 
                        _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, 
                            _mm256_cvtepu16_epi32(arg6[0].o), temp0_135)), 
                        temp0_138)
                    arg9 = _mm256_mask_div_ps(arg5, 
                        _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, 
                            _mm256_cvtepu16_epi32(arg9[0].o), temp0_135)), 
                        temp0_138)
                    arg29 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 128f)
                    zmm26 = _mm256_mask_mul_ps(arg5, zmm26, arg29)
                    arg30 = _mm256_mask_mul_ps(arg5, arg6, arg29)
                    arg29 = _mm256_mask_mul_ps(arg5, arg9, arg29)
                case -0x1359
                    int64_t k1_20
                    float temp0_152[0x8]
                    temp0_152, k1_20 =
                        _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(r12 + arg27[0].q))
                    uint32_t temp0_153[0x8] =
                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg27, 4)
                    arg31[0].o = _mm_mask_xor_ps(arg5, arg31[0].o, arg31[0].o)
                    int64_t k1_22
                    float temp0_155[0x8]
                    temp0_155, k1_22 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), 
                        *(r12 + temp0_153[0].q))
                    arg31 = temp0_155
                    uint32_t temp0_156[0x8] =
                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg27, 8)
                    arg32[0].o = _mm_mask_xor_ps(arg5, arg32[0].o, arg32[0].o)
                    int64_t k1_24
                    float temp0_158[0x8]
                    temp0_158, k1_24 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), 
                        *(r12 + temp0_156[0].q))
                    arg32 = temp0_158
                    uint32_t temp0_159[0x8] =
                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg27, 0xc)
                    arg30[0].o = _mm_mask_xor_ps(arg5, arg30[0].o, arg30[0].o)
                    int64_t k1_26
                    float temp0_161[0x8]
                    temp0_161, k1_26 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), 
                        *(r12 + temp0_159[0].q))
                    uint32_t temp0_162[0x8] =
                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg27, 0x10)
                    int64_t k1_28
                    float temp0_163[0x8]
                    temp0_163, k1_28 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), 
                        *(r12 + temp0_162[0].q))
                    arg12 = temp0_163
                    uint32_t temp0_164[0x8] =
                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg27, 0x14)
                    arg6[0].o = arg14[0].o
                    arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                    int64_t k1_30
                    float temp0_166[0x8]
                    temp0_166, k1_30 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), 
                        *(r12 + temp0_164[0].q))
                    arg14 = temp0_166
                    uint32_t temp0_167[0x8] = _mm256_mask_add_epi32(arg5, arg28, arg27)
                    uint32_t temp0_168[0x8] = _mm256_mask_add_epi32(arg5, temp0_167, zmm26)
                    temp0_167[0].o = _mm_mask_xor_epi32(arg5, temp0_167[0].o, temp0_167[0].o)
                    int64_t k1_32
                    uint32_t temp0_170[0x8]
                    temp0_170, k1_32 = _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), 
                        *(r12 + temp0_168[0].q))
                    arg15 = _mm256_mask_srli_epi32(arg5, temp0_170, 0x15)
                    uint32_t temp0_173[0x8] = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                        _mm256_mask_srli_epi32(arg5, temp0_170, 0xa), 0x7ff)
                    zmm26 = _mm256_mask3_fmadd_ps(
                        __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                            _mm256_mask_cvtepi32_ps(arg5, 
                                __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, temp0_170, 
                                        0x3ff), 
                                    0xfffffe01)), 
                            0x43ff8000), 
                        arg5, temp0_161, temp0_152)
                    arg9 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    arg29 =
                        _mm256_mask_cvtepi32_ps(arg5, _mm256_mask_add_epi32(arg5, temp0_173, arg9))
                    arg16 = _mm256_broadcast_ss(1023f)
                    arg30 = _mm256_mask3_fmadd_ps(_mm256_mask_div_ps(arg5, arg29, arg16), arg5, 
                        arg12, arg31)
                    arg9 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg15, arg9))
                    arg29 = _mm256_mask3_fmadd_ps(_mm256_mask_div_ps(arg5, arg9, arg16), arg5, 
                        arg14, arg32)
                    arg14[0].o = arg6[0].o
            
            var_380_1 = _mm256_mask_store_ps(arg5, zmm26)
            var_360_1 = _mm256_mask_store_ps(arg5, arg30)
            var_340_1 = _mm256_mask_store_ps(arg5, arg29)
            k1_18 = _mm256_cmp_epi32_mask(arg5, arg26, arg24, 4)
            _kortest_mask8_u8(k1_18, k1_18)
            
            if (rsi_1 != -0x140101d2c)
                goto label_1401006c0
        arg6[0].o = _mm256_extractf32x4_ps(arg5, zmm26, 1)
        arg9[0].o = _mm256_extractf32x4_ps(arg5, arg30, 1)
        arg12[0].o = _mm_mask_unpacklo_ps(arg5, arg29[0].o, arg11[0].o)
        zmm1[0].o = _mm_mask_unpackhi_ps(arg5, arg29[0].o, arg11[0].o)
        arg8[0].o = _mm_mask_unpacklo_ps(arg5, zmm26[0].o, arg30[0].o)
        arg7[0].o = _mm_mask_unpackhi_ps(arg5, zmm26[0].o, arg30[0].o)
        arg10[0].o = arg8[0].q | arg12[0].q << 0x40
        int128_t var_240 = arg10[0].o
        arg8[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg12[0].o)
        int128_t var_230_1 = arg8[0].o
        arg8[0].o = arg7[0].q | zmm1[0].q << 0x40
        int128_t var_220_1 = arg8[0].o
        zmm1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
        int128_t var_210_1 = zmm1[0].o
        zmm1[0].o = _mm256_extractf32x4_ps(arg5, arg29, 1)
        arg7[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
        zmm1[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg11[0].o)
        arg8[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg9[0].o)
        arg6[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg9[0].o)
        arg9[0].o = arg8[0].q | arg7[0].q << 0x40
        int128_t var_200_1 = arg9[0].o
        arg7[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
        int128_t var_1f0_1 = arg7[0].o
        arg7[0].o = arg6[0].q | zmm1[0].q << 0x40
        int128_t var_1e0_1 = arg7[0].o
        arg6[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
        int128_t var_1d0_1 = arg6[0].o
        uint64_t rcx_27
        int64_t r15_5
        
        for (uint64_t i_1 = 0xff; i_1 != 0; i_1 = r15_5 & rol.q(-2, rcx_27.b))
            uint64_t rcx_23 = _tzcnt_u64(i_1)
            uint64_t var_260[0x4] = _mm256_mask_store_epi64(arg5, arg25)
            r15_5 = i_1 & not.q(1 << (rcx_23 u% 0x40))
            arg6[0].o = (&var_240)[rcx_23]
            *(arg1 + sx.q(*(&var_260 + ((zx.q(rcx_23.d) & 7) << 2))) * 0x30 + 0x20) = arg6[0].o
            rcx_27 = _tzcnt_u64(r15_5)
            arg6[0].o = (&var_240)[rcx_27]
            *(arg1 + sx.q(*(&var_260 + ((zx.q(rcx_27.d) & 7) << 2))) * 0x30 + 0x20) = arg6[0].o
        
        rbx_2 += 8
        cond:9_1 = rbx_2 == r11_4
    while (rbx_2 s< r11_4)
    
    cond:1 = rbx_2 == r13
    
    if (rbx_2 s< r13)
        goto label_1401010ac
arg11[0].o = var_e8
arg12[0].o = var_d8
arg13[0].o = var_c8
arg14[0].o = var_b8
arg15[0].o = var_a8
arg16[0].o = var_98
arg17[0].o = var_78
arg18[0].o = var_68
_mm256_zeroupper()
return arg1
