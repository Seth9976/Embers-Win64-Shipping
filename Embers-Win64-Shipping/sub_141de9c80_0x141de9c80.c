// 函数: sub_141de9c80
// 地址: 0x141de9c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = arg2

if (*(arg1 + 0x1c) != 0 && sub_141ded510(arg1, arg2[0]) != 0 && *arg1 != 0)
    float zmm0[0x4] = sub_141decb10(arg1)
    bool cond:1 = arg1[3].d s<= 1
    float zmm7[0x4] = zmm0
    zmm6[0] = zmm6[0] f- arg1[1].d
    
    if (not(cond:1))
        float zmm1[0x4] = arg1[2].d
        zmm1[0] = zmm1[0] f- *(arg1 + 0xc)
        uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm0, data_142d3f770)
        zmm1[0] = zmm1[0] f/ temp0_1[0]
        zmm0, zmm7 = sub_140a454f0(zmm6, zmm1)
        zmm6 = zmm0
    
    zmm6[0] = zmm6[0] * zmm7[0]
    
    if (zmm7[0] <= zx.o(0)[0])
        zmm6[0] = zmm6[0] + arg1[2].d[0]
        *arg3 = zmm6[0]
        return *arg1
    
    zmm6[0] = zmm6[0] + (*(arg1 + 0xc))[0]
    *arg3 = zmm6[0]
    return *arg1

return 0
