// 函数: sub_141dfdff0
// 地址: 0x141dfdff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg3 + 0x10)
char rsi = *(arg3 + 4)
int64_t rcx = sx.q(*(r10 + 0x30) * arg4)
int64_t rax_2 = *(r10 + 0x20)
int64_t r11 = sx.q(*(rax_2 + (rcx << 2) + 4))
int32_t r10_1 = *(r10 + 8)
int32_t i_9 = (r11 - 1).d
int64_t rdx_2 =
    (sx.q((r11 * 3).d << 2) + sx.q(*(rax_2 + (rcx << 2))) + 3 + *(r10 + 0x38)) & 0xfffffffffffffffc
uint128_t zmm0

if (r11.d s>= 2)
    zmm0 = *(arg3 + 0x1c)

uint64_t i_8
uint128_t zmm9

if (r11.d s< 2 || zmm0.d f<= 0f)
    i_8 = 0
    i_9 = 0
    zmm9 = zx.o(0)
else if (zmm0.d f< 1f)
    int32_t rcx_1 = r10_1 - 2
    zmm9 = _mm_cvtepi32_ps(zx.o(r10_1 - 1))
    float temp0_2[0x4] = _mm_cvtepi32_ps(zx.o(i_9))
    zmm9.d = zmm9.d f* zmm0.d
    temp0_2[0] = temp0_2[0] f* zmm0.d
    int32_t rax_6 = int.d(zmm9.d)
    
    if (rax_6 s< 0)
        rcx_1 = 0
    else if (rax_6 s< rcx_1)
        rcx_1 = rax_6
    
    int32_t i_13 = int.d(temp0_2.d)
    int32_t i_12
    
    if (i_13 s>= 0)
        i_12 = i_9
        
        if (i_13 s< i_9)
            i_12 = i_13
    else
        i_12 = 0
    
    int64_t i_14 = sx.q(i_12)
    uint32_t rcx_2
    uint32_t r8
    
    if (r10_1 s<= 0xff)
        if (zx.d(*(i_14 + rdx_2)) s> rcx_1)
            i_8 = 0
            int32_t i_7 = i_12 - 1
            int64_t i = sx.q(i_7)
            
            if (i_7 s> 0)
                do
                    if (zx.d(*(i + rdx_2)) s<= rcx_1)
                        i_8 = zx.q(i_7)
                        break
                    
                    i_7 -= 1
                    i -= 1
                while (i s> 0)
        else
            int32_t i_6 = i_12 + 1
            int64_t i_1 = sx.q(i_6)
            i_8 = zx.q(i_9)
            
            for (; i_1 s<= r11 - 1; i_1 += 1)
                if (zx.d(*(i_1 + rdx_2)) s> rcx_1)
                    i_8 = zx.q(i_6 - 1)
                    break
                
                i_6 += 1
        
        r8 = zx.d(*(sx.q(i_8.d) + rdx_2))
        int32_t i_11 = (i_8 + 1).d
        
        if (i_11 s<= i_9)
            i_9 = i_11
        
        rcx_2 = zx.d(*(sx.q(i_9) + rdx_2))
    else
        i_8 = sx.q(i_9)
        
        if (zx.d(*(rdx_2 + (i_14 << 1))) s> rcx_1)
            i_8 = 0
            int32_t i_5 = i_12 - 1
            int64_t i_2 = sx.q(i_5)
            
            if (i_5 s> 0)
                do
                    if (zx.d(*(rdx_2 + (i_2 << 1))) s<= rcx_1)
                        i_8 = zx.q(i_5)
                        break
                    
                    i_5 -= 1
                    i_2 -= 1
                while (i_2 s> 0)
        else
            int32_t i_4 = i_12 + 1
            
            for (int64_t i_3 = sx.q(i_4); i_3 s<= i_8; i_3 += 1)
                if (zx.d(*(rdx_2 + (i_3 << 1))) s> rcx_1)
                    i_8 = zx.q(i_4 - 1)
                    break
                
                i_4 += 1
        
        r8 = zx.d(*(rdx_2 + (sx.q(i_8.d) << 1)))
        int32_t i_10 = (i_8 + 1).d
        
        if (i_10 s<= i_9)
            i_9 = i_10
        
        rcx_2 = zx.d(*(rdx_2 + (sx.q(i_9) << 1)))
    
    uint32_t rcx_3 = rcx_2 - r8
    
    if (rsi != 1)
        uint32_t rax_17 = 1
        zmm0 = _mm_cvtepi32_ps(zx.o(r8))
        
        if (rcx_3 s>= 1)
            rax_17 = rcx_3
        
        zmm9.d = zmm9.d f- zmm0.d
        zmm9.d = zmm9.d f/ _mm_cvtepi32_ps(zx.o(rax_17)).d
    else
        zmm9 = zx.o(0)
else
    i_8 = zx.q(i_9)
    zmm9 = zx.o(0)

sub_140af98a0("Unknown", 0x294, u"%i: unknown or unsupported animation compression format", 4)
int64_t result = sub_140afbb40()
int64_t zmm0_1
float zmm2[0x4]
float zmm3[0x4]

if (i_8.d == i_9)
    zmm0_1 = data_143dbb200
    zmm2 = data_143dbb1fc
    zmm3 = data_143dbb1f8
else
    int128_t zmm6 = data_143dbb1f8
    int128_t zmm7 = data_143dbb1fc
    int128_t zmm8 = data_143dbb200
    sub_140af98a0("Unknown", 0x294, u"%i: unknown or unsupported animation compression format", 4)
    result = sub_140afbb40()
    zmm3 = data_143dbb1f8
    zmm2 = data_143dbb1fc
    zmm3[0] = zmm3[0] f- zmm6.d
    zmm0_1 = data_143dbb200
    zmm2[0] = zmm2[0] f- zmm7.d
    zmm0_1.d = zmm0_1.d f- zmm8.d
    zmm3[0] = zmm3[0] f* zmm9.d
    zmm2[0] = zmm2[0] f* zmm9.d
    zmm0_1.d = zmm0_1.d f* zmm9.d
    zmm3[0] = zmm3[0] f+ zmm6.d
    zmm2[0] = zmm2[0] f+ zmm7.d
    zmm0_1.d = zmm0_1.d f+ zmm8.d

float temp0_5[0x4] = _mm_unpacklo_ps(zmm2, 0)
*(arg2 + 0x20) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0_1), temp0_5[0].q)
return result
