// 函数: sub_14203e8b0
// 地址: 0x14203e8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t var_f8 = arg5
int64_t* result

if (arg1 == 0 || arg2 == 0)
    result = nullptr
else
    void* r14_1 = arg2[0x15]
    
    if (r14_1 != 0)
    label_14203e955:
        result = sub_1420222d0(arg1, r14_1, arg2[0x14], arg8, arg9)
        
        if (result != 0)
            sub_141f4a650(result, arg2, arg3)
            int64_t* rdx_8
            int64_t var_108
            void var_78
            
            if (arg7 != 1)
                int32_t rax_10 = *(arg4 + 8)
                var_108 = *arg4
                int32_t var_100_3 = rax_10
                sub_141f48c60(result, &var_108)
                int64_t* rax_11 = var_f8
                float rax_12 = rax_11[1].d
                var_108 = *rax_11
                sub_141f48ec0(result, &var_108)
                float rax_14
                uint32_t zmm0_8[0x4]
                
                if (arg7 != 2)
                    zmm0_8 = zx.o(*arg6)
                    rax_14 = (*arg6)[2]
                else
                    (*(*arg2 + 0x408))(arg2, &var_78, arg3, 0)
                    float zmm1_1 = (zx.o(0)).d
                    uint32_t var_58[0x4]
                    bool cond:0_1 = _mm_and_ps(var_58, 0x7fffffff)[0] f> 9.99999994e-09f
                    var_108.o = var_58
                    uint32_t zmm2_1[0x4]
                    
                    if (cond:0_1)
                        zmm2_1 = 0x3f800000
                        zmm2_1[0] = 1f f/ var_58[0]
                    else
                        zmm2_1 = zx.o(0)
                    
                    uint32_t zmm3_1[0x4]
                    
                    if (_mm_and_ps(var_108:4.d, 0x7fffffff)[0] f> 9.99999994e-09f)
                        zmm3_1 = 0x3f800000
                        zmm3_1[0] = 1f f/ var_108:4.d
                    else
                        zmm3_1 = zx.o(0)
                    
                    if (not(_mm_and_ps(rax_12, 0x7fffffff)[0] f<= 9.99999994e-09f))
                        zmm1_1 = 1f / rax_12
                    
                    zmm2_1[0] = zmm2_1[0] f* *arg6
                    zmm1_1 = zmm1_1 * (*arg6)[2]
                    zmm3_1[0] = zmm3_1[0] f* (*arg6)[1]
                    rax_14 = zmm1_1
                    zmm0_8 = _mm_unpacklo_ps(zmm2_1, zmm3_1[0].q)
                
                rdx_8 = &var_108
                float var_100_5 = rax_14
                var_108 = zmm0_8.q
            else
                (*(*arg2 + 0x408))(arg2, &var_78, arg3, 0)
                sub_140ade170(var_f8, &var_108)
                float zmm2_2[0x4] = *(arg4 + 4)
                float zmm3_2[0x4] = *arg4
                float var_d8[0x4] = var_108.o
                float temp0_1[0x4] = _mm_unpacklo_ps(zmm3_2, (*(arg4 + 8))[0].q)
                float zmm0_2[0x4] = (*arg6)[2]
                float var_c8_1[0x4] = _mm_unpacklo_ps(temp0_1, _mm_unpacklo_ps(zmm2_2, 0)[0].q)
                float var_b8_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*arg6, zmm0_2[0].q), 
                    _mm_unpacklo_ps((*arg6)[1], 0)[0].q)
                float var_a8[0x4]
                sub_140ad7d70(&var_d8, &var_a8, &var_78)
                float var_98[0x4]
                float var_100_1 = _mm_shuffle_ps(var_98, var_98, 0xaa)[0]
                var_f8 = (_mm_unpacklo_ps(var_98, _mm_shuffle_ps(var_98, var_98, 0x55)[0].q)).q
                float var_f0_1 = var_100_1
                sub_141f48c60(result, &var_f8)
                float var_e8[0x4] = var_a8
                int32_t* rax_7 = sub_140adf5d0(&var_e8, &var_108)
                int32_t rax_8 = rax_7[2]
                var_f8 = *rax_7
                int32_t var_f0_2 = rax_8
                sub_141f48ec0(result, &var_f8)
                rdx_8 = &var_f8
                float var_88[0x4]
                float var_100_2 = _mm_shuffle_ps(var_88, var_88, 0xaa)[0]
                var_f8 = (_mm_unpacklo_ps(var_88, _mm_shuffle_ps(var_88, var_88, 0x55)[0].q)).q
                float var_f0_3 = var_100_2
            sub_141f49070(result, rdx_8)
            sub_141ef14c0(result, r14_1, 0)
            
            if (arg10 != 0)
                sub_142185b40(result, 1)
            
            void*** rax_15 = sub_141f88540()
            void** r8_5 = *rax_15
            r8_5[0xe](rax_15, result, r8_5)
    else
        r14_1 = sub_141ee69e0(arg2)
        
        if (r14_1 != 0)
            goto label_14203e955
        
        result = nullptr

__security_check_cookie(rax_1 ^ &var_148)
return result
