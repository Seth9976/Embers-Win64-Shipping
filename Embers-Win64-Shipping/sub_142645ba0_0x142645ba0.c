// 函数: sub_142645ba0
// 地址: 0x142645ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm0[0x4] = *(arg1 + 4)
zmm0[0] = zmm0[0] f- *(arg2 + 4)

if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f>= 5f))
    zmm0 = *(arg1 + 8)
    zmm0[0] = zmm0[0] f- *(arg2 + 8)
    
    if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f>= 5f))
        zmm0 = *(arg1 + 0xc)
        
        if (zmm0[0] f< 0f)
        label_142645bfb:
            
            if (sub_141ded5a0(arg1, arg2) != 0)
                return 1
        else
            int32_t zmm4 = *(arg2 + 0xc)
            
            if (zmm4 f< 0f)
                goto label_142645bfb
            
            zmm0[0] = zmm0[0] f- zmm4
            
            if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f>= 5f))
                goto label_142645bfb

return 0
