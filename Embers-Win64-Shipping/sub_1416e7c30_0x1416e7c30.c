// 函数: sub_1416e7c30
// 地址: 0x1416e7c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm10
int128_t var_78 = zmm10
void var_218
void** const var_88 = __security_cookie ^ &var_218
int128_t zmm7 = *(arg1 + 0x34)
int128_t zmm8 = *(arg1 + 0x38)
float zmm3 = zmm7.d * *arg4
float zmm4 = zmm8.d * arg4[1]
int128_t zmm9 = *(arg1 + 0x3c)
float zmm5 = zmm9.d * arg4[2]
float temp0[0x4] = _mm_sqrt_ss(0, zmm4 * zmm4 + zmm3 * zmm3 + zmm5 * zmm5)
void** const result

if (temp0[0] <= 1.17549435e-38f)
    result.b = 0
else
    zmm7.d = zmm7.d f* *(arg2 + 0x28)
    zmm8.d = zmm8.d f* *(arg2 + 0x2c)
    zmm9.d = zmm9.d f* *(arg2 + 0x30)
    void* rdx = *(arg2 + 0x10)
    zmm10.d = 1f / temp0[0]
    int32_t var_1a8 = zmm7.d
    float var_198 = zmm3 f* zmm10.d
    float var_194_1 = zmm4 f* zmm10.d
    float var_190_1 = zmm5 f* zmm10.d
    int32_t var_1a4_1 = zmm8.d
    int32_t var_1a0_1 = zmm9.d
    void** var_118
    float zmm6_1 = sub_141703a00(&var_118, rdx, &var_1a8, (zx.o(0)).d)
    float zmm4_1[0x4] = arg3[1]
    uint128_t zmm0_1 = *arg3
    int32_t rax_1 = *(arg1 + 0x30)
    zmm4_1[0] = zmm4_1[0] f* *(arg1 + 0x34)
    int64_t rcx_1 = *(arg1 + 0x10)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    temp0_1[0] = temp0_1[0] f* *(arg1 + 0x38)
    int32_t var_150_1 = rax_1
    uint64_t var_158
    int64_t* var_1c0_1 = &var_158
    uint128_t var_148_1 = zmm0_1
    uint128_t var_138_1 = zmm0_1
    uint128_t var_b8 = zmm0_1
    zmm0_1 = data_14399f670
    float temp0_2[0x4] = _mm_unpacklo_ps(temp0_1, 0)
    float var_128_1[0x4] = zmm4_1
    float temp0_3[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
    temp0_3[0] = temp0_3[0] f* *(arg1 + 0x3c)
    float temp0_5[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_1, temp0_3[0].q), temp0_2[0].q)
    float zmm2_1[0x4] = data_14399f66c
    float var_a8_1[0x4] = temp0_5
    float temp0_6[0x4] = _mm_unpacklo_ps(data_14399f668, zmm0_1.q)
    var_158 = *(arg1 + 0x28)
    zmm0_1.d = arg10.d f+ *(arg1 + 0x40)
    float var_98_1[0x4] = _mm_unpacklo_ps(temp0_6, _mm_unpacklo_ps(zmm2_1, 0)[0].q)
    int32_t var_1ac
    int32_t var_188
    int32_t var_178
    char rax_3
    uint128_t zmm7_1
    rax_3, zmm7_1, zmm10 = sub_1417b63b0(rcx_1, &var_118, &var_b8, &var_198, zmm6_1 f* arg5.d, 
        &var_1ac, &var_188, &var_178, arg9, zmm0_1.d, arg11, var_1c0_1)
    uint128_t zmm0_2
    
    if (rax_3 != 0)
        zmm0_2.d = var_1ac.d f* zmm10.d
    
    int64_t* var_f8
    
    if (rax_3 == 0 || zmm0_2.d f>= zmm7_1.d)
        var_118 = &data_142fc5020
        
        if (var_f8 != 0)
            var_f8[1].d -= 1
            
            if (var_f8[1].d == 1)
                (**var_f8)(var_f8)
                int32_t rbx_2 = *(var_f8 + 0xc)
                *(var_f8 + 0xc) -= 1
                
                if (rbx_2 == 1)
                    (*(*var_f8 + 8))(var_f8, zx.q(rbx_2))
        
        result.b = 0
    else
        float zmm1_1[0x4] = var_188
        uint128_t zmm6_2 = var_178
        int32_t var_170
        float zmm8_1[0x4] = var_170
        *arg6 = zmm0_2.d
        int32_t var_184
        uint128_t zmm2_2
        zmm2_2.d = var_184.d f* *(arg1 + 0x2c)
        zmm1_1[0] = zmm1_1[0] f* *(arg1 + 0x28)
        int32_t var_180
        zmm0_2.d = var_180.d f* *(arg1 + 0x30)
        *arg7 = (_mm_unpacklo_ps(zmm1_1, zmm2_2.q)).q
        arg7[1].d = zmm0_2.d
        zmm6_2.d = zmm6_2.d f* *(arg1 + 0x34)
        int32_t var_174
        zmm7_1.d = var_174.d f* *(arg1 + 0x38)
        zmm8_1[0] = zmm8_1[0] f* *(arg1 + 0x3c)
        zmm0_2.d = zmm6_2.d f* zmm6_2.d
        zmm2_2.d = zmm7_1.d f* zmm7_1.d
        zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
        zmm2_2.d = zmm2_2.d f+ zmm0_2.d
        zmm2_2.d = zmm2_2.d f+ zmm8_1[0]
        int32_t var_1b8_1
        float var_1b0_2
        
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
                int32_t var_168_1 = zmm5_1.d
                zmm1_1 = zmm5_1
                zmm0_2.d = zmm5_1.d f* zmm6_2.d
                zmm5_1.d = zmm5_1.d f* zmm8_1[0]
                var_1b8_1 = zmm0_2.d
                zmm1_1[0] = zmm1_1[0] f* zmm7_1.d
                var_1b0_2 = zmm5_1.d
            else
                zmm1_1 = data_143dbb1fc
                var_1b8_1 = data_143dbb1f8.d
                var_1b0_2 = data_143dbb200.d
            
            float var_1b4_2 = zmm1_1[0]
        else
            var_1b8_1 = zmm6_2.d
            int32_t var_1b4_1 = zmm7_1.d
            var_1b0_2 = zmm8_1[0]
        
        *arg8 = var_1b8_1.q
        arg8[1].d = var_1b0_2
        var_118 = &data_142fc5020
        
        if (var_f8 != 0)
            var_f8[1].d -= 1
            
            if (var_f8[1].d == 1)
                (**var_f8)(var_f8)
                int32_t rbx_1 = *(var_f8 + 0xc)
                *(var_f8 + 0xc) -= 1
                
                if (rbx_1 == 1)
                    (*(*var_f8 + 8))(var_f8, zx.q(rbx_1))
        
        result.b = 1

__security_check_cookie(var_88 ^ &var_218)
return result
