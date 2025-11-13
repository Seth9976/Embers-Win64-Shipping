// 函数: sub_142250050
// 地址: 0x142250050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
float zmm1[0x4] = *(arg1 + 0x1e0)
bool cond:0 = zmm1[0] == 0f
float zmm2[0x4] = 0x3f800000
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
float var_c4 = temp0[0]
float var_c0 = temp0_1[0]
float var_c8 = zmm1[0]
float var_120

if (cond:0)
    var_120 = 3.39999995e+38f
else
    var_120 = 1f / zmm1[0]

if (temp0[0] == 0f)
    int32_t var_11c_1 = 0x7f7fc99e
else
    float var_11c = 1f / temp0[0]

if (temp0_1[0] == 0f)
    int32_t var_118_1 = 0x7f7fc99e
else
    zmm2[0] = 1f / temp0_1[0]
    float var_118 = zmm2[0]

int64_t var_b8 = sub_141f64a80(arg1)
int64_t result = sx.q(*(arg1 + 0x494)) * 2

if (*(arg1 + (result << 3) + 0x458) != 0)
    if (*(arg1 + 0xa8) == 0)
        result = sub_141ee69e0(arg1)
    
    if (*(arg1 + 0xa8) != 0 || result != 0)
        result = *(arg1 + 0xa8)
        
        if (result == 0)
            result = sub_141ee69e0(arg1)
        
        if (*(result + 0x1f8) != 0)
            char var_128
            char* var_d0_1 = &var_128
            float zmm6[0x4]
            float var_28_1[0x4] = zmm6
            void*** (* var_d8)() = j_sub_140597fc0
            var_128 = 0
            int64_t* rax_6 = sub_140a756e0(&var_d8, &data_143958018) + 0x10
            int64_t* var_110 = rax_6
            int64_t rcx_3 = *rax_6
            int64_t rcx_4 = rax_6[2]
            char var_f8_1 = 0
            int64_t result_1 = rax_6[3]
            rax_6[3] = &var_110
            int64_t rcx_5 = 0
            int64_t* rax_7 = var_110
            rax_7[4].d += 1
            int64_t rax_8 = sx.q(*(arg1 + 0x494))
            int64_t var_e8 = 0
            int32_t var_dc_1 = 0
            int64_t rdi_1 = sx.q(*(arg1 + rax_8 * 0x10 + 0x458))
            int32_t var_e0_1 = rdi_1.d
            
            if (rdi_1.d s> 0)
                sub_14149c130(&var_e8, 0)
                rcx_5 = var_e8
            
            memset(rcx_5, 0, rdi_1 << 6)
            zmm6 = *(arg1 + 0x1c0)
            uint32_t zmm5_1[0x4] = data_143f515a0
            uint32_t var_58_1[0x4] = *(arg1 + 0x1d0)
            uint32_t var_48_1[0x4] = __andps_xmmxud_memxud(data_143f515b0, data_143f515c0)
            int64_t* var_a0_1 = &var_b8
            int64_t* var_98_1 = &var_e8
            float temp0_3[0x4] = _mm_mul_ps(zmm6, zmm6)
            uint32_t var_68[0x4]
            int128_t* var_88_1 = &var_68
            float* var_80_1 = &var_c8
            float* var_78_1 = &var_120
            int64_t rax_10 = sx.q(*(arg1 + 0x490))
            void* var_b0 = arg1
            float temp0_5[0x4] = _mm_add_ps(temp0_3, _mm_shuffle_ps(temp0_3, temp0_3, 0x4e))
            int64_t rdx
            int64_t var_a8_1 = rdx
            void* var_70_1 = ((rax_10 + 0x45) << 4) + arg1
            void** var_d0_2 = &var_b0
            int64_t r8
            int64_t var_90_1 = r8
            var_d8 = j_sub_14223d3c0
            float temp0_7[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0x39), temp0_5)
            float temp0_8[0x4] = _mm_rsqrt_ps(temp0_7)
            float temp0_9[0x4] = _mm_mul_ps(temp0_7, zmm5_1)
            float temp0_14[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_8, temp0_8), temp0_9)), 
                    temp0_8), 
                temp0_8)
            zmm5_1 = _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_14, temp0_14), temp0_9))
            uint32_t zmm0_1[0x4] = _mm_cmpeq_ps(data_143f51a10, temp0_7, 2)
            var_68 = _mm_and_ps(
                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5_1, temp0_14), temp0_14), zmm6)
                    ^ data_143f51590, 
                zmm0_1) ^ data_143f51590
            result = sub_142269f50(arg1, &var_d8)
            
            if (var_f8_1 == 0)
                int64_t* rax_14 = var_110
                char var_f8_2 = 1
                rax_14[4].d -= 1
                int64_t* rcx_8 = var_110
                
                if (rcx_4 != rcx_8[2])
                    sub_140b16b40(rcx_8, rcx_4)
                    rcx_8 = var_110
                
                *rcx_8 = rcx_3
                result = result_1
                var_110[3] = result

__security_check_cookie(rax_1 ^ &var_148)
return result
