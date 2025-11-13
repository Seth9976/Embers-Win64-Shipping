// 函数: sub_14203f630
// 地址: 0x14203f630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t var_158 = arg11
int64_t* result

if (arg1 == 0 || arg2 == 0)
    result = nullptr
else
    void* r15_1 = arg2[0x15]
    
    if (r15_1 == 0)
        r15_1 = sub_141ee69e0(arg2)
    
    *arg4
    float var_178 = arg4[1].d
    int64_t var_168
    
    if (arg6 == 0)
        float temp0_3[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*arg4, arg4[1].d[0].q), 
            _mm_unpacklo_ps(*(arg4 + 4), 0)[0].q)
        int32_t rcx_1
        rcx_1.b = sub_140b5b8a0(arg3.d, 0) == 0
        rcx_1.b |= arg3:4.d != arg6
        float rax_8
        uint128_t zmm3
        uint128_t zmm6
        
        if (rcx_1.b == 0)
            float zmm5[0x4] = *(arg2 + 0x1c0)
            zmm6 = _mm_mul_ps(*(arg2 + 0x1e0), temp0_3)
            float temp0_27[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
            float temp0_28[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
            float temp0_29[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
            float temp0_31[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), temp0_28)
            zmm3 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), temp0_27), temp0_31)
            zmm3 = _mm_add_ps(zmm3, zmm3)
            float temp0_36[0x4] = _mm_mul_ps(temp0_29, zmm3)
            float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), temp0_27)
            float temp0_39[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            float temp0_40[0x4] = _mm_add_ps(temp0_36, zmm6)
            float temp0_44[0x4] = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_38, _mm_mul_ps(temp0_39, temp0_28)), temp0_40), 
                *(arg2 + 0x1d0))
            float temp0_45[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0xaa)
            float temp0_46[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0x55)
            rax_8 = temp0_45[0]
            _mm_unpacklo_ps(temp0_44, temp0_46[0].q)
        else
            void var_a8
            int128_t* rax_7 = (*(*arg2 + 0x408))(arg2, &var_a8, arg3, 0)
            float zmm5_1[0x4] = *rax_7
            zmm6 = _mm_mul_ps(rax_7[2], temp0_3)
            float temp0_5[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
            float temp0_6[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
            float temp0_7[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
            float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), temp0_6)
            zmm3 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), temp0_5), temp0_9)
            zmm3 = _mm_add_ps(zmm3, zmm3)
            float temp0_14[0x4] = _mm_mul_ps(temp0_7, zmm3)
            float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), temp0_5)
            float temp0_17[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            float temp0_18[0x4] = _mm_add_ps(temp0_14, zmm6)
            float temp0_22[0x4] = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_16, _mm_mul_ps(temp0_17, temp0_6)), temp0_18), rax_7[1])
            float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)
            float temp0_24[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
            rax_8 = temp0_23[0]
            _mm_unpacklo_ps(temp0_22, temp0_24[0].q)
        var_178 = rax_8
    else if (arg6 - 2 u<= 1)
        int64_t* rax_11 = (*(*arg2 + 0x410))(arg2, &var_168, arg3)
        *rax_11
        var_178 = rax_11[1].d
    
    int64_t var_138
    int64_t zmm6_1 = sub_141e714a0(&var_138, r15_1, arg2[0x14])
    float var_160_3 = var_178
    var_168 = zmm6_1
    float zmm0_1[0x4] = sub_141e86f40(&var_138, &var_168)
    int64_t arg_60
    bool cond:0_1 = arg_60 == 0
    char var_d6_1 = arg7
    var_138 = var_158
    int64_t var_128
    
    if (not(cond:0_1))
        zmm0_1 = sub_141e6db90(&var_128, &var_178, &arg_60, nullptr)
    
    int64_t* result_1 = sub_141e78140(arg1, &var_138, zmm0_1)
    
    if (result_1 != 0)
        void* rax_15 = result_1[0x15]
        
        if (rax_15 != 0)
        label_14203f907:
            char rax_16 = sub_14243ade0(rax_15)
            char r8_5
            
            if (arg6 - 2 u<= 1)
                r8_5 = sub_141f32b40(result_1, arg2, &data_143a2de4c, arg3)
            else
                sub_141f32b40(result_1, arg2, &data_143f3f280, arg3)
                int64_t* r8_4 = &var_168
                int32_t rax_17 = arg5[1].d
                int64_t* rdx_7 = &var_158
                var_168 = *arg5
                int32_t var_160_4 = rax_17
                int32_t rax_18 = arg4[1].d
                char var_180_1 = 0
                var_158 = *arg4
                int64_t var_188_1 = 0
                int32_t var_150_1 = rax_18
                
                if (arg6 != 1)
                    r8_5 = sub_141f48a10(result_1, rdx_7, r8_4, 0, var_188_1, var_180_1)
                else
                    r8_5 = sub_141f4a260(result_1, rdx_7, r8_4, 0, var_188_1, var_180_1)
            
            int32_t zmm0_3
            int512_t zmm1_3
            zmm0_3, zmm1_3 = sub_141ef68b0(result_1, arg9, sub_141ef78b0(result_1, arg8, r8_5))
            result_1[0x42].b &= 0xb7
            char rax_19 = 0
            
            if (rax_16 == 0)
                rax_19 = 0x40
            
            result_1[0x42].b = ((rax_19 | result_1[0x42].b) & 0xfe) | (rax_16 & 0xf7) << 3 | arg12
            (*(*arg1 + 0x2a8))(arg1)
            zmm1_3.o = arg10
            result_1[0x48].d = zmm0_3
            (*(*result_1 + 0x530))(result_1, zmm1_3)
        else
            rax_15 = sub_141ee69e0(result_1)
            
            if (rax_15 != 0)
                goto label_14203f907
    
    int32_t var_e0_1 = 0
    int64_t var_e8
    
    if (var_e8 != 0)
        sub_140a74f90(var_e8)
    
    int32_t var_120_1 = 0
    int32_t var_11c
    
    if (var_11c != 0)
        sub_1405a5410(&var_128, 0)
    
    int32_t var_f8_1 = 0xffffffff
    int32_t var_f4_1 = 0
    void var_118
    sub_14059a8e0(&var_118, 0)
    int64_t var_108
    
    if (var_108 != 0)
        sub_140a74f90(var_108)
    
    int64_t rcx_21 = var_128
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)
    
    result = result_1

__security_check_cookie(rax_1 ^ &var_1a8)
return result
