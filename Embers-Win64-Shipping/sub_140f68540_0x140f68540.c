// 函数: sub_140f68540
// 地址: 0x140f68540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm0[0x4] = *arg1
zmm0[0] = zmm0[0] f- *arg2
int64_t result

if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999975e-05f))
    zmm0 = *(arg1 + 4)
    zmm0[0] = zmm0[0] f- arg2[1]
    
    if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999975e-05f))
        zmm0 = *(arg1 + 8)
        zmm0[0] = zmm0[0] f- arg2[2]
        
        if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999975e-05f))
            zmm0 = *(arg1 + 0xc)
            zmm0[0] = zmm0[0] f- arg2[3]
            
            if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999975e-05f)
                    && not(arg2[4][0] f!= arg1[1].d) && not(arg2[5][0] f!= *(arg1 + 0x14)))
                result.b = 1
                return result

result.b = 0
return result
