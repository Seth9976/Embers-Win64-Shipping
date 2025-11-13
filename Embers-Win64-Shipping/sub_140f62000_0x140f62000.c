// 函数: sub_140f62000
// 地址: 0x140f62000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* rsi = *(arg1 + 0x2b8)

if (rsi != 0)
    result = zx.q(rsi[1].d)
    
    if (result.d == 0)
        rsi = nullptr
    else
        result = zx.q(result.d + 1)
        rsi[1].d = result.d
    
    if (rsi != 0)
        void* r12_1 = *(arg1 + 0x2b0)
        
        if (r12_1 != 0)
            result = zx.q(*(arg1 + 0x340))
            int128_t zmm6
            int128_t var_38_1 = zmm6
            int128_t zmm7
            int128_t var_48_1 = zmm7
            int128_t zmm8
            int128_t var_58_1 = zmm8
            
            if (result.b != 0)
                float var_b8
                float var_a8
                int64_t* var_a0
                float var_98
                float var_94
                float var_90
                int32_t var_78
                void arg_8
                
                if (*(arg1 + 0x358) == 0)
                    sub_140e13cf0(*sub_140e12aa0(r12_1, &var_a8, arg3), &arg_8)
                    
                    if (var_a0 != 0)
                        var_a0[1].d -= 1
                        
                        if (var_a0[1].d == 1)
                            (**var_a0)(var_a0)
                            int32_t temp3_1 = *(var_a0 + 0xc)
                            *(var_a0 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*(*var_a0 + 8))(var_a0, 1)
                    
                    sub_140f2fca0(arg1, &var_98, arg2, &arg_8, *sub_140ebd5a0(arg1 + 0x320))
                    int32_t var_74
                    int128_t zmm0_1
                    zmm0_1.d = var_74.d f* data_143dbb1f0:4.d
                    int32_t var_7c
                    float zmm8_1[0x4] = var_7c
                    zmm8_1[0] = zmm8_1[0] f* data_143dbb1f0.d
                    int64_t zmm7_1
                    zmm7_1.d = var_78.d f* data_143dbb1f0.d
                    int512_t zmm6_1
                    zmm6_1.o = *(arg2 + 8)
                    zmm8_1[0] = zmm8_1[0] f+ zmm0_1.d
                    int32_t var_70
                    zmm0_1.d = var_70.d f* data_143dbb1f0:4.d
                    int32_t var_6c
                    zmm8_1[0] = zmm8_1[0] f+ var_6c
                    zmm7_1.d = zmm7_1.d f+ zmm0_1.d
                    int32_t var_68
                    zmm7_1.d = zmm7_1.d f+ var_68
                    int32_t* rax_4
                    float zmm6_2
                    rax_4, zmm6_2 = sub_140e15060(r12_1, &var_b8, zmm0_1)
                    float zmm0_2[0x4] = var_98
                    float zmm1[0x4] = var_94
                    zmm1[0] = zmm1[0] * var_90
                    zmm6_2 = zmm6_2 f/ *rax_4
                    zmm0_2[0] = zmm0_2[0] * var_90
                    float zmm3_1 = 1f / zmm6_2
                    zmm1[0] = zmm1[0] * zmm3_1
                    zmm0_2[0] = zmm0_2[0] * zmm3_1
                    zmm0_2 = _mm_unpacklo_ps(zmm0_2, zmm1[0].q)
                    result = sub_140e21b40(r12_1, _mm_unpacklo_ps(zmm8_1, zmm7_1)[0].q, zmm0_2[0].q)
                else if (result.b != 0 && *(arg1 + 0x358) == 1)
                    void* rbx_2 = *(*(*(arg1 + 0x388) + 8) + 0x20)
                    int32_t* rax_6 = sub_140ebd5a0(arg1 + 0x320)
                    uint128_t zmm0_3
                    result, zmm0_3 =
                        sub_140f20380(&var_98, arg2, sub_140e13cf0(rbx_2, &arg_8), *rax_6)
                    float zmm2_1
                    float zmm3_2
                    float var_8c
                    
                    if (*(arg1 + 0x338) == 0)
                        zmm2_1 = var_90
                        zmm3_2 = var_8c
                    else
                        zmm8.d = 1f f/ *(arg2 + 8)
                        zmm7.d = arg2[1].d.d f* zmm8.d
                        zmm6.d = zmm8.d f* *(arg2 + 0xc)
                        int64_t* rax_8
                        float zmm6_3
                        float zmm7_2
                        float zmm8_2
                        rax_8, zmm6_3, zmm7_2, zmm8_2 = sub_140e12810(r12_1, &var_a8, zmm0_3)
                        float zmm2_2 = zmm8_2 f* rax_8[1].d - zmm6_3
                        float zmm1_2 = zmm8_2 f* *rax_8 - zmm6_3
                        float zmm0_4 = zmm8_2 f* *(rax_8 + 4) - zmm7_2
                        float zmm3_3 = zmm2_2
                        zmm8_2 = zmm8_2 f* *(rax_8 + 0xc) - zmm7_2
                        
                        if (not(zmm1_2 <= zmm2_2))
                            zmm3_3 = zmm1_2
                            zmm1_2 = zmm2_2
                        
                        zmm2_2 = zmm8_2
                        
                        if (not(zmm0_4 <= zmm8_2))
                            zmm2_2 = zmm0_4
                            zmm0_4 = zmm8_2
                        
                        var_b8 = zmm1_2
                        float var_b0_1 = zmm3_3
                        float var_b4_1 = zmm0_4
                        float var_ac_1 = zmm2_2
                        var_a8 = var_90
                        float var_a4_1 = var_8c
                        int32_t var_c8
                        var_c8.q = &var_b8
                        var_a0:4.d = var_8c + var_94
                        var_a0.d = var_90 + var_98
                        void var_88
                        result = sub_140d9bb20(&arg_8, &var_88, &var_a8, &var_78, var_c8)
                        zmm2_1 = *result
                        zmm3_2 = *(result + 4)
                    *(arg1 + 0x364) = zmm2_1
                    *(arg1 + 0x368) = zmm3_2
                    uint128_t zmm1_1 = *(arg2 + 8)
                    zmm0_3 = zmm1_1
                    zmm1_1.d = zmm1_1.d f* zmm3_2
                    zmm0_3.d = zmm0_3.d f* zmm2_1
                    zmm1_1.d = zmm1_1.d f+ arg2[1].d
                    zmm0_3.d = zmm0_3.d f+ *(arg2 + 0xc)
                    *(arg1 + 0x370) = zmm1_1.d
                    *(arg1 + 0x36c) = zmm0_3.d

*(arg1 + 0x339) = 0

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        result = (**rsi)(rsi)
        int32_t temp1_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rsi + 8))(rsi, 1)

return result
