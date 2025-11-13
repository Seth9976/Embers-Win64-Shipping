// 函数: sub_140106160
// 地址: 0x140106160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg17[0].o
int128_t var_68 = arg16[0].o
int128_t var_78 = arg15[0].o
int128_t var_88 = arg14[0].o
int128_t var_a8 = arg13[0].o
int128_t var_b8 = arg12[0].o
int128_t var_c8 = arg11[0].o
int128_t var_d8 = arg10[0].o
int128_t var_e8 = arg9[0].o
int64_t rdi = sx.q(arg21)
float zmm11[0x8]
zmm11[0].o = arg19
int32_t var_548 = rdi.d
int32_t rbx_1 = *(&data_1434422b0 + (rdi << 2)) * *(&data_143442290 + (rdi << 2))
int32_t r10_4 = ((arg22 s>> 0x1f u>> 0x1d) + arg22) & 0xfffffff8
int32_t rcx_36
int32_t rbx_2
int64_t r13
uint32_t zmm0[0x8]
float zmm3[0x8]

if (r10_4 s<= 0)
    rbx_2 = 0
    r13 = arg3
    rcx_36 = arg22
    
    if (0 s< rcx_36)
    label_140106f08:
        zmm0[0].o = zx.o(rbx_2)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
        arg5[0].o = zx.o(rcx_36)
        arg16 = _mm256_cmpgt_epi32(_mm256_broadcastd_epi32(arg5[0]), zmm0)
        uint32_t temp0_346[0x8] = _mm256_slli_epi32(zmm0, 3)
        arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
        uint32_t temp0_348[0x8]
        int32_t temp1_25
        temp0_348, temp1_25 = _mm256_i32gather_epi32(arg15, *(arg2 + temp0_346[0].q), arg16)
        arg15 = temp0_348
        arg6 = temp1_25
        arg7 = __vpbroadcastd_ymmqq_memd(4)
        zmm0 = temp0_346 | arg7
        arg6[0].o = zx.o(0)
        uint32_t temp0_350[0x8]
        int32_t temp1_26
        temp0_350, temp1_26 = _mm256_i32gather_epi32(arg6, *(arg2 + zmm0[0].q), arg16)
        zmm0[0].o = zx.o(arg4)
        zmm0 = _mm256_mullo_epi32(temp0_350, _mm256_broadcastd_epi32(_mm256_slli_epi32(zmm0, 2)[0]))
        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        uint32_t temp0_355[0x8]
        int32_t temp1_27
        temp0_355, temp1_27 = _mm256_i32gather_epi32(arg8, *(r13 + zmm0[0].q), arg16)
        arg8 = temp0_355
        arg6 = _mm256_add_epi32(zmm0, arg7)
        zmm0[0].o = zx.o(0)
        uint32_t temp0_357[0x8]
        int32_t temp1_28
        temp0_357, temp1_28 = _mm256_i32gather_epi32(zmm0, *(r13 + arg6[0].q), arg16)
        zmm3 = temp1_28
        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
        arg5 = __vpbroadcastd_ymmqq_memd(2)
        int32_t var_420_2[0x8] = arg5
        arg6 = _mm256_cmpgt_epi32(arg5, temp0_357) & arg16
        zmm3[0].o = _mm256_extracti128_si256(arg6, 1)
        arg9[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
        arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg9[0].o, temp0_357[0].o)
        char temp0_364 = __vpmovmskb_gpr32d_xmmdq(arg6[0].o)
        zmm3[0].o = zx.o(0)
        
        if (temp0_364 == 0)
            goto label_140106fe9
        
        char temp0_365 = _mm256_movemask_ps(arg16)
        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
        arg11[0].o = zx.o(0)
        arg17[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg17[0].o, arg17[0].o)
        
        if (temp0_365 != temp0_364)
            zmm3 = _mm256_cvtepi16_epi32(arg9[0].o)
        label_140106fe9:
            arg9 = _mm256_cmpeq_epi32(arg9, arg9)
            zmm3 ^= arg9
            arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
            bool cond:3_1 = arg10[0].o f>= zmm11[0]
            arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
            arg11[0].o = zx.o(0)
            
            if (not(cond:3_1))
                arg11 = _mm256_add_epi32(temp0_357, arg9)
                
                if (zmm11[0].o f>= 1f)
                    arg9 = zmm3 & arg16
                    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                    arg10 = _mm256_blendv_ps(arg12, arg11, arg9)
                    arg11 = arg10
                else
                    float temp0_375[0x8] =
                        _mm256_mul_ps(_mm256_broadcastss_ps(zmm11[0].o), _mm256_cvtepi32_ps(arg11))
                    arg9 = zmm3 & arg16
                    arg14 = _mm256_round_ps(temp0_375, 9)
                    int32_t temp0_378[0x8] = _mm256_min_epi32(arg11, _mm256_cvttps_epi32(arg14))
                    arg13[0].o = zx.o(0)
                    arg10 = _mm256_blendv_ps(arg13, temp0_378, arg9)
                    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                    
                    if (arg20 != 1)
                        arg12 = _mm256_sub_ps(temp0_375, arg14)
                    
                    zmm11 = _mm256_sub_epi32(arg10, _mm256_cmpeq_epi32(temp0_375, temp0_375))
                    arg11 = _mm256_blendv_ps(arg13, _mm256_min_epi32(zmm11, arg11), arg9)
            
            arg9[0].o = zx.o(0)
            arg17 = _mm256_blendv_ps(arg9, arg12, zmm3)
        
        int32_t rcx_38
        rcx_38.b = var_548 == 3
        arg9[0].o = zx.o(neg.d(rcx_38))
        arg9 = _mm256_broadcastd_epi32(arg9[0])
        zmm0 = _mm256_cmpgt_epi32(temp0_357, __vpbroadcastd_ymmqq_memd(1)) & arg9
        arg12 = _mm256_broadcast_ss(3.36311631e-44f)
        arg9[0].o = zx.o(0)
        arg6 = _mm256_blendv_ps(arg9, arg12, zmm0)
        zmm3[0].o = zx.o(rbx_1)
        arg12 = _mm256_broadcastd_epi32(zmm3[0])
        uint64_t rcx_40 = zx.q(var_548)
        float var_500_1[0x8]
        float var_4e0_1[0x8]
        float var_4c0_1[0x8]
        
        if (var_548 u> 6)
        label_1401074ee:
            var_500_1 = _mm256_maskstore_ps(arg16, arg9)
            var_4e0_1 = _mm256_maskstore_ps(arg16, arg9)
            var_4c0_1 = _mm256_maskstore_ps(arg16, arg9)
        else
            arg5 = _mm256_mullo_epi32(arg10, arg12)
            
            switch (rcx_40)
                case 0, 1
                    zmm3 = _mm256_add_epi32(_mm256_add_epi32(arg8, arg6), arg5)
                    arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zx.o(0), zx.o(0))
                    zmm11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm11[0].o, zmm11[0].o)
                    float temp0_400[0x8]
                    int32_t temp1_29
                    temp0_400, temp1_29 = _mm256_i32gather_ps(zmm11, *(arg18 + zmm3[0].q), arg16)
                    arg13 = _mm256_add_epi32(zmm3, arg7)
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    float temp0_403[0x8]
                    int32_t temp1_30
                    temp0_403, temp1_30 = _mm256_i32gather_ps(zmm0, *(arg18 + arg13[0].q), arg16)
                    arg14 = temp1_30
                    zmm3 = _mm256_add_epi32(zmm3, __vpbroadcastd_ymmqq_memd(8))
                    float temp0_406[0x8]
                    int32_t temp1_31
                    temp0_406, temp1_31 = _mm256_i32gather_ps(arg9, *(arg18 + zmm3[0].q), arg16)
                    arg9 = temp0_406
                    arg13 = temp1_31
                    var_500_1 = _mm256_maskstore_ps(arg16, temp0_400)
                    var_4e0_1 = _mm256_maskstore_ps(arg16, temp0_403)
                    var_4c0_1 = _mm256_maskstore_ps(arg16, arg9)
                case 2
                    float temp0_410[0x8] = _mm256_add_epi32(_mm256_add_epi32(arg8, arg6), arg5)
                    zmm0 = arg16 & temp0_410
                    int64_t r9_7 = sx.q(zmm0[0])
                    int64_t r10_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    int32_t temp0_412 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                    int64_t r11_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                    int64_t r15_8 = sx.q(zmm0[0])
                    int64_t rbx_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    int32_t temp0_416 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                    int64_t rdi_36 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = zx.o(*(arg18 + r9_7))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + r10_11), 1)
                    zmm0[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + sx.q(temp0_412)), 2)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + r11_7), 3)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + r15_8), 4)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + rbx_8), 5)
                    zmm0[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + sx.q(temp0_416)), 6)
                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + rdi_36), 7)
                    zmm0 = arg16 & __vpaddd_ymmqq_ymmqq_memqq(temp0_410, var_420_2)
                    int64_t r9_8 = sx.q(zmm0[0])
                    int64_t r10_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    int64_t r11_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    int64_t r14_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                    int64_t r15_9 = sx.q(zmm0[0])
                    int64_t rbx_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    int64_t rdi_39 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    int32_t temp0_432 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                    zmm0[0].o = zx.o(*(arg18 + r9_8))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + r10_12), 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + r11_8), 2)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + r14_6), 3)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + r15_9), 4)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + rbx_11), 5)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + rdi_39), 6)
                    arg14[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + sx.q(temp0_432)), 7)
                    zmm0 = arg16 & _mm256_add_epi32(temp0_410, arg7)
                    uint32_t rdx_9 = zmm0[0]
                    int64_t r9_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    int64_t r10_13 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    int64_t rsi_28 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                    uint32_t rbx_13 = zmm0[0]
                    int64_t rdi_42 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    int64_t r14_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    int64_t r15_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = zx.o(*(arg18 + sx.q(rdx_9)))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + r9_9), 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + r10_13), 2)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + rsi_28), 3)
                    zmm0[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + sx.q(rbx_13)), 4)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + rdi_42), 5)
                    arg5 = arg6
                    arg6 = _mm256_cvtepu16_epi32(arg13[0].o)
                    zmm3 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                    float temp0_456[0x8] = _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, zmm3))
                    float temp0_457[0x8] = _mm256_broadcast_ss(32767f)
                    float temp0_458[0x8] = _mm256_div_ps(temp0_456, temp0_457)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + r14_7), 6)
                    arg13 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(arg14[0].o), 
                            zmm3)), 
                        temp0_457)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + r15_10), 7)
                    zmm0 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 
                            zmm3)), 
                        temp0_457)
                    zmm3 = _mm256_broadcast_ss(128f)
                    float temp0_470[0x8] = _mm256_mul_ps(temp0_458, zmm3)
                    arg9 = _mm256_mul_ps(arg13, zmm3)
                    zmm0 = _mm256_mul_ps(zmm0, zmm3)
                    var_500_1 = _mm256_maskstore_ps(arg16, temp0_470)
                    arg6 = arg5
                    var_4e0_1 = _mm256_maskstore_ps(arg16, arg9)
                    var_4c0_1 = _mm256_maskstore_ps(arg16, zmm0)
                case 3
                    arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                    float temp0_476[0x8]
                    int32_t temp1_32
                    temp0_476, temp1_32 = _mm256_i32gather_ps(arg14, *(arg18 + arg8[0].q), arg16)
                    zmm3 = _mm256_add_epi32(arg8, arg7)
                    arg13[0].o = zx.o(0)
                    float temp0_478[0x8]
                    int32_t temp1_33
                    temp0_478, temp1_33 = _mm256_i32gather_ps(arg13, *(arg18 + zmm3[0].q), arg16)
                    arg13 = temp0_478
                    zmm3 = _mm256_add_epi32(arg8, __vpbroadcastd_ymmqq_memd(8))
                    zmm11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm11[0].o, zmm11[0].o)
                    float temp0_482[0x8]
                    int32_t temp1_34
                    temp0_482, temp1_34 = _mm256_i32gather_ps(zmm11, *(arg18 + zmm3[0].q), arg16)
                    arg9 = temp1_34
                    zmm3 = _mm256_add_epi32(arg8, __vpbroadcastd_ymmqq_memd(0xc))
                    arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                    float var_520_2[0x8] = arg6
                    float temp0_486[0x8]
                    int32_t temp1_35
                    temp0_486, temp1_35 = _mm256_i32gather_ps(arg9, *(arg18 + zmm3[0].q), arg16)
                    arg6 = _mm256_add_epi32(arg8, __vpbroadcastd_ymmqq_memd(0x10))
                    zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                    int32_t var_440_2[0x8] = arg7
                    arg7 = arg16
                    float temp0_490[0x8]
                    int32_t temp1_36
                    temp0_490, temp1_36 = _mm256_i32gather_ps(zmm3, *(arg18 + arg6[0].q), arg16)
                    zmm3 = temp0_490
                    arg6[0].o = zx.o(0)
                    arg16 = _mm256_add_epi32(arg8, __vpbroadcastd_ymmqq_memd(0x14))
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    float temp0_494[0x8]
                    int32_t temp1_37
                    temp0_494, temp1_37 = _mm256_i32gather_ps(zmm0, *(arg18 + arg16[0].q), arg7)
                    uint32_t temp0_497[0x8]
                    int32_t temp1_38
                    temp0_497, temp1_38 = _mm256_i32gather_epi32(arg6, 
                        *(arg18 + _mm256_add_epi32(__vpaddd_ymmqq_ymmqq_memqq(arg8, var_520_2), 
                            arg5)[0].q), 
                        arg7)
                    arg6 = temp0_497
                    arg5 = _mm256_srli_epi32(arg6, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                    arg16 = _mm256_fmadd_ps(
                        _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(
                                arg6 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f)), 
                        temp0_486, temp0_476)
                    arg9 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    float temp0_509[0x8] = _mm256_cvtepi32_ps(_mm256_add_epi32(arg5, arg9))
                    arg5 = _mm256_broadcast_ss(1023f)
                    float temp0_511[0x8] = _mm256_div_ps(temp0_509, arg5)
                    arg6 = _mm256_srli_epi32(arg6, 0x15)
                    arg14 = _mm256_fmadd_ps(temp0_511, zmm3, arg13)
                    float temp0_517[0x8] = _mm256_fmadd_ps(
                        _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(arg6, arg9)), arg5), 
                        temp0_494, temp0_482)
                    var_500_1 = _mm256_maskstore_ps(arg7, arg16)
                    arg16 = arg7
                    arg7 = var_440_2
                    var_4e0_1 = _mm256_maskstore_ps(arg16, arg14)
                    var_4c0_1 = _mm256_maskstore_ps(arg16, temp0_517)
                    arg6 = var_520_2
                case 4, 5
                    goto label_1401074ee
                case 6
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    var_500_1 = _mm256_maskstore_ps(arg16, zmm0)
                    var_4e0_1 = _mm256_maskstore_ps(arg16, zmm0)
                    var_4c0_1 = _mm256_maskstore_ps(arg16, zmm0)
        
        zmm0 = _mm256_cmpeq_epi32(arg10, arg11)
        arg10 = zmm0 & not.32(arg16)
        zmm0[0].o = _mm256_extracti128_si256(arg10, 1)
        arg9[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0)
            float var_400_1[0x8]
            float var_3e0_1[0x8]
            float var_3c0_1[0x8]
            
            if (var_548 u> 6)
            label_1401075d1:
                zmm0[0].o = zx.o(0)
                var_400_1 = _mm256_maskstore_ps(arg10, zmm0)
                var_3e0_1 = _mm256_maskstore_ps(arg10, zmm0)
                var_3c0_1 = _mm256_maskstore_ps(arg10, zmm0)
            else
                arg12 = _mm256_mullo_epi32(arg11, arg12)
                
                switch (rcx_40)
                    case 0, 1
                        zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg8, arg6), arg12)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        float temp0_538[0x8]
                        int32_t temp1_39
                        temp0_538, temp1_39 = _mm256_i32gather_ps(arg6, *(arg18 + zmm0[0].q), arg10)
                        zmm3 = _mm256_add_epi32(zmm0, arg7)
                        arg7[0].o = zx.o(0)
                        float temp0_540[0x8]
                        int32_t temp1_40
                        temp0_540, temp1_40 = _mm256_i32gather_ps(arg7, *(arg18 + zmm3[0].q), arg10)
                        float temp0_543[0x8]
                        int32_t temp1_41
                        temp0_543, temp1_41 = _mm256_i32gather_ps(arg5, 
                            *(arg18 + _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(8))[0].q), 
                            arg10)
                        var_400_1 = _mm256_maskstore_ps(arg10, temp0_538)
                        var_3e0_1 = _mm256_maskstore_ps(arg10, temp0_540)
                        var_3c0_1 = _mm256_maskstore_ps(arg10, temp0_543)
                    case 2
                        zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg8, arg6), arg12)
                        arg8 = _mm256_srai_epi32(
                            _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg9[0].o), 0x1f), 0x1f)
                        arg5 = arg8 & zmm0
                        int64_t r9_10 = sx.q(arg5[0])
                        int64_t r10_14 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        int32_t temp0_555 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
                        int64_t r11_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                        arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                        int64_t rsi_30 = sx.q(arg5[0])
                        int64_t rcx_45 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        int32_t temp0_559 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
                        int64_t rdi_45 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                        arg5[0].o = zx.o(*(arg18 + r9_10))
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg18 + r10_14), 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, 
                            *(arg18 + sx.q(temp0_555)), 2)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg18 + r11_10), 3)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg18 + rsi_30), 4)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg18 + rcx_45), 5)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, 
                            *(arg18 + sx.q(temp0_559)), 6)
                        arg11[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg18 + rdi_45), 7)
                        arg5 = arg8 & __vpaddd_ymmqq_ymmqq_memqq(zmm0, var_420_2)
                        int64_t r9_11 = sx.q(arg5[0])
                        int64_t r10_15 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        int64_t r11_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                        int64_t r14_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                        arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                        int64_t rsi_32 = sx.q(arg5[0])
                        int64_t rcx_48 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        int64_t rdx_19 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                        int32_t temp0_575 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
                        arg5[0].o = zx.o(*(arg18 + r9_11))
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg18 + r10_15), 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg18 + r11_11), 2)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg18 + r14_9), 3)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg18 + rsi_32), 4)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg18 + rcx_48), 5)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg18 + rdx_19), 6)
                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, 
                            *(arg18 + sx.q(temp0_575)), 7)
                        zmm0 = arg8 & _mm256_add_epi32(zmm0, arg7)
                        uint32_t rcx_50 = zmm0[0]
                        int64_t r9_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t r10_16 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int64_t rdi_49 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        uint32_t rsi_33 = zmm0[0]
                        int64_t rdx_22 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int64_t r11_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                        int64_t rbx_22 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = zx.o(*(arg18 + sx.q(rcx_50)))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + r9_12), 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + r10_16), 2)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + rdi_49), 3)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + sx.q(rsi_33)), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + rdx_22), 5)
                        arg5 = _mm256_cvtepu16_epi32(arg11[0].o)
                        arg6 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                        arg5 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg5, arg6))
                        float temp0_600[0x8] = _mm256_broadcast_ss(32767f)
                        arg5 = _mm256_div_ps(arg5, temp0_600)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + r11_12), 6)
                        arg7 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(arg9[0].o), 
                                arg6)), 
                            temp0_600)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + rbx_22), 7)
                        zmm0 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 
                                arg6)), 
                            temp0_600)
                        float temp0_612[0x8] = _mm256_broadcast_ss(128f)
                        arg5 = _mm256_mul_ps(arg5, temp0_612)
                        float temp0_614[0x8] = _mm256_mul_ps(arg7, temp0_612)
                        zmm0 = _mm256_mul_ps(zmm0, temp0_612)
                        var_400_1 = _mm256_maskstore_ps(arg10, arg5)
                        var_3e0_1 = _mm256_maskstore_ps(arg10, temp0_614)
                        var_3c0_1 = _mm256_maskstore_ps(arg10, zmm0)
                    case 3
                        arg9[0].o = zx.o(0)
                        float temp0_618[0x8]
                        int32_t temp1_42
                        temp0_618, temp1_42 = _mm256_i32gather_ps(arg9, *(arg18 + arg8[0].q), arg10)
                        arg9 = temp0_618
                        zmm0 = temp1_42
                        int32_t temp0_619[0x8] = _mm256_add_epi32(arg8, arg7)
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        arg14 = arg6
                        float temp0_621[0x8]
                        int32_t temp1_43
                        temp0_621, temp1_43 =
                            _mm256_i32gather_ps(zmm0, *(arg18 + temp0_619[0].q), arg10)
                        int32_t temp0_623[0x8] =
                            _mm256_add_epi32(arg8, __vpbroadcastd_ymmqq_memd(8))
                        arg11[0].o = zx.o(0)
                        float temp0_624[0x8]
                        int32_t temp1_44
                        temp0_624, temp1_44 =
                            _mm256_i32gather_ps(arg11, *(arg18 + temp0_623[0].q), arg10)
                        arg11 = temp0_624
                        int32_t temp0_626[0x8] =
                            _mm256_add_epi32(arg8, __vpbroadcastd_ymmqq_memd(0xc))
                        arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                        float temp0_628[0x8]
                        int32_t temp1_45
                        temp0_628, temp1_45 =
                            _mm256_i32gather_ps(arg13, *(arg18 + temp0_626[0].q), arg10)
                        arg13 = temp0_628
                        arg6 = temp1_45
                        int32_t temp0_630[0x8] =
                            _mm256_add_epi32(arg8, __vpbroadcastd_ymmqq_memd(0x10))
                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        float temp0_632[0x8]
                        int32_t temp1_46
                        temp0_632, temp1_46 =
                            _mm256_i32gather_ps(arg6, *(arg18 + temp0_630[0].q), arg10)
                        temp0_630[0].o = zx.o(0)
                        zmm3 = _mm256_add_epi32(arg8, __vpbroadcastd_ymmqq_memd(0x14))
                        arg7[0].o = zx.o(0)
                        float temp0_635[0x8]
                        int32_t temp1_47
                        temp0_635, temp1_47 = _mm256_i32gather_ps(arg7, *(arg18 + zmm3[0].q), arg10)
                        uint32_t temp0_638[0x8]
                        int32_t temp1_48
                        temp0_638, temp1_48 = _mm256_i32gather_epi32(temp0_630, 
                            *(arg18 + _mm256_add_epi32(_mm256_add_epi32(arg8, arg14), arg12)[0].q), 
                            arg10)
                        arg5 = temp0_638
                        zmm3 = _mm256_srli_epi32(arg5, 0x15)
                        arg8 = _mm256_srli_epi32(arg5, 0xa)
                        arg12 = __vpbroadcastd_ymmqq_memd(0x7ff)
                        arg5 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(
                                arg5 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f))
                        arg8 &= arg12
                        arg12 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        float temp0_650[0x8] = _mm256_cvtepi32_ps(_mm256_add_epi32(arg8, arg12))
                        float temp0_651[0x8] = _mm256_broadcast_ss(1023f)
                        float temp0_652[0x8] = _mm256_div_ps(temp0_650, temp0_651)
                        arg5 = _mm256_fmadd_ps(arg5, arg13, arg9)
                        float temp0_654[0x8] = _mm256_fmadd_ps(temp0_652, temp0_632, temp0_621)
                        zmm0 = _mm256_fmadd_ps(
                            _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm3, arg12)), 
                                temp0_651), 
                            temp0_635, arg11)
                        var_400_1 = _mm256_maskstore_ps(arg10, arg5)
                        var_3e0_1 = _mm256_maskstore_ps(arg10, temp0_654)
                        var_3c0_1 = _mm256_maskstore_ps(arg10, zmm0)
                    case 4, 5, 6
                        goto label_1401075d1
            
            zmm3 = var_500_1
            arg7 = var_4e0_1
            arg8 = var_4c0_1
            zmm0 = _mm256_sub_ps(var_400_1, zmm3)
            arg5 = _mm256_sub_ps(var_3e0_1, arg7)
            float temp0_664[0x8] = _mm256_sub_ps(var_3c0_1, arg8)
            zmm0 = _mm256_fmadd_ps(zmm0, arg17, zmm3)
            arg5 = _mm256_fmadd_ps(arg5, arg17, arg7)
            arg6 = _mm256_fmadd_ps(temp0_664, arg17, arg8)
            var_500_1 = _mm256_maskstore_ps(arg10, zmm0)
            var_4e0_1 = _mm256_maskstore_ps(arg10, arg5)
            var_4c0_1 = _mm256_maskstore_ps(arg10, arg6)
        
        zmm0[0].o = var_500_1[0].o
        arg12[0].o = var_500_1[4].o
        zmm3[0].o = var_4e0_1[0].o
        int128_t var_4d0
        arg8[0].o = var_4d0
        arg9[0].o = var_4c0_1[0].o
        arg10[0].o = var_4c0_1[4].o
        arg11[0].o = zx.o(0)
        arg5[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg9[0].o, zx.o(0))
        arg7[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, arg9[0].o, 0x28)
        int128_t var_260 = arg6[0].o
        arg6[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg9[0].o, zx.o(0))
        arg5[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg5[0].o)
        int128_t var_250_1 = arg5[0].o
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg9[0].o, 0xa8)
        int128_t var_240_1 = arg5[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
        int128_t var_230_1 = zmm0[0].o
        zmm0[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg10[0].o, zx.o(0))
        arg5[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg8[0].o)
        arg6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, arg10[0].o, 0x28)
        int128_t var_220_1 = arg6[0].o
        arg6[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg10[0].o, zx.o(0))
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
        int128_t var_210_1 = zmm0[0].o
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg8[0].o)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg10[0].o, 0xa8)
        int128_t var_200_1 = arg5[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
        int128_t var_1f0_1 = zmm0[0].o
        uint64_t i = zx.q(_mm256_movemask_ps(arg16))
        
        do
            uint64_t rcx_54 = _tzcnt_u64(i)
            float var_120[0x8] = arg15
            zmm0[0].o = (&var_260)[rcx_54]
            *(arg1 + sx.q(var_120[zx.q(rcx_54.d) & 7]) * 0x30 + 0x20) = zmm0[0].o
            i &= rol.q(-2, rcx_54.b)
        while (i != 0)
else
    zmm0[0].o = zx.o(arg4)
    uint32_t temp0_2[0x8] = _mm256_broadcastd_epi32(_mm256_slli_epi32(zmm0, 2)[0])
    zmm0 = _mm256_broadcastss_ps(zmm11[0].o)
    uint32_t var_1a0_1[0x8] = zmm0
    int32_t rcx_1
    rcx_1.b = var_548 == 3
    zmm0[0].o = zx.o(neg.d(rcx_1))
    arg11 = _mm256_broadcastd_epi32(zmm0[0])
    zmm0[0].o = zx.o(rbx_1)
    uint32_t temp0_5[0x8] = _mm256_broadcastd_epi32(zmm0[0])
    rbx_2 = 0
    arg13 = _mm256_cmpeq_epi32(arg13, arg13)
    uint32_t var_520_1[0x8] = _mm256_broadcast_ss(5.60519386e-45f)
    uint32_t var_440_1[0x8] = _mm256_broadcast_ss(2.80259693e-45f)
    arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
    uint32_t var_160_1[0x8] = _mm256_broadcast_ss(1.40129846e-45f)
    zmm0 = _mm256_broadcast_ss(3.36311631e-44f)
    uint32_t var_180_1[0x8] = zmm0
    r13 = arg3
    int32_t var_53c_1 = arg4
    int64_t var_528_1 = arg2
    int32_t var_540_1 = r10_4
    uint32_t var_320_1[0x8] = arg11
    
    do
        zmm0[0].o = zx.o(rbx_2)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_slli_epi32(_mm256_broadcastd_epi32(zmm0[0]), 3), 
            data_143442140)
        arg16[0].o = zx.o(0)
        arg5 = _mm256_cmpeq_epi32(arg5, arg5)
        uint32_t temp0_16[0x8]
        int32_t temp1_1
        temp0_16, temp1_1 = _mm256_i32gather_epi32(arg16, *(arg2 + zmm0[0].q), arg5)
        arg16 = temp0_16
        arg5 = temp1_1
        zmm3 = var_520_1
        arg5[0].o = zx.o(0)
        arg6 = _mm256_cmpeq_epi32(arg6, arg6)
        uint32_t temp0_18[0x8]
        int32_t temp1_2
        temp0_18, temp1_2 = _mm256_i32gather_epi32(arg5, *(arg2 + (zmm0 | zmm3)[0].q), arg6)
        arg5 = temp0_18
        arg6 = temp1_2
        zmm0 = __vpmulld_ymmqq_ymmqq_memqq(arg5, temp0_2)
        arg8[0].o = zx.o(0)
        arg5 = _mm256_cmpeq_epi32(arg5, arg5)
        uint32_t temp0_21[0x8]
        int32_t temp1_3
        temp0_21, temp1_3 = _mm256_i32gather_epi32(arg8, *(r13 + zmm0[0].q), arg5)
        arg8 = temp0_21
        int32_t temp0_22[0x8] = _mm256_add_epi32(zmm0, zmm3)
        zmm0[0].o = zx.o(0)
        arg6 = _mm256_cmpeq_epi32(arg6, arg6)
        uint32_t temp0_24[0x8]
        int32_t temp1_4
        temp0_24, temp1_4 = _mm256_i32gather_epi32(zmm0, *(r13 + temp0_22[0].q), arg6)
        arg6 = temp1_4
        arg5 = _mm256_cmpgt_epi32(var_440_1, temp0_24)
        char temp0_26 = _mm256_movemask_ps(arg5)
        
        if (temp0_26 == 0)
            arg5[0].o = zx.o(0)
            arg6[0].o = zx.o(0)
            arg5 ^= arg13
            
            if (zx.o(0) f< zmm11[0])
            label_1401063a9:
                bool cond:4_1 = zmm11[0].o f>= 1f
                arg6 = _mm256_add_epi32(temp0_24, arg13)
                
                if (cond:4_1)
                    arg12 = _mm256_blendv_ps(arg12, arg6, arg5)
                    arg10 = _mm256_blendv_ps(arg10, arg6, arg5)
                    arg17 = _mm256_blendv_ps(arg17, arg14, arg5)
                else
                    arg7 = __vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg6), var_1a0_1)
                    arg9 = _mm256_round_ps(arg7, 9)
                    zmm3 = _mm256_min_epi32(arg6, _mm256_cvttps_epi32(arg9))
                    arg12 = _mm256_blendv_ps(arg12, zmm3, arg5)
                    zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                    
                    if (arg20 != 1)
                        zmm3 = _mm256_sub_ps(arg7, arg9)
                    
                    arg7 = _mm256_sub_epi32(arg12, arg13)
                    arg6 = _mm256_min_epi32(arg7, arg6)
                    arg10 = _mm256_blendv_ps(arg10, arg6, arg5)
                    arg17 = _mm256_blendv_ps(arg17, zmm3, arg5)
            else
            label_140106424:
                arg12 = _mm256_blendv_ps(arg12, arg14, arg5)
                arg10 = _mm256_blendv_ps(arg10, arg14, arg5)
                arg17 = _mm256_blendv_ps(arg17, arg14, arg5)
        else
            arg12 = _mm256_andnot_ps(arg5, arg12)
            arg10 = _mm256_andnot_ps(arg5, arg10)
            arg17 = _mm256_andnot_ps(arg5, arg17)
            
            if (temp0_26 != 0xff)
                arg6[0].o = zx.o(0)
                arg5 ^= arg13
                
                if (zx.o(0) f>= zmm11[0])
                    goto label_140106424
                
                goto label_1401063a9
        
        zmm0 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg14, var_180_1, 
            __vpcmpgtd_ymmqq_ymmqq_memqq(temp0_24, var_160_1) & arg11)
        uint64_t r14_1 = zx.q(var_548)
        int32_t var_420_1[0x8] = arg10
        float var_4a0_1[0x8]
        float var_480_1[0x8]
        float var_460_1[0x8]
        
        if (var_548 u> 6)
        label_1401064e0:
            arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
            var_460_1 = arg15
            var_480_1 = arg15
            var_4a0_1 = arg15
            arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
            zmm3[0].o = zx.o(0)
        else
            zmm3 = __vpmulld_ymmqq_ymmqq_memqq(arg12, temp0_5)
            
            switch (r14_1)
                case 0, 1
                    int32_t temp0_52[0x8] = _mm256_add_epi32(_mm256_add_epi32(arg8, zmm0), zmm3)
                    zmm3[0].o = zx.o(0)
                    arg6 = _mm256_cmpeq_epi32(arg6, arg6)
                    float temp0_54[0x8]
                    int32_t temp1_5
                    temp0_54, temp1_5 = _mm256_i32gather_ps(zmm3, *(arg18 + temp0_52[0].q), arg6)
                    zmm3 = temp0_54
                    arg6 = __vpaddd_ymmqq_ymmqq_memqq(temp0_52, var_520_1)
                    arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                    arg7 = _mm256_cmpeq_epi32(arg7, arg7)
                    float temp0_58[0x8]
                    int32_t temp1_6
                    temp0_58, temp1_6 = _mm256_i32gather_ps(arg14, *(arg18 + arg6[0].q), arg7)
                    arg14 = temp0_58
                    arg7 = temp1_6
                    arg6 = __vpbroadcastd_ymmqq_memd(8)
                    arg5 = _mm256_add_epi32(temp0_52, arg6)
                    arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                    arg6 = _mm256_cmpeq_epi32(arg6, arg6)
                    float temp0_63[0x8]
                    int32_t temp1_7
                    temp0_63, temp1_7 = _mm256_i32gather_ps(arg15, *(arg18 + arg5[0].q), arg6)
                    arg15 = temp0_63
                    arg6 = temp1_7
                case 2
                    int32_t temp0_66[0x8] = _mm256_add_epi32(arg8, zmm0)
                    zmm3 = _mm256_add_epi32(temp0_66, zmm3)
                    float rsi_3 = zmm3[0]
                    int64_t r15_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
                    int64_t r11_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
                    int64_t r13_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
                    temp0_66[0].o = _mm256_extracti128_si256(zmm3, 1)
                    int32_t r12_1 = temp0_66[0]
                    int64_t r9_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_66[0].o, 1))
                    int64_t rdi_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_66[0].o, 2))
                    int64_t rsi_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_66[0].o, 3))
                    temp0_66[0].o = zx.o(*(arg18 + sx.q(rsi_3)))
                    temp0_66[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_66[0].o, *(arg18 + r15_1), 1)
                    temp0_66[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_66[0].o, *(arg18 + r11_1), 2)
                    temp0_66[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_66[0].o, *(arg18 + r13_2), 3)
                    temp0_66[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_66[0].o, *(arg18 + sx.q(r12_1)), 4)
                    temp0_66[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_66[0].o, *(arg18 + r9_1), 5)
                    temp0_66[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_66[0].o, *(arg18 + rdi_4), 6)
                    temp0_66[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_66[0].o, *(arg18 + rsi_5), 7)
                    arg6 = __vpaddd_ymmqq_ymmqq_memqq(zmm3, var_440_1)
                    float rcx_6 = arg6[0]
                    int64_t r9_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                    int64_t r10_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                    int64_t r15_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                    float rsi_7 = arg6[0]
                    int64_t r12_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                    int64_t rdi_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                    int64_t rcx_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                    arg6[0].o = zx.o(*(arg18 + sx.q(rcx_6)))
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg18 + r9_2), 1)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg18 + r10_6), 2)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg18 + r15_2), 3)
                    arg6[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg18 + sx.q(rsi_7)), 4)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg18 + r12_3), 5)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg18 + rdi_8), 6)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg18 + rcx_9), 7)
                    zmm3 = __vpaddd_ymmqq_ymmqq_memqq(zmm3, var_520_1)
                    float rcx_10 = zmm3[0]
                    int64_t r9_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
                    int64_t r10_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
                    int64_t r15_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
                    zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                    float rsi_10 = zmm3[0]
                    int64_t rcx_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
                    int64_t r12_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
                    int64_t r13_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
                    zmm3[0].o = zx.o(*(arg18 + sx.q(rcx_10)))
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg18 + r9_3), 1)
                    arg4 = var_53c_1
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg18 + r10_7), 2)
                    r10_4 = var_540_1
                    arg2 = var_528_1
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg18 + r15_3), 3)
                    zmm3[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg18 + sx.q(rsi_10)), 4)
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg18 + rcx_12), 5)
                    arg5 = _mm256_cvtepu16_epi32(temp0_66[0].o)
                    arg7 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                    arg5 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg5, arg7))
                    float temp0_114[0x8] = _mm256_broadcast_ss(32767f)
                    arg5 = _mm256_div_ps(arg5, temp0_114)
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg18 + r12_4), 6)
                    arg6 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 
                            arg7)), 
                        temp0_114)
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg18 + r13_4), 7)
                    r13 = arg3
                    arg7 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm3[0].o), 
                            arg7)), 
                        temp0_114)
                    float temp0_126[0x8] = _mm256_broadcast_ss(128f)
                    zmm3 = _mm256_mul_ps(arg5, temp0_126)
                    arg14 = _mm256_mul_ps(arg6, temp0_126)
                    arg15 = _mm256_mul_ps(arg7, temp0_126)
                case 3
                    arg11[0].o = zx.o(0)
                    arg5 = _mm256_cmpeq_epi32(arg5, arg5)
                    float temp0_131[0x8]
                    int32_t temp1_8
                    temp0_131, temp1_8 = _mm256_i32gather_ps(arg11, *(arg18 + arg8[0].q), arg5)
                    arg5 = temp1_8
                    arg6 = __vpaddd_ymmqq_ymmqq_memqq(arg8, var_520_1)
                    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                    arg7 = _mm256_cmpeq_epi32(arg7, arg7)
                    float temp0_135[0x8]
                    int32_t temp1_9
                    temp0_135, temp1_9 = _mm256_i32gather_ps(arg5, *(arg18 + arg6[0].q), arg7)
                    arg5 = temp0_135
                    arg7 = temp1_9
                    arg6 = _mm256_add_epi32(arg8, __vpbroadcastd_ymmqq_memd(8))
                    arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                    arg7 = _mm256_cmpeq_epi32(arg7, arg7)
                    float temp0_140[0x8]
                    int32_t temp1_10
                    temp0_140, temp1_10 = _mm256_i32gather_ps(arg9, *(arg18 + arg6[0].q), arg7)
                    arg7 = temp1_10
                    arg6 = _mm256_add_epi32(arg8, __vpbroadcastd_ymmqq_memd(0xc))
                    zmm11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm11[0].o, zmm11[0].o)
                    arg7 = _mm256_cmpeq_epi32(arg7, arg7)
                    float temp0_145[0x8]
                    int32_t temp1_11
                    temp0_145, temp1_11 = _mm256_i32gather_ps(zmm11, *(arg18 + arg6[0].q), arg7)
                    arg7 = temp1_11
                    arg6 = _mm256_add_epi32(arg8, __vpbroadcastd_ymmqq_memd(0x10))
                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    arg14 = _mm256_cmpeq_epi32(arg14, arg14)
                    float temp0_150[0x8]
                    int32_t temp1_12
                    temp0_150, temp1_12 = _mm256_i32gather_ps(arg7, *(arg18 + arg6[0].q), arg14)
                    arg7 = temp0_150
                    arg14 = temp1_12
                    arg6 = _mm256_add_epi32(arg8, __vpbroadcastd_ymmqq_memd(0x14))
                    arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                    arg14 = _mm256_cmpeq_epi32(arg14, arg14)
                    float temp0_155[0x8]
                    int32_t temp1_13
                    temp0_155, temp1_13 = _mm256_i32gather_ps(arg10, *(arg18 + arg6[0].q), arg14)
                    arg14 = temp1_13
                    arg6 = _mm256_add_epi32(_mm256_add_epi32(arg8, zmm0), zmm3)
                    zmm3[0].o = zx.o(0)
                    arg14 = _mm256_cmpeq_epi32(arg14, arg14)
                    uint32_t temp0_159[0x8]
                    int32_t temp1_14
                    temp0_159, temp1_14 = _mm256_i32gather_epi32(zmm3, *(arg18 + arg6[0].q), arg14)
                    zmm3 = temp0_159
                    arg6 = _mm256_srli_epi32(zmm3, 0x15)
                    arg14 = _mm256_srli_epi32(zmm3, 0xa) & __vpbroadcastd_ymmqq_memd(0x7ff)
                    zmm3 = _mm256_fmadd_ps(
                        _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(
                                zmm3 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f)), 
                        temp0_145, temp0_131)
                    uint32_t temp0_170[0x8] = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    zmm11 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg14, temp0_170))
                    float temp0_173[0x8] = _mm256_broadcast_ss(1023f)
                    float temp0_174[0x8] = _mm256_div_ps(zmm11, temp0_173)
                    zmm11[0].o = arg19
                    arg11 = var_320_1
                    arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, temp0_170))
                    float temp0_177[0x8] = _mm256_div_ps(arg6, temp0_173)
                    arg14 = _mm256_fmadd_ps(temp0_174, arg7, arg5)
                    arg15 = _mm256_fmadd_ps(temp0_177, temp0_155, temp0_140)
                    arg10 = var_420_1
                case 4, 5, 6
                    goto label_1401064e0
            
            var_4a0_1 = zmm3
            var_480_1 = arg14
            var_460_1 = arg15
        
        arg9 = _mm256_cmpeq_epi32(arg12, arg10)
        arg5 = _mm256_cmpeq_epi32(arg5, arg5)
        arg13 = arg9 ^ arg5
        
        if (_mm256_movemask_ps(arg13) != 0)
            float var_380_1[0x8]
            float var_360_1[0x8]
            float var_340_1[0x8]
            
            if (var_548 u> 6)
            label_140106940:
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                var_380_1 = _mm256_maskstore_ps(arg13, zmm0)
                var_360_1 = _mm256_maskstore_ps(arg13, zmm0)
                var_340_1 = _mm256_maskstore_ps(arg13, zmm0)
            else
                arg7 = __vpmulld_ymmqq_ymmqq_memqq(arg10, temp0_5)
                
                switch (r14_1)
                    case 0, 1
                        zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg8, zmm0), arg7)
                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        float temp0_187[0x8]
                        int32_t temp1_15
                        temp0_187, temp1_15 = _mm256_i32gather_ps(arg6, *(arg18 + zmm0[0].q), arg13)
                        int32_t temp0_188[0x8] = __vpaddd_ymmqq_ymmqq_memqq(zmm0, var_520_1)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        float temp0_190[0x8]
                        int32_t temp1_16
                        temp0_190, temp1_16 =
                            _mm256_i32gather_ps(arg8, *(arg18 + temp0_188[0].q), arg13)
                        arg8 = temp0_190
                        arg7 = __vpbroadcastd_ymmqq_memd(8)
                        zmm0 = _mm256_add_epi32(zmm0, arg7)
                        arg7[0].o = zx.o(0)
                        float temp0_193[0x8]
                        int32_t temp1_17
                        temp0_193, temp1_17 = _mm256_i32gather_ps(arg7, *(arg18 + zmm0[0].q), arg13)
                        arg7 = temp0_193
                        arg9 = temp1_17
                        var_380_1 = _mm256_maskstore_ps(arg13, temp0_187)
                        var_360_1 = _mm256_maskstore_ps(arg13, arg8)
                        var_340_1 = _mm256_maskstore_ps(arg13, arg7)
                    case 2
                        zmm3 = _mm256_add_epi32(_mm256_add_epi32(arg8, zmm0), arg7)
                        zmm0 = arg9 & not.32(zmm3)
                        int64_t r9_4 = sx.q(zmm0[0])
                        int64_t r10_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int32_t temp0_203 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                        int64_t r11_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        int64_t r15_4 = sx.q(zmm0[0])
                        int64_t r12_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int32_t temp0_207 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                        int64_t rdi_17 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = zx.o(*(arg18 + r9_4))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + r10_8), 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                            *(arg18 + sx.q(temp0_203)), 2)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + r11_4), 3)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + r15_4), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + r12_5), 5)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                            *(arg18 + sx.q(temp0_207)), 6)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg18 + rdi_17), 7)
                        arg5 = arg9 & not.32(__vpaddd_ymmqq_ymmqq_memqq(zmm3, var_440_1))
                        int64_t r9_5 = sx.q(arg5[0])
                        int64_t r10_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        int64_t r11_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                        int64_t r14_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                        arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                        int64_t r15_5 = sx.q(arg5[0])
                        int64_t r12_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        int64_t rcx_23 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                        int32_t temp0_223 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3)
                        arg5[0].o = zx.o(*(arg18 + r9_5))
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg18 + r10_9), 1)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg18 + r11_5), 2)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg18 + r14_3), 3)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg18 + r15_5), 4)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg18 + r12_6), 5)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg18 + rcx_23), 6)
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, 
                            *(arg18 + sx.q(temp0_223)), 7)
                        arg5 = arg9 & not.32(__vpaddd_ymmqq_ymmqq_memqq(zmm3, var_520_1))
                        int32_t rcx_25 = arg5[0]
                        int64_t r9_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        int64_t r10_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                        int64_t r14_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                        arg5[0].o = _mm256_extracti128_si256(arg5, 1)
                        int32_t rsi_19 = arg5[0]
                        int64_t rcx_27 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
                        int64_t r15_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2))
                        int64_t r12_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
                        arg5[0].o = zx.o(*(arg18 + sx.q(rcx_25)))
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg18 + r9_6), 1)
                        arg4 = var_53c_1
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg18 + r10_10), 2)
                        r10_4 = var_540_1
                        arg2 = var_528_1
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg18 + r14_4), 3)
                        arg5[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg18 + sx.q(rsi_19)), 4)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg18 + rcx_27), 5)
                        uint32_t temp0_244[0x8] = _mm256_cvtepu16_epi32(zmm0[0].o)
                        arg6 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                        zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(temp0_244, arg6))
                        float temp0_248[0x8] = _mm256_broadcast_ss(32767f)
                        zmm0 = _mm256_div_ps(zmm0, temp0_248)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg18 + r15_6), 6)
                        arg7 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(arg7[0].o), 
                                arg6)), 
                            temp0_248)
                        arg5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg5[0].o, *(arg18 + r12_7), 7)
                        arg5 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(arg5[0].o), 
                                arg6)), 
                            temp0_248)
                        float temp0_260[0x8] = _mm256_broadcast_ss(128f)
                        zmm0 = _mm256_mul_ps(zmm0, temp0_260)
                        float temp0_262[0x8] = _mm256_mul_ps(arg7, temp0_260)
                        arg5 = _mm256_mul_ps(arg5, temp0_260)
                        var_380_1 = _mm256_maskstore_ps(arg13, zmm0)
                        var_360_1 = _mm256_maskstore_ps(arg13, temp0_262)
                        var_340_1 = _mm256_maskstore_ps(arg13, arg5)
                        zmm3 = var_4a0_1
                        arg14 = var_480_1
                        arg15 = var_460_1
                    case 3
                        arg5[0].o = zx.o(0)
                        float temp0_267[0x8]
                        int32_t temp1_18
                        temp0_267, temp1_18 = _mm256_i32gather_ps(arg5, *(arg18 + arg8[0].q), arg13)
                        arg5 = temp0_267
                        int32_t var_1c0_1[0x8] = arg5
                        arg6 = __vpaddd_ymmqq_ymmqq_memqq(arg8, var_520_1)
                        arg9[0].o = zx.o(0)
                        float temp0_269[0x8]
                        int32_t temp1_19
                        temp0_269, temp1_19 = _mm256_i32gather_ps(arg9, *(arg18 + arg6[0].q), arg13)
                        arg9 = temp0_269
                        arg6 = _mm256_add_epi32(arg8, __vpbroadcastd_ymmqq_memd(8))
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        float temp0_273[0x8]
                        int32_t temp1_20
                        temp0_273, temp1_20 = _mm256_i32gather_ps(arg5, *(arg18 + arg6[0].q), arg13)
                        int32_t var_1e0_1[0x8] = temp0_273
                        arg6 = __vpbroadcastd_ymmqq_memd(0xc)
                        int32_t temp0_275[0x8] = _mm256_add_epi32(arg8, arg6)
                        arg6[0].o = zx.o(0)
                        float temp0_276[0x8]
                        int32_t temp1_21
                        temp0_276, temp1_21 =
                            _mm256_i32gather_ps(arg6, *(arg18 + temp0_275[0].q), arg13)
                        int32_t temp0_278[0x8] =
                            _mm256_add_epi32(arg8, __vpbroadcastd_ymmqq_memd(0x10))
                        temp0_275[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_275[0].o, temp0_275[0].o)
                        float temp0_280[0x8]
                        int32_t temp1_22
                        temp0_280, temp1_22 =
                            _mm256_i32gather_ps(temp0_275, *(arg18 + temp0_278[0].q), arg13)
                        arg10 = temp0_280
                        arg11 = temp1_22
                        int32_t temp0_282[0x8] =
                            _mm256_add_epi32(arg8, __vpbroadcastd_ymmqq_memd(0x14))
                        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                        float temp0_284[0x8]
                        int32_t temp1_23
                        temp0_284, temp1_23 =
                            _mm256_i32gather_ps(arg11, *(arg18 + temp0_282[0].q), arg13)
                        zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg8, zmm0), arg7)
                        temp0_282[0].o = zx.o(0)
                        uint32_t temp0_287[0x8]
                        int32_t temp1_24
                        temp0_287, temp1_24 =
                            _mm256_i32gather_epi32(temp0_282, *(arg18 + zmm0[0].q), arg13)
                        arg5 = temp0_287
                        uint32_t temp0_288[0x8] = _mm256_srli_epi32(arg5, 0x15)
                        arg7 = _mm256_srli_epi32(arg5, 0xa)
                        arg8 = __vpbroadcastd_ymmqq_memd(0x7ff)
                        arg5 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(
                                arg5 & __vpbroadcastd_ymmqq_memd(0x3ff), 
                                __vpbroadcastd_ymmqq_memd(0xfffffe01))), 
                            _mm256_broadcast_ss(511f))
                        arg7 &= arg8
                        arg8 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        arg7 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg7, arg8))
                        zmm11 = _mm256_broadcast_ss(1023f)
                        arg7 = _mm256_div_ps(arg7, zmm11)
                        arg5 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg5, temp0_276, var_1c0_1)
                        arg7 = _mm256_fmadd_ps(arg7, arg10, arg9)
                        zmm0 = _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(temp0_288, arg8)), 
                            zmm11)
                        zmm11[0].o = arg19
                        zmm0 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm0, temp0_284, var_1e0_1)
                        arg11 = var_320_1
                        var_380_1 = _mm256_maskstore_ps(arg13, arg5)
                        var_360_1 = _mm256_maskstore_ps(arg13, arg7)
                        var_340_1 = _mm256_maskstore_ps(arg13, zmm0)
                    case 4, 5, 6
                        goto label_140106940
            
            zmm0 = _mm256_sub_ps(var_380_1, zmm3)
            arg5 = _mm256_sub_ps(var_360_1, arg14)
            float temp0_313[0x8] = _mm256_sub_ps(var_340_1, arg15)
            zmm0 = _mm256_fmadd_ps(zmm0, arg17, zmm3)
            arg5 = _mm256_fmadd_ps(arg5, arg17, arg14)
            arg6 = _mm256_fmadd_ps(temp0_313, arg17, arg15)
            zmm3 = _mm256_maskstore_ps(arg13, zmm0)
            arg14 = _mm256_maskstore_ps(arg13, arg5)
            arg15 = _mm256_maskstore_ps(arg13, arg6)
        
        zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
        arg5[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
        arg6[0].o = _mm256_extractf128_ps(arg15[0].o, 1)
        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
        arg7[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg10[0].o)
        arg8[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg14[0].o)
        arg9[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg8[0].o, arg15[0].o, 0x28)
        int128_t var_2e0 = arg9[0].o
        arg9[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg10[0].o)
        arg7[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
        int128_t var_2d0_1 = arg7[0].o
        zmm3[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg14[0].o)
        arg7[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg15[0].o, 0xa8)
        int128_t var_2c0_1 = arg7[0].o
        zmm3[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg9[0].o)
        int128_t var_2b0_1 = zmm3[0].o
        zmm3[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg10[0].o)
        arg7[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        arg8[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, arg6[0].o, 0x28)
        int128_t var_2a0_1 = arg8[0].o
        arg8[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg10[0].o)
        zmm3[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm3[0].o)
        int128_t var_290_1 = zmm3[0].o
        zmm0[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg6[0].o, 0xa8)
        int128_t var_280_1 = arg5[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
        int128_t var_270_1 = zmm0[0].o
        uint64_t i_1 = 0xff
        arg13 = _mm256_cmpeq_epi32(arg13, arg13)
        
        do
            uint64_t rcx_29 = _tzcnt_u64(i_1)
            int64_t r15_7 = i_1 & not.q(1 << (rcx_29 u% 0x40))
            uint32_t var_300[0x8] = arg16
            zmm0[0].o = (&var_2e0)[rcx_29]
            *(arg1 + sx.q(var_300[zx.q(rcx_29.d) & 7]) * 0x30 + 0x20) = zmm0[0].o
            uint64_t rcx_34 = _tzcnt_u64(r15_7)
            zmm0[0].o = (&var_2e0)[rcx_34]
            *(arg1 + sx.q(var_300[zx.q(rcx_34.d) & 7]) * 0x30 + 0x20) = zmm0[0].o
            i_1 = r15_7 & rol.q(-2, rcx_34.b)
        while (i_1 != 0)
        
        rbx_2 += 8
        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
        arg10 = var_420_1
    while (rbx_2 s< r10_4)
    
    rcx_36 = arg22
    
    if (rbx_2 s< rcx_36)
        goto label_140106f08
arg9[0].o = var_e8
arg10[0].o = var_d8
arg11[0].o = var_c8
arg12[0].o = var_b8
arg13[0].o = var_a8
arg14[0].o = var_88
arg15[0].o = var_78
arg16[0].o = var_68
arg17[0].o = var_58
_mm256_zeroupper()
return arg1
