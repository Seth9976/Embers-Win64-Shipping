// 函数: sub_142279400
// 地址: 0x142279400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *arg1

if (result != 0)
    int64_t* result_1 = nullptr
    
    if (result[1].w == 6)
        result_1 = result
    
    if (result_1 != 0)
        float zmm2[0x4] = *arg2
        float zmm3[0x4] = arg2[1]
        int64_t rax = *result_1
        float var_24_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)[0]
        float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float var_28 = zmm2[0]
        float var_18_1 = zmm3[0]
        float temp0_4[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
        float temp0_5[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        float var_10_1 = temp0_4[0]
        float var_20_1 = temp0_3[0]
        float var_1c_1 = temp0_5[0]
        float var_14_1 = temp0_2[0]
        return (*(rax + 0x1b0))(result_1, &var_28)

return result
