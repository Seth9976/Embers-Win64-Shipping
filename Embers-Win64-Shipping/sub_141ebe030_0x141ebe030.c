// 函数: sub_141ebe030
// 地址: 0x141ebe030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
float zmm2[0x4] = *arg4
float zmm3[0x4] = arg4[1]
int64_t* r12 = *arg2
int64_t* rdi = arg2[1]
float var_164 = _mm_shuffle_ps(zmm2, zmm2, 0x55)[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
float var_168 = zmm2[0]
float var_158 = zmm3[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float var_150 = temp0_3[0]
float var_160 = temp0_1[0]
float var_15c = temp0_4[0]
float var_154 = temp0_2[0]
float var_128[0x8]
sub_141ecfe50(&var_128, rdi, r12, temp0_4)
float result = sub_141ebdb50(0x3e800000, arg2, arg5, &var_168, arg3, &var_128)

if (result.b == 0)
    float zmm1_1
    result, zmm1_1 = sub_141ebdb50(0x3fe00000, arg2, arg5, &var_168, arg3, &var_128)
    
    if (result.b == 0)
        float zmm1_2
        float zmm6_1
        result, zmm1_2, zmm6_1 =
            sub_141ec3110(arg1, arg3, &var_168, rdi, zmm1_1, &var_128, arg5 + 0x34, 0f, result.b)
        
        if (result.b == 0)
            float zmm0_3[0x4]
            float zmm2_1[0x4]
            float zmm7_1[0x4]
            int128_t zmm8_1
            float zmm9_1[0x4]
            result, zmm0_3, zmm2_1, zmm7_1, zmm8_1, zmm9_1 = sub_141ec3110(arg1, arg3, &var_168, 
                rdi, zmm1_2, &var_128, arg5 + 0x34, zmm6_1, result.b)
            
            if (result.b == 0)
                float var_58_1[0x4] = zmm7_1
                int128_t var_68_1 = zmm8_1
                float var_78_1[0x4] = zmm9_1
                class physx::PxGeometry var_ec
                (*(*rdi + 0x40))(rdi, &var_ec)
                float var_178
                physx::PxGeometryQuery::pointDistance(&var_158, &var_ec, &var_128, &var_178)
                zmm9_1 = 0x3f000000
                float zmm1_3
                
                if (zmm0_3[0] >= 9.99999975e-05f)
                    int32_t var_170
                    zmm2_1 = var_170
                    float var_174
                    zmm1_3 = var_174
                    zmm0_3 = var_178
                else
                    void var_bc
                    class physx::PxTransform* rax_4 = (*(*rdi + 0x40))(rdi, &var_bc)
                    float var_108[0x7]
                    zmm2_1, zmm9_1 = sub_141ecfe50(&var_108, rdi, r12, zmm2_1)
                    int32_t var_148
                    physx::PxGeometryQuery::getWorldBounds(&var_148, rax_4, zmm2_1[0])
                    int32_t var_13c
                    zmm0_3 = var_13c
                    int32_t var_140
                    zmm2_1 = var_140
                    zmm0_3[0] = zmm0_3[0] f+ var_148
                    int32_t var_134
                    zmm2_1[0] = zmm2_1[0] f+ var_134
                    zmm0_3[0] = zmm0_3[0] * zmm9_1[0]
                    float var_144
                    float var_138
                    zmm1_3 = (var_144 + var_138) * zmm9_1[0]
                    zmm2_1[0] = zmm2_1[0] * zmm9_1[0]
                
                float zmm6_2[0x4] = *(arg5 + 0x10)
                zmm7_1 = *(arg5 + 0x14)
                zmm6_2[0] = zmm6_2[0] - zmm0_3[0]
                zmm8_1 = *(arg5 + 0x18)
                zmm7_1[0] = zmm7_1[0] - zmm1_3
                zmm8_1.d = zmm8_1.d f- zmm2_1[0]
                zmm6_2[0] = zmm6_2[0] * zmm6_2[0]
                zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
                zmm7_1[0] = zmm7_1[0] + zmm6_2[0]
                zmm7_1[0] = zmm7_1[0] + zmm8_1.d f* zmm8_1.d
                
                if (zmm7_1[0] == 1f)
                    goto label_141ebe34c
                
                float result_1
                
                if (zmm7_1[0] >= 9.99999994e-09f)
                    float zmm3_1 = zmm7_1[0]
                    float temp0_5[0x4] = _mm_rsqrt_ss(zmm7_1[0], zmm3_1)
                    zmm3_1 = zmm3_1 * zmm9_1[0]
                    temp0_5[0] = temp0_5[0] * temp0_5[0]
                    zmm9_1[0] = zmm9_1[0] - zmm3_1 * temp0_5[0]
                    temp0_5[0] = temp0_5[0] * zmm9_1[0]
                    temp0_5[0] = temp0_5[0] + temp0_5[0]
                    zmm9_1[0] = zmm9_1[0] - zmm3_1 * temp0_5[0] * temp0_5[0]
                    temp0_5[0] = temp0_5[0] * zmm9_1[0]
                    temp0_5[0] = temp0_5[0] + temp0_5[0]
                    zmm6_2[0] = zmm6_2[0] * temp0_5[0]
                    zmm7_1[0] = zmm7_1[0] * temp0_5[0]
                    zmm8_1.d = zmm8_1.d f* temp0_5[0]
                label_141ebe34c:
                    result_1 = zmm8_1.d
                    float var_174_2 = zmm7_1[0]
                    var_178 = zmm6_2[0]
                else
                    zmm1_3 = data_143dbb1fc
                    var_178 = data_143dbb1f8[0]
                    result_1 = data_143dbb200[0]
                    float var_174_1 = zmm1_3
                
                result = result_1
                *(arg5 + 0x34) = var_178.q
                *(arg5 + 0x3c) = result

__security_check_cookie(rax_1 ^ &var_1b8)
return result
