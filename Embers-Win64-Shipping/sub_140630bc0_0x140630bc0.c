// 函数: sub_140630bc0
// 地址: 0x140630bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_140638cc0(arg2, 0)

float zmm6[0x4]
float var_28[0x4] = zmm6
float zmm7[0x4]
float var_38[0x4] = zmm7
float zmm8[0x4]
float var_48[0x4] = zmm8
float zmm9[0x4]
float var_58[0x4] = zmm9
float zmm10[0x4]
float var_68[0x4] = zmm10
float zmm11[0x4]
float var_78[0x4] = zmm11
uint64_t result

if (arg1 == 0)
label_140630db3:
    result.b = 0
else if (sub_140d23de0(arg1).b == 0)
label_140630db3_1:
    result.b = 0
else
    zmm6 = *(arg1 + 0x1c0)
    zmm10 = *(arg1 + 0x1d0)
    zmm11 = *(arg1 + 0x1e0)
    result = (*(*arg1 + 0x690))(arg1)
    
    if (result == 0)
    label_140630db3_2:
        result.b = 0
    else if (sub_140d23de0(result).b == 0)
    label_140630db3_3:
        result.b = 0
    else
        int64_t* i = *(result + 0xd0)
        
        for (void* r15_1 = &i[sx.q(*(result + 0xd8))]; i != r15_1; i = &i[1])
            int64_t* rdi_2 = *i
            
            if (rdi_2 == 0)
                goto label_140630db3_3
            
            int32_t j_2 = (*(*rdi_2 + 0x28))(rdi_2)
            int64_t rdx = *rdi_2
            result = (*(rdx + 0x30))(rdi_2, rdx)
            
            if (j_2 != 0)
                float (* rdi_3)[0x4] = result + 8
                float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
                float temp0_2[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                float temp0_3[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                uint64_t j_1 = zx.q(j_2)
                uint64_t j
                
                do
                    int64_t rsi_2 = sx.q(arg2[1].d)
                    uint128_t zmm3 = _mm_mul_ps(*(rdi_3 - 8) | (*rdi_3)[0].q << 0x40, zmm11)
                    int32_t rax_2 = (rsi_2 + 1).d
                    arg2[1].d = rax_2
                    float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), temp0_1)
                    uint128_t zmm1 =
                        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), temp0_2), temp0_6)
                    zmm1 = _mm_add_ps(zmm1, zmm1)
                    float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xc9), temp0_1)
                    float temp0_19[0x4] = _mm_add_ps(
                        _mm_add_ps(
                            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xd2), temp0_2), 
                                temp0_12), 
                            _mm_add_ps(_mm_mul_ps(temp0_3, zmm1), zmm3)), 
                        zmm10)
                    float var_88_1 = temp0_19[0]
                    float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0x55)
                    float var_80_1 = _mm_shuffle_ps(temp0_19, temp0_19, 0xaa)[0]
                    float var_84_1 = temp0_20[0]
                    
                    if (rax_2 s> *(arg2 + 0xc))
                        sub_140638a00(arg2)
                    
                    int64_t rcx_7 = *arg2
                    int64_t rdx_2 = rsi_2 * 3
                    rdi_3 = &(*rdi_3)[3]
                    *(rcx_7 + (rdx_2 << 2)) = var_88_1.q
                    *(rcx_7 + (rdx_2 << 2) + 8) = var_80_1
                    j = j_1
                    j_1 -= 1
                while (j != 1)
        
        result.b = 1

return result
