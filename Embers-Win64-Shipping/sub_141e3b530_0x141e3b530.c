// 函数: sub_141e3b530
// 地址: 0x141e3b530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm7[0x4] = arg3
uint32_t zmm0[0x4]

if (*arg1 != 0)
    uint32_t zmm4[0x4] = *(arg1 + 8)
    int32_t zmm5 = *(arg1 + 0xc)
    zmm4[0] = zmm4[0] f- *(arg1 + 4)
    
    if (__andps_xmmxud_memxud(zmm4, data_142d3f770)[0] f> 9.99999994e-09f)
        zmm0 = arg2
        zmm0[0] = zmm0[0] f- *(arg1 + 4)
        zmm0[0] = zmm0[0] f/ zmm4[0]
    else if (arg2[0] f< zmm4[0])
        zmm0 = zx.o(0)
    else
        zmm0 = 0x3f800000
    
    arg2 = *(arg1 + 0x10)
    arg2[0] = arg2[0] f- zmm5
    arg2[0] = arg2[0] f* zmm0[0]
    arg2[0] = arg2[0] f+ zmm5

bool cond:1 = *(arg1 + 1) == 0
arg2[0] = arg2[0] f* *(arg1 + 0x14)
arg2[0] = arg2[0] f+ *(arg1 + 0x18)

if (not(cond:1))
    arg3 = *(arg1 + 0x1c)
    
    if (arg2[0] f>= arg3[0])
        arg2 = _mm_min_ss((*(arg1 + 0x20))[0], arg2[0])
    else
        arg2 = arg3

if (*(arg1 + 2) == 0)
    *(arg1 + 3) = 1
    return arg2

if (*(arg1 + 3) != 0)
    zmm0 = *(arg1 + 0x2c)
    uint32_t zmm3[0x4]
    
    if (arg2[0] f< zmm0[0])
        zmm3 = *(arg1 + 0x28)
    else
        zmm3 = *(arg1 + 0x24)
    
    arg2 = sub_140ad6340(zmm0, arg2, zmm7, zmm3[0])

*(arg1 + 0x2c) = arg2[0]
*(arg1 + 3) = 1
return arg2
