// 函数: sub_141ac7040
// 地址: 0x141ac7040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t result = __security_cookie ^ &var_b8
int64_t result_1 = result

if (arg1 != 0)
    int32_t rcx
    rcx.b = sub_140b5b8a0(arg2.d, 0).b == 0
    result.b = arg2:4.d != 0
    rcx.b |= result.b
    
    if (rcx.b != 0)
        result.b = arg4:4.d != 0
        
        if ((sub_140b5b8a0(arg4.d, 0).b == 0 | result.b) != 0)
            void var_98
            (*(*arg1 + 0x408))(arg1, &var_98, arg2, zx.q(arg3))
            void var_68
            result = (*(*arg1 + 0x408))(arg1, &var_68, arg4, zx.q(arg5))
            float var_88[0x4]
            float temp0_1[0x4] = _mm_shuffle_ps(var_88, var_88, 0x55)
            float var_58[0x4]
            float temp0_2[0x4] = _mm_shuffle_ps(var_58, var_58, 0x55)
            float zmm3 = var_58[0] - var_88[0]
            float temp0_3[0x4] = _mm_shuffle_ps(var_58, var_58, 0xaa)
            temp0_2[0] = temp0_2[0] - temp0_1[0]
            float temp0_4[0x4] = _mm_shuffle_ps(var_88, var_88, 0xaa)
            temp0_3[0] = temp0_3[0] - temp0_4[0]
            temp0_2[0] = temp0_2[0] * temp0_2[0]
            temp0_3[0] = temp0_3[0] * temp0_3[0]
            temp0_2[0] = temp0_2[0] + zmm3 * zmm3
            temp0_2[0] = temp0_2[0] + temp0_3[0]
            float zmm1[0x4] = _mm_sqrt_ss(0, temp0_2[0])
            
            if (arg6 != 0)
                float zmm4_1[0x4] = arg8
                zmm4_1[0] = zmm4_1[0] f- arg7
                float zmm2[0x4]
                
                if (__andps_xmmxud_memxud(zmm4_1, data_142d3f770)[0] > 9.99999994e-09f)
                    zmm1[0] = zmm1[0] f- arg7
                    zmm1[0] = zmm1[0] / zmm4_1[0]
                    zmm2 = zx.o(0)
                    
                    if (not(zmm1[0] < 0f))
                        zmm2 = _mm_min_ss(zmm1[0], 0x3f800000)
                else
                    if (zmm1[0] < zmm4_1[0])
                        zmm1 = zx.o(0)
                    else
                        zmm1 = 0x3f800000
                    
                    zmm2 = _mm_min_ss(zmm1[0], 0x3f800000)
                
                zmm1 = arg10
                zmm1[0] = zmm1[0] f- arg9
                zmm1[0] = zmm1[0] * zmm2[0]
                zmm1[0] = zmm1[0] f+ arg9

__security_check_cookie(result_1 ^ &var_b8)
return result
