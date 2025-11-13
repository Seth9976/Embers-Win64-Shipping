// 函数: sub_14199cee0
// 地址: 0x14199cee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
uint32_t result

if (*arg10 == data_143dbb180.d && arg10[1] == data_143dbb180:4.d && arg10[2] == arg9.d)
    result = (arg9 u>> 0x20).d

if (*arg10 != data_143dbb180.d || arg10[1] != data_143dbb180:4.d || arg10[2] != arg9.d
        || arg10[3] != result)
    int64_t var_198[0x2]
    int64_t (* var_1b8_1)[0x2] = &var_198
    void* rsi_1 = nullptr
    int128_t zmm10 = arg6
    int32_t var_1d0_1 = zmm10.d
    var_198[0] = 0
    int64_t var_188_1 = 0
    int128_t zmm6_1 = sub_141998890(arg1, arg2, arg3, arg4, arg5, var_1d0_1, arg7, arg8, var_1b8_1)
    int32_t r8 = arg10[2]
    int32_t r9 = *arg10
    int32_t rcx
    int32_t rdx
    
    if (r8 - r9 s> 0)
        rcx = arg10[3]
        rdx = arg10[1]
    
    if (r8 - r9 s<= 0 || rcx - rdx s<= 0)
        int64_t r14_1 = data_1439c91b0
        void*** rcx_25 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_34 = &rcx_25[5]
        
        if (rax_34 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x30)
            rcx_25 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_34 = &rcx_25[5]
        
        *(arg1 + 0x30) = rax_34
        int64_t* rax_35 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_35 = rcx_25
        *(arg1 + 8) = &rcx_25[1]
        rcx_25[1] = 0
        *rcx_25 = &data_142d56618
        rcx_25[2].d = 0
        rcx_25[3] = r14_1
        rcx_25[4].d = 0
        void*** rcx_31 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_37 = &rcx_31[4]
        
        if (rax_37 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x28)
            rcx_31 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_37 = &rcx_31[4]
        
        *(arg1 + 0x30) = rax_37
        int64_t* rax_38 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_38 = rcx_31
        *(arg1 + 8) = &rcx_31[1]
        rcx_31[1] = 0
        result = 0x42d54988
        *rcx_31 = &data_142d54988
        rcx_31[2].d = 0
        *(rcx_31 + 0x14) = 2
        rcx_31[3].d = 1
    else
        char rcx_1 = (data_1439c7a34).b
        uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(arg9:4.d))
        int32_t var_148_1 = 1
        char var_130_1 = 0
        int64_t var_128_1 = 0
        int128_t var_48_1 = zmm6_1
        float zmm1_1[0x4] = 0x3f800000
        int64_t* rcx_2 = data_143f0f180
        zmm1_1[0] = 1f f/ zmm0_1.d
        int128_t var_158
        var_1d0_1.q = &var_158
        int32_t var_134_1 = (1 << rcx_1) - 1
        int32_t var_120_1 = 0
        int32_t var_118_1 = 0xbf800000
        int32_t var_114_1 = 0x3f800000
        int32_t var_10c_1 = 0x3f800000
        int32_t var_108_1 = 0x3f800000
        int32_t var_104_1 = 0x3f800000
        int32_t var_fc_1 = 0x3f800000
        int32_t var_f8_1 = 0x3f800000
        int32_t var_f4_1 = 0xbf800000
        int32_t var_ec_1 = 0x3f800000
        int32_t var_e8_1 = 0xbf800000
        int32_t var_e4_1 = 0xbf800000
        int32_t var_dc_1 = 0x3f800000
        int32_t var_cc_1 = 0x3f800000
        int32_t var_bc_1 = 0x3f800000
        int32_t var_ac_1 = 0x3f800000
        int32_t var_9c_1 = 0x3f800000
        char var_1d8_1
        var_1d8_1.d = 4
        uint128_t zmm2_1 = _mm_cvtepi32_ps(zx.o(rdx))
        uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(rcx - 1))
        zmm2_1.d = zmm2_1.d f* zmm1_1[0]
        zmm3.d = zmm3.d f* zmm1_1[0]
        zmm1_1 = 0x40000000
        zmm2_1.d = zmm2_1.d f+ zmm2_1.d
        zmm3.d = zmm3.d f+ zmm3.d
        zmm1_1[0] = 2f f/ _mm_cvtepi32_ps(zx.o(arg9.d)).d
        zmm6_1.d = 1f f- zmm2_1.d
        var_158 = zx.o(0)
        zmm0_1 = data_143dbb1e0
        uint128_t zmm8 = _mm_cvtepi32_ps(zx.o(r9))
        uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(r8 - 1))
        zmm8.d = zmm8.d f* zmm1_1[0]
        zmm7.d = zmm7.d f* zmm1_1[0]
        uint128_t var_144_1 = zmm0_1
        zmm8.d = zmm8.d f- 1f
        zmm7.d = zmm7.d f- 1f
        int128_t zmm9
        zmm9.d = 1f f- zmm3.d
        int64_t* var_1a8
        (*(*rcx_2 + 0x498))(rcx_2, &var_1a8, &data_143f02b98, 0xa0, var_1d8_1, var_1d0_1)
        int64_t* rcx_3 = data_143f0f180
        var_1d8_1.d = 0xa0
        uint128_t* rax_18 = (*(*rcx_3 + 0x130))(rcx_3, &data_143f02b98, var_1a8, 0, var_1d8_1, 1)
        zmm0_1 = var_108_1.o
        float var_c8[0x4]
        var_c8[0] = zmm7.d
        zmm3 = var_118_1.o
        zmm2_1.d = zmm8.d
        float temp0_7[0x4] = _mm_shuffle_ps(var_c8, var_c8, 0xe1)
        temp0_7[0] = zmm6_1.d
        _mm_shuffle_ps(zmm0_1, zmm0_1, 0xd2)
        float temp0_9[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc6)
        zmm0_1.d = zmm10.d
        temp0_9[0] = zmm10.d
        zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc9)
        float temp0_11[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc9)
        rax_18[3] = temp0_11
        float var_c8_1[0x4] = temp0_11
        float var_b8[0x4]
        var_b8[0] = zmm7.d
        rax_18[2] = zmm0_1
        float temp0_12[0x4] = _mm_shuffle_ps(var_b8, var_b8, 0xe1)
        temp0_12[0] = zmm9.d
        var_108_1.o = zmm0_1
        zmm0_1 = var_f8_1.o
        float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc6)
        temp0_13[0] = zmm10.d
        _mm_shuffle_ps(zmm0_1, zmm0_1, 0xd2)
        float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
        zmm0_1.d = zmm10.d
        rax_18[5] = temp0_15
        float var_b8_1[0x4] = temp0_15
        zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc9)
        float var_a8[0x4]
        var_a8[0] = zmm8.d
        rax_18[4] = zmm0_1
        float temp0_17[0x4] = _mm_shuffle_ps(var_a8, var_a8, 0xe1)
        _mm_shuffle_ps(zmm2_1, zmm2_1, 0xe1)
        temp0_17[0] = zmm9.d
        var_f8_1.o = zmm0_1
        zmm2_1.d = zmm6_1.d
        zmm0_1 = var_e8_1.o
        float temp0_19[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc6)
        _mm_shuffle_ps(zmm3, zmm3, 0xd2)
        temp0_19[0] = zmm10.d
        _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc6)
        zmm3.d = zmm10.d
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
        zmm2_1.d = zmm10.d
        zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
        *rax_18 = zmm3
        rax_18[1] = zmm2_1
        rax_18[8] = zmm3
        rax_18[9] = zmm2_1
        _mm_shuffle_ps(zmm0_1, zmm0_1, 0xd2)
        float temp0_25[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xc9)
        zmm0_1.d = zmm10.d
        rax_18[7] = temp0_25
        zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc9)
        rax_18[6] = zmm0_1
        int64_t* rcx_4 = data_143f0f180
        var_118_1.o = zmm3
        uint128_t var_d8_1 = zmm2_1
        var_e8_1.o = zmm0_1
        float var_a8_1[0x4] = temp0_25
        (*(*rcx_4 + 0x138))(rcx_4, &data_143f02b98, var_1a8)
        int64_t* r15_1 = var_1a8
        void*** rcx_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_20 = &rcx_7[5]
        
        if (rax_20 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x30)
            rcx_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_20 = &rcx_7[5]
        
        *(arg1 + 0x30) = rax_20
        int64_t* rax_21 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_21 = rcx_7
        *(arg1 + 8) = &rcx_7[1]
        rcx_7[3] = r15_1
        rcx_7[1] = 0
        *rcx_7 = &data_142d56618
        rcx_7[2].d = 0
        rcx_7[4].d = 0
        void*** rcx_13 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_23 = &rcx_13[4]
        
        if (rax_23 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x28)
            rcx_13 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_23 = &rcx_13[4]
        
        *(arg1 + 0x30) = rax_23
        int64_t* rax_24 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_24 = rcx_13
        *(arg1 + 8) = &rcx_13[1]
        rcx_13[1] = 0
        *rcx_13 = &data_142d54988
        rcx_13[2].d = 0
        *(rcx_13 + 0x14) = 8
        rcx_13[3].d = 1
        int64_t* rbx_1 = var_1a8
        var_1a8 = nullptr
        
        if (rbx_1 == 0)
            result = sub_1405d1550(&var_1a8)
        else
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d != 1)
                result = sub_1405d1550(&var_1a8)
            else
                char rax_27
                
                if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax_27 = sub_1405949a0()
                
                if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_27 != 0))
                    (**rbx_1)(rbx_1, 1)
                    result = sub_1405d1550(&var_1a8)
                else
                    bool z_1
                    
                    if (0 == *(rbx_1 + 0xc))
                        *(rbx_1 + 0xc) = 1
                        z_1 = true
                    else
                        *(rbx_1 + 0xc)
                        z_1 = false
                    
                    if (not(z_1))
                        result = sub_1405d1550(&var_1a8)
                    else
                        int32_t rax_29 = sub_140a20af0()
                        
                        if (rax_29 != 0)
                            rsi_1 = *(&data_143cf0bf8 + (zx.q(rax_29) u>> 0xe << 3))
                                + (zx.q(rax_29) & 0x3fff) * 0x18
                        
                        *(rsi_1 + 8) = rbx_1
                        sub_1405a42f0(&data_143f02390, rax_29)
                        result = sub_1405d1550(&var_1a8)

__security_check_cookie(rax_1 ^ &var_1f8)
return result
