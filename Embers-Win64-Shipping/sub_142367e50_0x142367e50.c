// 函数: sub_142367e50
// 地址: 0x142367e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm2[0x4] = *(arg1 + 4)
int128_t zmm6
int128_t var_18 = zmm6

if (not(_mm_and_ps(zmm2, 0x7fffffff)[0] f<= 9.99999994e-09f))
    uint32_t zmm1[0x4] = *(arg1 + 8)
    
    if (not(zmm1[0] f> zmm2[0]))
        uint32_t zmm3[0x4] = *(arg1 + 0xc)
        zmm6 = *(arg1 + 0x10)
        zmm3[0] = zmm3[0] f- zmm6.d
        
        if (not(_mm_and_ps(zmm3, 0x7fffffff)[0] f<= 9.99999994e-09f))
            zmm1[0] = zmm1[0] f/ zmm2[0]
            zmm1[0] = zmm1[0] f* zmm3[0]
            zmm1[0] = zmm1[0] f+ zmm6.d
            
            if (arg2 != 0)
                return zmm1
            
            zmm1[0] = zmm1[0] f* 0.0500000007f
            return powf(0x41200000[0], zmm1[0])

uint32_t zmm0[0x4] = *(arg1 + 0xc)

if (arg2 != 0)
    return zmm0

zmm0[0] = zmm0[0] f* 0.0500000007f
return powf(0x41200000[0], zmm0[0])
