// 函数: sub_1416e88f0
// 地址: 0x1416e88f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm7
uint128_t var_58 = zmm7
float zmm8[0x4]
float var_68[0x4] = zmm8
void var_1f8
void** const var_78 = __security_cookie ^ &var_1f8
uint128_t zmm3
zmm3.d = (*(arg1 + 0x34)).d f* *arg4
float zmm4 = *(arg1 + 0x38) f* arg4[1]
float zmm5 = *(arg1 + 0x3c) f* arg4[2]
float temp0[0x4] = _mm_sqrt_ss(0, zmm4 * zmm4 + zmm3.d f* zmm3.d + zmm5 * zmm5)
void** const result

if (temp0[0] <= 1.17549435e-38f)
    result.b = 0
else
    zmm7.d = 1f / temp0[0]
    temp0[0] = temp0[0] * arg5[0]
    zmm3.d = zmm3.d f* zmm7.d
    int32_t var_188 = zmm3.d
    float var_184_1 = zmm4 f* zmm7.d
    float var_180_1 = zmm5 f* zmm7.d
    void** var_108
    sub_141703c00(&var_108, arg2, arg1 + 0x34, zx.o(0))
    float zmm4_1[0x4] = arg3[1]
    uint128_t zmm0_1 = *arg3
    int32_t rax_1 = *(arg1 + 0x30)
    int64_t rcx_1 = *(arg1 + 0x10)
    zmm4_1[0] = zmm4_1[0] f* *(arg1 + 0x34)
    int32_t var_140_1 = rax_1
    float temp0_1[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    temp0_1[0] = temp0_1[0] f* *(arg1 + 0x38)
    uint64_t var_148
    int64_t* var_1a0_1 = &var_148
    uint128_t var_138_1 = zmm0_1
    uint128_t var_128_1 = zmm0_1
    uint128_t var_a8 = zmm0_1
    zmm0_1 = data_14399f670
    float temp0_2[0x4] = _mm_unpacklo_ps(temp0_1, 0)
    float var_118_1[0x4] = zmm4_1
    float temp0_3[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
    temp0_3[0] = temp0_3[0] f* *(arg1 + 0x3c)
    float temp0_5[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_1, temp0_3[0].q), temp0_2[0].q)
    float zmm2_1[0x4] = data_14399f66c
    float var_98_1[0x4] = temp0_5
    float temp0_6[0x4] = _mm_unpacklo_ps(data_14399f668, zmm0_1.q)
    var_148 = *(arg1 + 0x28)
    zmm0_1.d = arg10.d f+ *(arg1 + 0x40)
    float var_88_1[0x4] = _mm_unpacklo_ps(temp0_6, _mm_unpacklo_ps(zmm2_1, 0)[0].q)
    int32_t var_18c
    int32_t var_178
    int32_t var_168
    char rax_3
    rax_3, zmm7, zmm8 = sub_1417b65d0(rcx_1, &var_108, &var_a8, &var_188, temp0[0], &var_18c, 
        &var_178, &var_168, arg9, zmm0_1.d, arg11, var_1a0_1)
    uint128_t zmm0_2
    
    if (rax_3 != 0)
        zmm0_2.d = var_18c.d f* zmm7.d
    
    int64_t* var_e8
    
    if (rax_3 == 0 || zmm0_2.d f>= zmm8[0])
        var_108 = &data_142fc4d40
        
        if (var_e8 != 0)
            var_e8[1].d -= 1
            
            if (var_e8[1].d == 1)
                (**var_e8)(var_e8)
                int32_t rbx_2 = *(var_e8 + 0xc)
                *(var_e8 + 0xc) -= 1
                
                if (rbx_2 == 1)
                    (*(*var_e8 + 8))(var_e8, zx.q(rbx_2))
        
        result.b = 0
    else
        float zmm1_1[0x4] = var_178
        uint128_t zmm6_1 = var_168
        int32_t var_160
        zmm8 = var_160
        *arg6 = zmm0_2.d
        int32_t var_174
        uint128_t zmm2_2
        zmm2_2.d = var_174.d f* *(arg1 + 0x2c)
        zmm1_1[0] = zmm1_1[0] f* *(arg1 + 0x28)
        int32_t var_170
        zmm0_2.d = var_170.d f* *(arg1 + 0x30)
        *arg7 = (_mm_unpacklo_ps(zmm1_1, zmm2_2.q)).q
        arg7[1].d = zmm0_2.d
        zmm6_1.d = zmm6_1.d f* *(arg1 + 0x34)
        int32_t var_164
        zmm7.d = var_164.d f* *(arg1 + 0x38)
        zmm8[0] = zmm8[0] f* *(arg1 + 0x3c)
        zmm0_2.d = zmm6_1.d f* zmm6_1.d
        zmm2_2.d = zmm7.d f* zmm7.d
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm2_2.d = zmm2_2.d f+ zmm0_2.d
        zmm2_2.d = zmm2_2.d f+ zmm8[0]
        int32_t var_198_1
        float var_190_2
        
        if (zmm2_2.d f!= 1f)
            if (zmm2_2.d f>= 9.99999994e-09f)
                uint128_t zmm5_1 = _mm_rsqrt_ss(zmm2_2.d, zmm2_2.d)
                uint128_t zmm3_2
                zmm3_2.d = zmm2_2.d f* 0.5f
                zmm0_2.d = zmm5_1.d f* zmm5_1.d
                zmm1_1 = zmm3_2
                zmm1_1[0] = zmm1_1[0] f* zmm0_2.d
                zmm2_2.d = 0.5f - zmm1_1[0]
                zmm0_2.d = zmm5_1.d f* zmm2_2.d
                zmm5_1.d = zmm5_1.d f+ zmm0_2.d
                zmm1_1 = zmm5_1
                zmm1_1[0] = zmm1_1[0] f* zmm5_1.d
                zmm3_2.d = zmm3_2.d f* zmm1_1[0]
                zmm0_2.d = zmm5_1.d f* (0.5f f- zmm3_2.d)
                zmm5_1.d = zmm5_1.d f+ zmm0_2.d
                int32_t var_158_1 = zmm5_1.d
                zmm1_1 = zmm5_1
                zmm0_2.d = zmm5_1.d f* zmm6_1.d
                zmm5_1.d = zmm5_1.d f* zmm8[0]
                var_198_1 = zmm0_2.d
                zmm1_1[0] = zmm1_1[0] f* zmm7.d
                var_190_2 = zmm5_1.d
            else
                zmm1_1 = data_143dbb1fc
                var_198_1 = data_143dbb1f8.d
                var_190_2 = data_143dbb200.d
            
            float var_194_2 = zmm1_1[0]
        else
            var_198_1 = zmm6_1.d
            int32_t var_194_1 = zmm7.d
            var_190_2 = zmm8[0]
        
        *arg8 = var_198_1.q
        arg8[1].d = var_190_2
        var_108 = &data_142fc4d40
        
        if (var_e8 != 0)
            var_e8[1].d -= 1
            
            if (var_e8[1].d == 1)
                (**var_e8)(var_e8)
                int32_t rbx_1 = *(var_e8 + 0xc)
                *(var_e8 + 0xc) -= 1
                
                if (rbx_1 == 1)
                    (*(*var_e8 + 8))(var_e8, zx.q(rbx_1))
        
        result.b = 1

__security_check_cookie(var_78 ^ &var_1f8)
return result
