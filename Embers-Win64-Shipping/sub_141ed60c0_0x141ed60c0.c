// 函数: sub_141ed60c0
// 地址: 0x141ed60c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if ((*(arg1 + 0x8a) & 1) != 0)
    float zmm6_1[0x4]
    float zmm7_1[0x4]
    result, zmm6_1, zmm7_1 = sub_141ee2210(arg1)
    void* const* result_1 = result
    
    if (result != 0)
        float temp0_1[0x4] = _mm_max_ss(zmm7_1[0], 0)
        float temp0_2[0x4] = _mm_max_ss(zmm6_1[0], 0)
        float zmm0_1[0x4] = _mm_and_ps(temp0_1, 0x7fffffff)
        
        if (not(zmm0_1[0] > 9.99999994e-09f))
            zmm0_1 = _mm_and_ps(temp0_2, 0x7fffffff)
            
            if (not(zmm0_1[0] > 9.99999994e-09f))
                return (*(*arg1 + 0x538))(arg1)
        
        if (arg4 == 0)
            zmm0_1 = _mm_and_ps(temp0_2, 0x7fffffff)
        
        if (arg4 != 0 || zmm0_1[0] <= 9.99999994e-09f)
            result.b = 4
        else
            result.b = 0
        
        *(arg1 + 0x212) &= 0xfb
        *(arg1 + 0x212) |= result.b
        int64_t var_80_1 = arg1[0xe8]
        char var_6f_1 = arg6
        char var_70_1 = arg4
        void*** rax_3 = sub_140a82f30(0x28, 8)
        *rax_3 = &data_142ec17e8
        float var_78[0x4]
        var_78[0] = temp0_1[0]
        *(rax_3 + 8) = result_1.o
        float temp0_6[0x4] = _mm_shuffle_ps(var_78, var_78, 0xe1)
        temp0_6[0] = temp0_2[0]
        *(rax_3 + 0x18) = _mm_shuffle_ps(temp0_6, temp0_6, 0xe1)
        void*** var_58_1 = rax_3
        uint64_t (* var_68)(int64_t* arg1)
        uint64_t (* rax_4)(int64_t* arg1) = var_68
        
        if (rax_3 != -8)
            rax_4 = j_sub_141ed4550
        
        var_68 = rax_4
        return sub_141e85cb0(&var_68, arg5)

return result
