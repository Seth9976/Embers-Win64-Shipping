// 函数: sub_141739d90
// 地址: 0x141739d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float* r14 = arg3
int32_t* result = arg2
uint128_t zmm0
int512_t zmm6
int32_t zmm7_1
zmm0, zmm6, zmm7_1 = sub_141737e80(**(arg1 + 0x10), arg2, arg3, arg4, arg5, arg6.d)
zmm6.o = zx.o(0)

if (result[3].b != 0)
    float zmm2_1 = result[1] f- r14[1]
    float zmm1_1 = *result - *r14
    zmm0.d = result[2].d f- r14[2]
    zmm0.d = zmm0.d f* zmm0.d
    zmm6.o = _mm_sqrt_ss(0, zmm2_1 * zmm2_1 + zmm1_1 * zmm1_1 f+ zmm0.d)

int32_t i = 1

if (*(arg1 + 0x18) s> 1)
    int64_t** rdi_1 = 8
    
    do
        float var_48
        float zmm6_1
        zmm0, zmm6_1, zmm7_1 =
            sub_141737e80(*(rdi_1 + *(arg1 + 0x10)), &var_48, r14, arg4, zmm0, zmm7_1)
        char var_3c
        
        if (var_3c != 0)
            float zmm1_2 = var_48 - *r14
            float var_44
            float zmm2_2 = var_44 - r14[1]
            int32_t var_40
            zmm0.d = var_40.d f- r14[2]
            zmm0.d = zmm0.d f* zmm0.d
            
            if (result[3].b == 0
                    || not(_mm_sqrt_ss(0, zmm2_2 * zmm2_2 + zmm1_2 * zmm1_2 f+ zmm0.d) >= zmm6_1))
                zmm0 = var_48.o
                *result = zmm0
        
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< *(arg1 + 0x18))

return result
