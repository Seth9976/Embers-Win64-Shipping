// 函数: sub_1422400d0
// 地址: 0x1422400d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float* result = *(arg1 + 0x10)
int64_t* result_1 = nullptr

if (result[3].b u>= 2)
    result_1 = result

if (result_1 != 0)
    void* rbx_1 = *result_1
    int64_t rdi_1 = sx.q(result_1[1].d)
    int64_t var_78
    int32_t zmm9_1
    result, zmm9_1 = sub_142238340(&var_78, result_1)
    int64_t zmm0_1 = result[2]
    float zmm6_1[0x4] = *result
    float temp0_1[0x4] = _mm_unpacklo_ps(result[1], 0)
    float temp0_3[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6_1, zmm0_1), temp0_1[0].q)
    int64_t zmm8_1
    zmm8_1.d = temp0_3[0].q.d f- *arg2
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x55)
    temp0_4[0] = temp0_4[0] f- arg2[1]
    float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xaa)
    temp0_5[0] = temp0_5[0] f- arg2[2]
    zmm0_1.d = zmm8_1.d f* zmm8_1.d
    temp0_4[0] = temp0_4[0] * temp0_4[0]
    float zmm1_1 = temp0_5[0] * temp0_5[0]
    temp0_4[0] = temp0_4[0] f+ zmm0_1.d
    temp0_4[0] = temp0_4[0] + zmm1_1
    int32_t temp0_6 = _mm_sqrt_ss(0, temp0_4[0])
    
    if (not(temp0_6 f> arg4.d))
        if (not(temp0_4[0] <= 9.99999994e-09f))
            float zmm2_1[0x4] = 0x3f000000
            int64_t zmm3
            zmm3.d = temp0_4[0].q.d
            int64_t temp0_7 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
            zmm3.d = zmm3.d f* 0.5f
            zmm0_1.d = temp0_7.d f* temp0_7.d
            zmm2_1[0] = 0.5f - zmm3.d f* zmm0_1.d
            zmm0_1.d = temp0_7.d f* zmm2_1[0]
            int64_t zmm5_1
            zmm5_1.d = temp0_7.d f+ zmm0_1.d
            zmm3.d = zmm3.d f* zmm5_1.d f* zmm5_1.d
            zmm0_1.d = zmm5_1.d f* (0.5f f- zmm3.d)
            zmm5_1.d = zmm5_1.d f+ zmm0_1.d
            zmm8_1.d = zmm8_1.d f* zmm5_1.d
            temp0_4[0] = temp0_4[0] f* zmm5_1.d
            temp0_5[0] = temp0_5[0] f* zmm5_1.d
        
        if (arg5 == 1)
            zmm0_1.d = 1f f- temp0_6 f/ arg4.d
            zmm0_1.d = zmm0_1.d f* zmm9_1
            zmm9_1 = zmm0_1.d
        
        zmm8_1.d = zmm8_1.d f* zmm9_1
        temp0_4[0] = temp0_4[0] f* zmm9_1
        temp0_5[0] = temp0_5[0] f* zmm9_1
        float var_84_1 = temp0_4[0]
        float var_80_1 = temp0_5[0]
        float var_70_1
        
        if (((arg6 - 1) & 0xfffffffd) == 0)
            var_78 = zmm8_1.d.q
            var_70_1 = var_80_1
        else
            zmm0_1 = *(*(rbx_1 + 0x2d8) + (rdi_1 << 2))
            zmm8_1.d = zmm8_1.d f* zmm0_1.d
            temp0_4[0] = temp0_4[0] f* zmm0_1.d
            temp0_5[0] = temp0_5[0] f* zmm0_1.d
            var_78.d = zmm8_1.d
            var_78:4.d = temp0_4[0]
            var_70_1 = temp0_5[0]
        
        int64_t rcx_2 = rdi_1 * 3
        int32_t var_88_1
        var_88_1.q = var_78
        
        if (arg6 - 2 u<= 1)
            result = *(rbx_1 + 0x1b8)
        else
            result = *(rbx_1 + 0x230)
        
        zmm0_1.d = var_88_1.d f+ result[rcx_2]
        result[rcx_2] = zmm0_1.d
        zmm1_1 = var_84_1 + result[rcx_2 + 1]
        zmm0_1.d = var_70_1.d f+ result[rcx_2 + 2]
        result[rcx_2 + 2] = zmm0_1.d
        result[rcx_2 + 1] = zmm1_1

return result
