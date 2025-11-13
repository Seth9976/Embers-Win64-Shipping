// 函数: sub_140628a50
// 地址: 0x140628a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg1 == 0)
    result.b = 0
else
    void* rax = sub_1424890f0()
    void* rcx = *(arg1 + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s> *(rcx + 0x38))
        result.b = 0
    else if (*(*(rcx + 0x30) + (result << 3)) != rax + 0x30)
        result.b = 0
    else
        int64_t var_48
        sub_140ae4210(arg2, &var_48)
        void* rax_1 = *(arg1 + 0x130)
        float (* rax_2)[0x4]
        
        if (rax_1 == 0)
            rax_2 = &data_143dbb0c0
        else
            rax_2 = rax_1 + 0x1c0
        
        float temp0_1[0x4] = __mulps_xmmps_memps(data_143cdbe60, *rax_2)
        int32_t var_40
        uint128_t zmm6_1 = var_48 | var_40[0].q << 0x40
        uint128_t zmm0_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xc9)
        float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
        float temp0_4[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xd2)
        zmm0_1 = _mm_mul_ps(zmm0_1, temp0_4)
        uint128_t zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xd2), temp0_3)
        float temp0_8[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xff)
        zmm3_1 = _mm_sub_ps(zmm3_1, zmm0_1)
        zmm3_1 = _mm_add_ps(zmm3_1, zmm3_1)
        float temp0_11[0x4] = _mm_mul_ps(temp0_8, zmm3_1)
        zmm0_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
        float temp0_13[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xd2)
        zmm0_1 = _mm_mul_ps(zmm0_1, temp0_4)
        float temp0_15[0x4] = _mm_mul_ps(temp0_13, temp0_3)
        float temp0_16[0x4] = _mm_add_ps(temp0_11, zmm6_1)
        float temp0_18[0x4] = _mm_add_ps(_mm_sub_ps(temp0_15, zmm0_1), temp0_16)
        float var_38 = temp0_18[0]
        zmm0_1 = _mm_shuffle_ps(temp0_18, temp0_18, 0x55)
        float var_30_1 = _mm_shuffle_ps(temp0_18, temp0_18, 0xaa)[0]
        int32_t var_34_1 = zmm0_1.d
        int32_t var_28
        sub_140adf3c0(&var_38, &var_28)
        result.b = 1
        int32_t zmm1_2 = var_28
        int32_t var_24
        *arg4 = var_24
        *arg3 = zmm1_2

return result
