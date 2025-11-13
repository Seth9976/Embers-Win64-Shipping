// 函数: sub_141be8040
// 地址: 0x141be8040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if ((*(*arg1 + 0x448))().b != 0)
    float zmm0[0x2]
    
    if (*(arg1 + 0x49e) == 0)
        result = arg1[0x15]
        int128_t zmm6 = *(arg1 + 0x26c)
        
        if (result == 0)
            result = sub_141ee69e0(arg1)
        
        zmm0 = *(result + 0x520)
        zmm0[0] = zmm0[0] f- zmm6.d
    
    if (*(arg1 + 0x49e) != 0 || not(zmm0[0] > 0.5f))
        double zmm1
        
        if (*(arg1 + 0x431) != 0)
            result = arg1[0x15]
            
            if (result == 0)
                result = sub_141ee69e0(arg1)
            
            zmm1 = _mm_cvtps_pd(*(result + 0x520))
        else
            zmm1 = data_143dbb3b8
        
        if (not(zmm1 f- arg1[0x8a] f< _mm_cvtps_pd(*(arg1 + 0x44c))))
            if (arg1[0x89].b != 0)
                return zx.q(*(arg1 + 0x449))
            
            result.b = 1
            return result

result.b = 0
return result
