// 函数: sub_141f39a00
// 地址: 0x141f39a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
float (* result)[0x4] = sub_141f64a80(arg1)
float (* result_1)[0x4] = result

if (result != 0)
    float zmm1[0x4] = *(arg1 + 0x1e0)
    uint32_t zmm0[0x4] = zmm1
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    zmm0[0] = zmm0[0] f- temp0_1[0]
    int96_t var_98_1 = zmm1[0].12
    
    if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999975e-05f)
        result.b = 0
    else
        zmm0 = var_98_1:8.d
        zmm1[0] = zmm1[0] f- zmm0[0]
        
        if (_mm_and_ps(zmm1, 0x7fffffff)[0] > 9.99999975e-05f)
            result.b = 0
        else
            temp0_1[0] = temp0_1[0] f- zmm0[0]
            
            if (_mm_and_ps(temp0_1, 0x7fffffff)[0] > 9.99999975e-05f)
                result.b = 0
            else
                int64_t r15_1 = sx.q((*result)[0x12])
                
                if (r15_1 s<= 0)
                    result.b = 0
                else
                    int64_t rbx_1 = 0
                    
                    do
                        void* rdi_1 = *(result_1[4][0].q i+ (rbx_1 << 3))
                        
                        if (rdi_1 == 0)
                            result = 0xffffffff
                        else
                            result = sub_141f5e0e0(arg1, *(rdi_1 + 0x80))
                        
                        if (result.d != 0xffffffff)
                            float var_88[0x2][0x4]
                            uint32_t zmm6_1[0x4]
                            int32_t zmm7_1
                            result, zmm6_1, zmm7_1 =
                                sub_141f5e7d0(arg1, &var_88, result.d, arg1 + 0x1c0)
                            var_98_1.q = 0
                            float var_68[0x4]
                            float temp0_5[0x4] = _mm_shuffle_ps(var_68, var_68, 0x55)
                            temp0_5[0] = temp0_5[0] * var_68[0]
                            var_98_1:8.d = 0
                            float temp0_6[0x4] = _mm_shuffle_ps(var_68, var_68, 0xaa)
                            temp0_5[0] = temp0_5[0] * temp0_6[0]
                            
                            if (not(_mm_and_ps(temp0_5, zmm6_1)[0] f<= zmm7_1))
                                (*(*arg2 + 0x30))(arg2, rdi_1, &var_88)
                        
                        rbx_1 += 1
                    while (rbx_1 s< r15_1)
                    
                    result.b = 0

__security_check_cookie(rax_1 ^ &var_b8)
return result
