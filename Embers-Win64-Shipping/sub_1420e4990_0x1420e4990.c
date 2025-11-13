// 函数: sub_1420e4990
// 地址: 0x1420e4990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *(arg1 + 8)

if ((r8[5].d & 0x40000) == 0)
    return 0x3f800000

int64_t r11 = sx.q(r8[1].d)
int64_t i = 0
int32_t zmm1 = (zx.o(0)).d
float zmm2
float zmm4

if (r11 s>= 4)
    float zmm5 = *(arg1 + 0x14)
    char r9_1 = *(arg1 + 0x18)
    
    do
        zmm2 = zmm5
        
        if (r9_1 != 0)
            zmm2 = zmm2 f* *(*(*r8 + (i << 3)) + 0x1308) f* 0.00999999978f
        
        zmm4 = zmm5
        zmm1 = _mm_max_ss(zmm2, zmm1)
        
        if (r9_1 != 0)
            zmm4 = zmm4 f* *(*(*r8 + (i << 3) + 8) + 0x1308) f* 0.00999999978f
        
        int32_t temp0_2 = _mm_max_ss(zmm1, zmm4)
        zmm2 = zmm5
        
        if (r9_1 != 0)
            zmm2 = zmm2 f* *(*(*r8 + (i << 3) + 0x10) + 0x1308) f* 0.00999999978f
        
        int32_t temp0_3 = _mm_max_ss(temp0_2, zmm2)
        zmm4 = zmm5
        
        if (r9_1 != 0)
            zmm4 = zmm4 f* *(*(*r8 + (i << 3) + 0x18) + 0x1308) f* 0.00999999978f
        
        i += 4
        zmm1 = _mm_max_ss(temp0_3, zmm4)
    while (i s< r11 - 3)

if (i s< r11)
    zmm4 = *(arg1 + 0x14)
    char r9_2 = *(arg1 + 0x18)
    
    do
        zmm2 = zmm4
        
        if (r9_2 != 0)
            zmm2 = zmm2 f* *(*(*r8 + (i << 3)) + 0x1308) f* 0.00999999978f
        
        i += 1
        zmm1 = _mm_max_ss(zmm2, zmm1)
    while (i s< r11)

if (zmm1 f< 0.00999999978f)
    return 0x3c23d70a

return __minss_xmmss_memss(zmm1, 0x40800000)
