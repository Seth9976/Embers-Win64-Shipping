// 函数: sub_141c46700
// 地址: 0x141c46700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1 = 5f

if (not(arg3 f< 5f))
    zmm1 = _mm_min_ss(*(arg1 + 0x18) * 0.5f - 1f, arg3)

if (*(arg1 + 8) == arg2)
    uint32_t zmm0[0x4] = *(arg1 + 0x20)
    zmm0[0] = zmm0[0] f- zmm1
    
    if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999994e-09f))
        zmm0 = *(arg1 + 0x24)
        zmm0[0] = zmm0[0] f- arg4
        
        if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999994e-09f))
            zmm0 = *(arg1 + 0x28)
            zmm0[0] = zmm0[0] f- arg5
            
            if (_mm_and_ps(zmm0, 0x7fffffff)[0] f<= 9.99999994e-09f)
                return 

*(arg1 + 0x20) = zmm1
*(arg1 + 0x24) = arg4
*(arg1 + 0x28) = arg5
*(arg1 + 8) = arg2
return sub_141c34f50(arg1) __tailcall
