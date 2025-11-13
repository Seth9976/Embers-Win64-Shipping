// 函数: sub_141f68a60
// 地址: 0x141f68a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x440)
float zmm6[0x4] = 0x3f800000

if (rcx != 0)
    float var_68
    void var_48
    float zmm7_1
    zmm6, zmm7_1 = sub_140ae2e90(sub_1423633d0(rcx, &var_48), &var_68, arg1 + 0x1c0)
    int32_t var_5c
    uint32_t zmm1[0x4] = var_5c
    float zmm0[0x4]
    
    if (not(zmm1[0] f< zmm7_1))
        zmm0 = *(arg1 + 0x10c)
        zmm0[0] = zmm0[0] f/ zmm1[0]
        
        if (not(zmm0[0] <= zmm7_1))
            zmm6 = zmm0
    
    int32_t var_58
    zmm1 = var_58
    
    if (not(zmm1[0] f< zmm7_1))
        zmm0 = *(arg1 + 0x110)
        zmm0[0] = zmm0[0] f/ zmm1[0]
        zmm6 = _mm_max_ss(zmm0[0], zmm6[0])
    
    int32_t var_54
    zmm1 = var_54
    
    if (not(zmm1[0] f< zmm7_1))
        zmm0 = *(arg1 + 0x114)
        zmm0[0] = zmm0[0] f/ zmm1[0]
        zmm6 = _mm_max_ss(zmm0[0], zmm6[0])

uint32_t temp0_3[0x4] = __andps_xmmxud_memxud(*(arg1 + 0x1e0), data_143f3b860)
float result[0x4] = _mm_max_ps(_mm_max_ps(temp0_3, _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)), 
    _mm_shuffle_ps(temp0_3, temp0_3, 0xd2))
result[0] = result[0] * zmm6[0]
return result
