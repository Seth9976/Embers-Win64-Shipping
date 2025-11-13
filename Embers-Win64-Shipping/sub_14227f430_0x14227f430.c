// 函数: sub_14227f430
// 地址: 0x14227f430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = (*arg1).b
int32_t zmm0
int32_t zmm1

if ((result & 1) != 0)
    zmm1 = *arg2
    zmm0 = arg1[1]
    
    if (not(zmm0 f< zmm1))
        zmm1 = _mm_min_ss(zmm0, 0x3f800000)
    
    *arg2 = zmm1
    result = (*arg1).b

if ((result & 2) != 0)
    zmm1 = arg2[1]
    zmm0 = arg1[1]
    
    if (not(zmm0 f< zmm1))
        zmm1 = _mm_min_ss(zmm0, 0x3f800000)
    
    arg2[1] = zmm1
    result = (*arg1).b

if ((result & 4) != 0)
    zmm1 = arg2[2]
    zmm0 = arg1[1]
    
    if (not(zmm0 f< zmm1))
        zmm1 = _mm_min_ss(zmm0, 0x3f800000)
    
    arg2[2] = zmm1
    result = (*arg1).b

if ((result & 8) != 0)
    zmm1 = arg2[3]
    zmm0 = arg1[1]
    
    if (not(zmm0 f< zmm1))
        zmm1 = _mm_min_ss(zmm0, 0x3f800000)
    
    arg2[3] = zmm1

return result
