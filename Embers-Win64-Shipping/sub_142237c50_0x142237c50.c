// 函数: sub_142237c50
// 地址: 0x142237c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
float (* result)[0x4] = __security_cookie ^ &var_108
float (* result_1)[0x4] = result
int32_t i = 0

if (arg2[1].d s> 0)
    int64_t rdi_1 = 0
    
    do
        float zmm0[0x4] = data_142e6da00
        void* rsi_2 = *arg2 + rdi_1
        int32_t var_90 = 4
        int64_t var_7c_1 = 0
        int32_t var_74_1 = 0x3f800000
        float var_8c_1[0x4] = zmm0
        int64_t* var_70_1 = nullptr
        char var_68_1 = 0
        int16_t var_67_1 = 0
        char var_65_1 = 0
        int32_t var_c8[0x8]
        float zmm7_1
        result, zmm7_1 = sub_1422386c0(arg1, rsi_2, &var_90, &var_c8)
        
        if (result.b != 0)
            float zmm6_1 = *(rsi_2 + 8)
            void var_a8
            float* rax_2 = (*(*var_70_1 + 0x68))(var_70_1, &var_a8)
            float zmm2_1 = arg1[0xf]
            float zmm3_1 = rax_2[5] - rax_2[2]
            zmm0 = rax_2[4]
            zmm0[0] = zmm0[0] - rax_2[1]
            float zmm1_1 = rax_2[3] - *rax_2
            zmm0[0] = zmm0[0] * zmm7_1
            zmm3_1 = _mm_min_ss(_mm_min_ss(zmm3_1 * zmm7_1, zmm0[0]), zmm1_1 * zmm7_1) f* arg1[0xe]
            
            if (not(zmm3_1 < zmm2_1))
                zmm2_1 = _mm_min_ss(arg1[0x10][0], zmm3_1)[0]
            
            int64_t rcx_2 = *(arg3 + 8)
            float var_d8 = zmm6_1
            float* var_e0_1 = &var_d8
            float var_d0
            float* var_e8_1 = &var_d0
            var_d0 = zmm2_1 + zmm6_1
            result = (*arg3)(rcx_2, rsi_2, &var_90, &var_c8, var_e8_1, var_e0_1, var_d8, var_d0)
        
        i += 1
        rdi_1 += 0xb0
    while (i s< arg2[1].d)

__security_check_cookie(result_1 ^ &var_108)
return result
