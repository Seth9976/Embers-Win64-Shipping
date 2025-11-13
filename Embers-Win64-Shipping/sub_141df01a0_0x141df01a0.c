// 函数: sub_141df01a0
// 地址: 0x141df01a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = zx.o(0)
float zmm8[0x4] = 0x3f800000
float zmm9[0x4] = arg2
float zmm0[0x4]
float zmm2[0x4]
int32_t zmm6

if (*(arg1 + 0x25) != 0)
    zmm2 = *(arg1 + 0x1c)
    arg2 = arg1[4].d
    
    if (zmm2[0] != arg2[0])
        zmm0 = arg1[3].d
        arg2[0] = arg2[0] - zmm2[0]
        zmm0[0] = zmm0[0] - zmm2[0]
        zmm0[0] = zmm0[0] / arg2[0]
        
        if (zmm0[0] >= 0f)
            zmm0 = _mm_min_ss(zmm0[0], 0x3f800000)
        else
            zmm0 = zx.o(0)
        
        *(arg1 + 0xc) = zmm0[0]
    else
        *(arg1 + 0xc) = 0x3f800000
        zmm0 = 0x3f800000
    
    zmm0, zmm6, zmm7, zmm8, zmm9 = sub_141de16d0(zmm0, *(arg1 + 0x24), *arg1)
    arg2 = arg1[4].d
    arg2[0] = arg2[0] f- *(arg1 + 0x1c)
    arg2[0] = arg2[0] * zmm0[0]
    arg2[0] = arg2[0] f+ *(arg1 + 0x1c)
    arg1[2].d = zmm0[0]
    arg1[3].d = arg2[0]
    *(arg1 + 0x25) = 0

if (*(arg1 + 0x26) != 0)
    arg2 = arg1[1].d
    
    if (arg2[0] f> zmm7.d)
        zmm8[0] = zmm8[0] f- *(arg1 + 0xc)
        zmm0 = __andps_xmmxud_memxud(zmm8, data_142d3f770)
        zmm0[0] = zmm0[0] * arg2[0]
        *(arg1 + 0x14) = zmm0[0]
    else
        void* r8_2 = *arg1
        char rdx_2 = *(arg1 + 0x24)
        *(arg1 + 0x14) = 0
        *(arg1 + 0xc) = 0x3f800000
        zmm0, zmm6, zmm7, zmm8, zmm9 = sub_141de16d0(zmm8, rdx_2, r8_2)
        zmm2 = arg1[4].d
        zmm2[0] = zmm2[0] f- *(arg1 + 0x1c)
        arg1[2].d = zmm0[0]
        zmm2[0] = zmm2[0] * zmm0[0]
        zmm2[0] = zmm2[0] f+ *(arg1 + 0x1c)
        arg1[3].d = zmm2[0]
    
    *(arg1 + 0x26) = 0

if (*(arg1 + 0x27) == 0)
    arg2 = arg1[5].d
else
    int32_t var_18_1 = zmm6
    *(arg1 + 0x1c)
    int32_t zmm6_1
    zmm0, zmm6_1, zmm7, zmm8, zmm9 = sub_141de16d0(zmm8, *(arg1 + 0x24), *arg1)
    arg2 = zmm0
    *(arg1 + 0x27) = 0
    zmm0 = arg1[4].d
    zmm0[0] = zmm0[0] f- zmm6_1
    arg2[0] = arg2[0] * zmm0[0]
    arg2[0] = arg2[0] f+ zmm6_1
    arg1[5].d = arg2[0]

if (not(arg2[0] f== arg1[3].d))
    zmm2 = *(arg1 + 0x14)
    
    if (zmm2[0] <= zmm9[0])
        void* r8_5 = *arg1
        zmm9[0] = zmm9[0] - zmm2[0]
        char rdx_5 = *(arg1 + 0x24)
        *(arg1 + 0x14) = 0
        *(arg1 + 0xc) = 0x3f800000
        float result[0x4]
        zmm0, result = sub_141de16d0(zmm8, rdx_5, r8_5)
        arg1[2].d = zmm0[0]
        arg1[3].d = (arg1[4].d f- *(arg1 + 0x1c)) * zmm0[0] f+ *(arg1 + 0x1c)
        return result
    
    zmm2[0] = zmm2[0] - zmm9[0]
    *(arg1 + 0x14) = zmm2[0]
    zmm8[0] = zmm8[0] f- *(arg1 + 0xc)
    zmm8[0] = zmm8[0] / zmm2[0]
    zmm8[0] = zmm8[0] * zmm9[0]
    zmm8[0] = zmm8[0] f+ *(arg1 + 0xc)
    
    if (zmm8[0] f>= zmm7.d)
        zmm0 = _mm_min_ss(zmm8[0], zmm8[0])
    else
        zmm0 = zx.o(0)
    
    void* r8_4 = *arg1
    char rdx_4 = *(arg1 + 0x24)
    *(arg1 + 0xc) = zmm0[0]
    zmm0 = sub_141de16d0(zmm0, rdx_4, r8_4)
    arg1[2].d = zmm0[0]
    arg1[3].d = (arg1[4].d f- *(arg1 + 0x1c)) * zmm0[0] f+ *(arg1 + 0x1c)

return zx.o(0)
