// 函数: sub_1421fed40
// 地址: 0x1421fed40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_100 = arg3
int64_t result = sub_1421b7c40(arg2, arg1)
int32_t* result_4 = result

if (result != 0)
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    int128_t zmm11
    int128_t var_98_1 = zmm11
    void* rax = sub_1421b85d0(arg1, arg2)
    void* var_c8 = rax
    sub_1421f3fd0(arg1, arg2, result_4)
    result = sub_140d3e110(result_4)
    
    if (result.b == 0 || result_4[0x12] == 0xffffffff)
        *(arg5 + 0xc) = 0x3f8ccccd
    else
        result = sub_140d3c6e0(result_4)
        int64_t result_1 = result
        int64_t result_3 = result
        
        if (result != 0)
            result = sub_141f66020(result)
            
            if (result != 0)
                int64_t rcx_6 = *result
                int32_t rsi_1 = -1
                int64_t rdx_3 = sx.q(result_4[0x12])
                result = zx.q(*(arg1 + 0x30))
                int32_t var_108 = 0xffffffff
                int64_t r9_1 = *(rcx_6 + (rdx_3 << 3))
                int64_t var_f8 = r9_1
                int32_t var_fc_2
                int32_t r14_2
                uint128_t zmm0_1
                float zmm1_1
                
                if (result.b == 0)
                    int32_t rax_2 = *(rax + 4) * 0xbb38435 + 0x3619636b
                    zmm0_1 = zx.o(*(r9_1 + 0xec))
                    *(rax + 4) = rax_2
                    result = zx.q(rax_2 u>> 9) | 0x3f800000
                    zmm1_1 = (result.d - 1f) f* _mm_cvtepi32_ps(zmm0_1).d - 1f
                    r14_2 = int.d(zmm1_1)
                    var_fc_2 = r14_2
                    result_4[4] = r14_2
                    
                    if (r14_2 != 0xffffffff)
                        result = sub_142208ef0(arg1, arg2, result_4, result_3, r14_2, &var_108)
                        
                        if (result.b == 0)
                            *(arg5 + 0xc) = 0x3f8ccccd
                        else
                            rsi_1 = var_108
                        label_1421ff075:
                            int32_t rax_23 = (*(*arg2 + 0x150))(arg2, zmm1_1, arg4)
                            char var_104_1
                            char rax_24
                            
                            if (rax_23 s> 0)
                                int64_t rdx_13 = *arg2
                                rax_24 = (*(rdx_13 + 0x158))(arg2, rdx_13)
                                var_104_1 = 1
                            
                            if (rax_23 s<= 0 || rax_24 == 0)
                                var_104_1 = 0
                            
                            int64_t var_e8
                            float var_a8[0x4]
                            float zmm6_1[0x4]
                            int128_t zmm7_1
                            int128_t zmm8_1
                            int128_t zmm9_1
                            result, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10, zmm11 = sub_1421f2bb0(
                                arg1, arg2, result_4, result_3, r14_2, &var_e8, &var_a8, 1)
                            
                            if (result.b != 1)
                                *(arg5 + 0xc) = 0x3f8ccccd
                            else
                                uint128_t zmm0_2 = zx.o(var_e8)
                                *(sx.q(var_100) + arg5) = r14_2
                                *(arg5 + 0x10) = zmm0_2.q
                                int32_t var_e0
                                *(arg5 + 0x18) = var_e0
                                
                                if (_finite(_mm_cvtps_pd((*(arg5 + 0x10)).q).q) != 0
                                        && _finite(_mm_cvtps_pd((*(arg5 + 0x14)).q).q) != 0)
                                    _finite(_mm_cvtps_pd((*(arg5 + 0x18)).q).q)
                                
                                float zmm2[0x4]
                                float zmm3_1[0x4]
                                uint128_t zmm5_1
                                
                                if ((*(arg1 + 0x40) & 4) != 0 && rsi_1 != 0xffffffff)
                                    int32_t* rdx_15 = *(result_4 + 0x20)
                                    void* rcx_25 = &rdx_15[sx.q(result_4[6])]
                                    int32_t* rax_30 = rdx_15
                                    
                                    if (rdx_15 u< rcx_25)
                                        do
                                            if (*rax_30 == rsi_1)
                                                int32_t rax_32 = ((rax_30 - rdx_15) s>> 2).d
                                                
                                                if (rax_32 != 0xffffffff)
                                                    zmm3_1 = *(arg1 + 0x44)
                                                    int64_t rcx_26 = sx.q(rax_32) * 3
                                                    int64_t rax_34 = *(result_4 + 0x40)
                                                    zmm0_2.d = (*(rax_34 + (rcx_26 << 2) + 8)).d f-
                                                        *(arg5 + 0x28)
                                                    zmm5_1.d = (*(rax_34 + (rcx_26 << 2))).d f-
                                                        *(arg5 + 0x20)
                                                    zmm2 = *(rax_34 + (rcx_26 << 2) + 4)
                                                    zmm2[0] = zmm2[0] f- *(arg5 + 0x24)
                                                    zmm0_2.d = zmm0_2.d f* zmm3_1[0]
                                                    zmm5_1.d = zmm5_1.d f* zmm3_1[0]
                                                    zmm0_2.d = zmm0_2.d f+ *(arg5 + 0x28)
                                                    zmm2[0] = zmm2[0] * zmm3_1[0]
                                                    zmm5_1.d = zmm5_1.d f+ *(arg5 + 0x20)
                                                    zmm2[0] = zmm2[0] f+ *(arg5 + 0x24)
                                                    int32_t var_e0_1 = zmm0_2.d
                                                    *(arg5 + 0x20) =
                                                        (_mm_unpacklo_ps(zmm5_1, zmm2[0].q)).q
                                                    *(arg5 + 0x28) = var_e0_1
                                                    
                                                    if (_finite(_mm_cvtps_pd((*(arg5 + 0x20)).q).q)
                                                            != 0 && _finite(_mm_cvtps_pd((*(arg5 + 0x24))
                                                            .q).q) != 0)
                                                        _finite(_mm_cvtps_pd((*(arg5 + 0x28)).q).q)
                                                
                                                break
                                            
                                            rax_30 = &rax_30[1]
                                        while (rax_30 u< rcx_25)
                                
                                result = zx.q(*(arg1 + 0x88))
                                
                                if ((result.b & 1) != 0)
                                    char rax_38 = *(arg1 + 0x30)
                                    
                                    if (rax_38 == 0)
                                        var_108 = *sub_141f6a7a0(result_3, &var_100, r14_2)
                                    else if (rax_38 == 1)
                                        int64_t rsi_2 = var_f8
                                        int64_t* rcx_29 = *(rsi_2 + 0x18)
                                        int32_t rax_41 = (*(*rcx_29 + 0x68))(rcx_29, zx.q(r14_2))
                                        int64_t* rcx_30 = *(rsi_2 + 0x18)
                                        int64_t r8_10 = *rcx_30
                                        int32_t rax_42 =
                                            (*(r8_10 + 0x68))(rcx_30, zx.q(r14_2 + 1), r8_10)
                                        int64_t* rcx_31 = *(rsi_2 + 0x18)
                                        int64_t r8_11 = *rcx_31
                                        int32_t rax_43 =
                                            (*(r8_11 + 0x68))(rcx_31, zx.q(r14_2 + 2), r8_11)
                                        int32_t r14_4 = *sub_141f6a7a0(result_1, &var_100, rax_41)
                                        int32_t rbx_3 = *sub_141f6a7a0(result_1, &var_100, rax_42)
                                        int32_t r8_15 = *sub_141f6a7a0(result_1, &var_100, rax_43)
                                        var_108:2.b = ((zx.d((r8_15 u>> 0x10).b)
                                            + zx.d((r14_4 u>> 0x10).b) + zx.d((rbx_3 u>> 0x10).b))
                                            u/ 3).b
                                        var_108:1.b = ((zx.d((r8_15 u>> 8).b)
                                            + zx.d((r14_4 u>> 8).b) + zx.d((rbx_3 u>> 8).b)) u/ 3).b
                                        r14_2 = var_fc_2
                                        result_3 = result_1
                                        var_108.b =
                                            ((zx.d(rbx_3.b) + zx.d(r8_15.b) + zx.d(r14_4.b)) u/ 3).b
                                        var_108:3.b = (((r8_15 u>> 0x18) + (r14_4 u>> 0x18)
                                            + (rbx_3 u>> 0x18)) u/ 3).b
                                    
                                    sub_140acc920(&var_e8, &var_108)
                                    *(arg5 + 0x60) = var_e8.o
                                    sub_140acc920(&var_e8, &var_108)
                                    *(arg5 + 0x70) = var_e8.o
                                    result = zx.q(*(arg1 + 0x88))
                                
                                float var_48_1[0x4] = zmm6_1
                                int128_t var_58_1 = zmm7_1
                                int128_t var_68_1 = zmm8_1
                                
                                if ((result.b & 2) != 0)
                                    char rax_64 = *(arg1 + 0x30)
                                    int128_t var_78_1 = zmm9_1
                                    
                                    if (rax_64 == 0)
                                        int64_t* rax_65 =
                                            sub_141f6a890(result_3, &var_f8, r14_2, *(arg1 + 0x8c))
                                        zmm8_1 = *rax_65
                                        zmm9_1 = *(rax_65 + 4)
                                    else if (rax_64 != 1)
                                        zmm8_1 = var_100
                                        zmm9_1 = var_100
                                    else
                                        int64_t rsi_4 = var_f8
                                        int64_t* rcx_43 = *(rsi_4 + 0x18)
                                        int32_t rax_67 = (*(*rcx_43 + 0x68))(rcx_43, zx.q(r14_2))
                                        int64_t* rcx_44 = *(rsi_4 + 0x18)
                                        int64_t r8_20 = *rcx_44
                                        int32_t rax_68 =
                                            (*(r8_20 + 0x68))(rcx_44, zx.q(r14_2 + 1), r8_20)
                                        int64_t* rcx_45 = *(rsi_4 + 0x18)
                                        int64_t r8_21 = *rcx_45
                                        int32_t rax_69 =
                                            (*(r8_21 + 0x68))(rcx_45, zx.q(r14_2 + 2), r8_21)
                                        float (* rax_70)[0x4] =
                                            sub_141f6a890(result_1, &var_f8, rax_67, *(arg1 + 0x8c))
                                        zmm6_1 = *rax_70
                                        zmm7_1 = (*rax_70)[1]
                                        int64_t* rax_71 =
                                            sub_141f6a890(result_1, &var_f8, rax_68, *(arg1 + 0x8c))
                                        zmm8_1 = *rax_71
                                        zmm9_1 = *(rax_71 + 4)
                                        int64_t* rax_72 =
                                            sub_141f6a890(result_1, &var_f8, rax_69, *(arg1 + 0x8c))
                                        zmm8_1.d = zmm8_1.d f+ zmm6_1[0]
                                        zmm9_1.d = zmm9_1.d f+ zmm7_1.d
                                        zmm8_1.d = zmm8_1.d f+ *rax_72
                                        zmm9_1.d = zmm9_1.d f+ *(rax_72 + 4)
                                        zmm8_1.d = zmm8_1.d f* 0.333333343f
                                        zmm9_1.d = zmm9_1.d f* 0.333333343f
                                    
                                    result = sx.q(*(arg2 + 0x3c))
                                    
                                    if (result.d s> 0)
                                        *(result + arg5) = zmm8_1.d
                                        *(result + arg5 + 4) = zmm9_1.d
                                
                                if (var_104_1 != 0)
                                    void* rbx_8 = sx.q(rax_23) + arg5
                                    
                                    if ((*(arg1 + 0x40) & 2) != 0)
                                        void* rcx_49 = var_c8
                                        float zmm4_1[0x4] = data_14399f678.d
                                        zmm7_1 = data_14399f678:4.d
                                        zmm8_1 = data_14399f680
                                        float zmm1_2[0x4] = 0x40490fdb
                                        int32_t rax_74 = *(rcx_49 + 4) * 0xbb38435 + 0x3619636b
                                        *(rcx_49 + 4) = rax_74
                                        var_100 = rax_74 u>> 9 | 0x3f800000
                                        zmm3_1 = var_100
                                        zmm3_1[0] = zmm3_1[0] f- zmm10.d
                                        zmm3_1[0] = zmm3_1[0] * 3.14159274f
                                        zmm0_2.d = zmm3_1.d f* 0.159154937f
                                        
                                        if (zmm3_1[0] < zx.o(0)[0])
                                            zmm0_2.d = zmm0_2.d f- zmm11.d
                                        else
                                            zmm0_2.d = zmm0_2.d f+ zmm11.d
                                        
                                        zmm0_2.d =
                                            _mm_cvtepi32_ps(zx.o(int.d(zmm0_2.d))).d f* 6.28318548f
                                        zmm3_1[0] = zmm3_1[0] f- zmm0_2.d
                                        
                                        if (not(zmm3_1[0] <= 1.57079637f))
                                            zmm5_1 = 0xbf800000
                                            zmm1_2[0] = 3.14159274f - zmm3_1[0]
                                            zmm3_1 = zmm1_2
                                        else if (zmm3_1[0] >= -1.57079637f)
                                            zmm5_1 = zmm10
                                        else
                                            zmm5_1 = 0xbf800000
                                            zmm0_2.d = -3.14159274f - zmm3_1[0]
                                            zmm3_1 = zmm0_2
                                        
                                        zmm1_2 = 0x3638b88e
                                        zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
                                        zmm0_2.d = zmm3_1.d f* 2.3889859e-08f
                                        zmm1_2[0] = 2.75255616e-06f f- zmm0_2.d
                                        zmm0_2.d = zmm3_1.d f* 2.60516146e-07f
                                        zmm1_2[0] = zmm1_2[0] * zmm3_1[0]
                                        zmm1_2[0] = zmm1_2[0] - 0.000198408743f
                                        zmm1_2[0] = zmm1_2[0] * zmm3_1[0]
                                        zmm1_2[0] = zmm1_2[0] + 0.00833333097f
                                        zmm1_2[0] = zmm1_2[0] * zmm3_1[0]
                                        zmm1_2[0] = zmm1_2[0] - 0.166666672f
                                        zmm1_2[0] = zmm1_2[0] * zmm3_1[0]
                                        zmm1_2[0] = zmm1_2[0] f+ zmm10.d
                                        zmm1_2[0] = zmm1_2[0] * zmm3_1[0]
                                        zmm4_1[0] = zmm4_1[0] * zmm1_2[0]
                                        zmm7_1.d = zmm7_1.d f* zmm1_2[0]
                                        zmm8_1.d = zmm8_1.d f* zmm1_2[0]
                                        zmm1_2 = 0x37cfb4c2
                                        zmm1_2[0] = 2.47604949e-05f f- zmm0_2.d
                                        float temp0_12[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
                                        temp0_12[0] = zmm7_1.d
                                        float temp0_13[0x4] =
                                            _mm_shuffle_ps(temp0_12, temp0_12, 0xc6)
                                        temp0_13[0] = zmm8_1.d
                                        float temp0_14[0x4] =
                                            _mm_shuffle_ps(temp0_13, temp0_13, 0x27)
                                        zmm1_2[0] = zmm1_2[0] * zmm3_1[0]
                                        zmm1_2[0] = zmm1_2[0] - 0.00138883782f
                                        zmm1_2[0] = zmm1_2[0] * zmm3_1[0]
                                        zmm1_2[0] = zmm1_2[0] + 0.0416666381f
                                        zmm1_2[0] = zmm1_2[0] * zmm3_1[0]
                                        zmm1_2[0] = zmm1_2[0] f- zmm11.d
                                        zmm1_2[0] = zmm1_2[0] * zmm3_1[0]
                                        zmm2 = var_a8
                                        zmm0_2 = _mm_shuffle_ps(zmm2, zmm2, 0)
                                        zmm1_2[0] = zmm1_2[0] f+ zmm10.d
                                        zmm1_2[0] = zmm1_2[0] f* zmm5_1.d
                                        temp0_14[0] = zmm1_2[0]
                                        float temp0_16[0x4] =
                                            _mm_shuffle_ps(temp0_14, temp0_14, 0x39)
                                        var_e8.o = temp0_16
                                        float temp0_18[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_16, temp0_16, 0x1b), zmm0_2)
                                        float temp0_19[0x4] =
                                            _mm_shuffle_ps(temp0_16, temp0_16, 0x4e)
                                        zmm0_2 =
                                            _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_16)
                                        float temp0_22[0x4] =
                                            __mulps_xmmps_memps(temp0_18, data_143f505c0)
                                        float temp0_23[0x4] =
                                            _mm_shuffle_ps(temp0_16, temp0_16, 0xb1)
                                        float temp0_24[0x4] = _mm_add_ps(temp0_22, zmm0_2)
                                        float temp0_26[0x4] =
                                            _mm_mul_ps(temp0_19, _mm_shuffle_ps(zmm2, zmm2, 0x55))
                                        float temp0_28[0x4] =
                                            _mm_mul_ps(temp0_23, _mm_shuffle_ps(zmm2, zmm2, 0xaa))
                                        float temp0_29[0x4] =
                                            __mulps_xmmps_memps(temp0_26, data_143f505b0)
                                        float temp0_30[0x4] =
                                            __mulps_xmmps_memps(temp0_28, data_143f505a0)
                                        var_a8 =
                                            _mm_add_ps(_mm_add_ps(temp0_24, temp0_29), temp0_30)
                                    
                                    sub_140ad3d90(&var_a8, &var_c8)
                                    uint128_t zmm2_1
                                    int32_t result_2
                                    
                                    if ((*(*(arg2[5] + 0x30) + 0x59) & 1) == 0)
                                        result = zx.q(result_2)
                                        zmm2_1 = zx.o(var_c8)
                                    else
                                        zmm2_1 = var_c8:4.d
                                        zmm6_1 = var_c8.d
                                        float temp0_33[0x4] =
                                            __mulps_xmmps_memps(*(arg2[3] + 0x1c0), data_143f50590)
                                        zmm2_1 = _mm_unpacklo_ps(zmm2_1, 0)
                                        float temp0_36[0x4] = _mm_unpacklo_ps(
                                            _mm_unpacklo_ps(zmm6_1, result_2[0].q), zmm2_1.q)
                                        float temp0_37[0x4] =
                                            _mm_shuffle_ps(temp0_33, temp0_33, 0xd2)
                                        float temp0_39[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_36, temp0_36, 0xc9), temp0_37)
                                        float temp0_40[0x4] =
                                            _mm_shuffle_ps(temp0_33, temp0_33, 0xc9)
                                        zmm2_1 = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_36, temp0_36, 0xd2), temp0_40)
                                        float temp0_43[0x4] =
                                            _mm_shuffle_ps(temp0_33, temp0_33, 0xff)
                                        zmm2_1 = _mm_sub_ps(zmm2_1, temp0_39)
                                        zmm2_1 = _mm_add_ps(zmm2_1, zmm2_1)
                                        float temp0_46[0x4] = _mm_mul_ps(temp0_43, zmm2_1)
                                        float temp0_47[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
                                        float temp0_48[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2)
                                        float temp0_49[0x4] = _mm_mul_ps(temp0_47, temp0_37)
                                        float temp0_50[0x4] = _mm_mul_ps(temp0_48, temp0_40)
                                        float temp0_51[0x4] = _mm_add_ps(temp0_46, temp0_36)
                                        float temp0_53[0x4] =
                                            _mm_add_ps(_mm_sub_ps(temp0_50, temp0_49), temp0_51)
                                        float temp0_54[0x4] =
                                            _mm_shuffle_ps(temp0_53, temp0_53, 0xaa)
                                        float temp0_55[0x4] =
                                            _mm_shuffle_ps(temp0_53, temp0_53, 0x55)
                                        result = zx.q(temp0_54[0])
                                        zmm2_1 = _mm_unpacklo_ps(temp0_53, temp0_55[0].q)
                                    *(rbx_8 + 0x18) = zmm2_1.q
                                    *(rbx_8 + 0xc) = zmm2_1.q
                                    *(rbx_8 + 0x20) = result.d
                                    *(rbx_8 + 0x14) = result.d
                else if (result.b == 1)
                    int32_t rcx_10 = *(rax + 4) * 0xbb38435 + 0x3619636b
                    zmm0_1 = zx.o(*(r9_1 + 8))
                    *(rax + 4) = rcx_10
                    int64_t r8_2 = *r9_1
                    zmm1_1 = (rcx_10 u>> 9 | 0x3f800000) - 1f
                    zmm0_1 = _mm_cvtepi32_ps(zmm0_1)
                    *(rax + 4) = rcx_10 * 0xbb38435 + 0x3619636b
                    zmm0_1.d = zmm0_1.d f- 1f
                    zmm1_1 = (zmm1_1 + zmm1_1) f* zmm0_1.d
                    zmm0_1.d = ((rcx_10 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
                    zmm1_1 = zmm1_1 + 0.5f
                    int64_t rdx_6 = (sx.q(int.d(zmm1_1)) s>> 1) * 0xe8
                    arg4 = float.s(zx.q(*(*r9_1 + rdx_6 + 8))) f* zmm0_1.d
                    result = zx.q(int.d(arg4))
                    r14_2 = (result * 3).d + *(rdx_6 + r8_2 + 4)
                    var_fc_2 = r14_2
                    result_4[4] = r14_2
                    
                    if (r14_2 != 0xffffffff)
                        int64_t* rcx_14 = *(r9_1 + 0x18)
                        int32_t rax_14 = (*(*rcx_14 + 0x68))(rcx_14, zx.q(r14_2))
                        int64_t* rcx_16 = *(var_f8 + 0x18)
                        int64_t r8_3 = *rcx_16
                        int32_t rax_15 = (*(r8_3 + 0x68))(rcx_16, zx.q(r14_2 + 1), r8_3)
                        int64_t* rcx_17 = *(var_f8 + 0x18)
                        int64_t r8_4 = *rcx_17
                        int32_t rax_17 = (*(r8_4 + 0x68))(rcx_17, zx.q(r14_2 + 2), r8_4)
                        int32_t var_d8 = 0xffffffff
                        var_108 = 0xffffffff
                        result_3 = result_1
                        int32_t var_d4 = 0xffffffff
                        int32_t rcx_21
                        
                        if (sub_142208ef0(arg1, arg2, result_4, result_3, rax_14, &var_d4) != 0)
                            rcx_21 = -1
                        label_1421ff064:
                            
                            if (var_d4 s>= rcx_21)
                                rcx_21 = var_d4
                            
                            if (rcx_21 s< rsi_1)
                                goto label_1421ff075
                            
                            rsi_1 = rcx_21
                            goto label_1421ff075
                        
                        if (sub_142208ef0(arg1, arg2, result_4, result_3, rax_15, &var_108) != 0)
                            rcx_21 = var_108
                            goto label_1421ff064
                        
                        result = sub_142208ef0(arg1, arg2, result_4, result_3, rax_17, &var_d8)
                        
                        if (result.b != 0)
                            rcx_21 = var_108
                            rsi_1 = var_d8
                            goto label_1421ff064
                        
                        *(arg5 + 0xc) = 0x3f8ccccd

return result
