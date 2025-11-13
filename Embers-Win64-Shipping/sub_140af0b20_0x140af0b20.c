// 函数: sub_140af0b20
// 地址: 0x140af0b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm4 = zx.o(*arg3)
uint128_t zmm0 = _mm_cvtepi32_pd(zx.q(arg3[1]))
zmm4.q = _mm_cvtepi32_pd(zmm4.q).q f/ zmm0.q
uint128_t zmm3 = _mm_cvtpd_ps(zmm4)
zmm0.d = zmm3.d f+ zmm3.d
uint128_t zmm1
zmm1.d = -0.5f f- zmm0.d
int32_t r9_2 = neg.d(int.d(zmm1.d) s>> 1)
int32_t rbx = r9_2 * 0x3c
int32_t rdi = rbx * 0x3c

if (r9_2 s<= 0)
    __builtin_memset(arg1, 0, 0x11)
    return arg1

int32_t r8 = *arg2
int32_t rax_31
int32_t rdi_1
uint128_t zmm2

if (arg4 == 0)
    zmm1 = _mm_cvtepi32_pd(zx.q(r8))
    zmm2.q = zmm1.q f/ _mm_cvtepi32_pd(zx.q(rdi)).q
    int64_t rdx_18 = int.q(zmm2.q)
    
    if (zmm2.q f>= 0.0)
        if (rdx_18 != -0x8000000000000000)
            zmm0.q = float.d(rdx_18)
            
            if (not(zmm0.q f== zmm2.q))
                zmm2.q =
                    float.d(rdx_18 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm2, zmm2.q))) & 1))
    else if (rdx_18 != -0x8000000000000000)
        zmm0.q = float.d(rdx_18)
        
        if (not(zmm0.q f== zmm2.q))
            zmm2.q =
                float.d(rdx_18 + ((zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm2, zmm2.q))) & 1) ^ 1))
    
    rdi_1 = int.d(zmm2.q)
    zmm3.q = zmm1.q f/ _mm_cvtepi32_pd(zx.q(rbx)).q
    int64_t rdx_20 = int.q(zmm3.q)
    
    if (zmm3.q f>= 0.0)
        if (rdx_20 != -0x8000000000000000)
            zmm0.q = float.d(rdx_20)
            
            if (not(zmm0.q f== zmm3.q))
                zmm3.q =
                    float.d(rdx_20 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm3, zmm3.q))) & 1))
    else if (rdx_20 != -0x8000000000000000)
        zmm0.q = float.d(rdx_20)
        
        if (not(zmm0.q f== zmm3.q))
            zmm3.q =
                float.d(rdx_20 + ((zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm3, zmm3.q))) & 1) ^ 1))
    
    zmm1.q = zmm1.q f/ _mm_cvtepi32_pd(zx.q(r9_2)).q
    int64_t rdx_26 = int.q(zmm1.q)
    
    if (zmm1.q f>= 0.0)
        if (rdx_26 != -0x8000000000000000)
            zmm0.q = float.d(rdx_26)
            
            if (not(zmm0.q f== zmm1.q))
                zmm1.q =
                    float.d(rdx_26 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1.q))) & 1))
    else if (rdx_26 != -0x8000000000000000)
        zmm0.q = float.d(rdx_26)
        
        if (not(zmm0.q f== zmm1.q))
            zmm1.q =
                float.d(rdx_26 + ((zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1.q))) & 1) ^ 1))
    
    arg1[1] = int.d(zmm3.q) s% 0x3c
    arg1[4].b = 0
    rax_31 = r8
    arg1[2] = int.d(zmm1.q) s% 0x3c
else
    zmm4.q = zmm4.q f* 600.0
    int32_t rsi_1 = 4
    
    if (r9_2 s<= 0x1e)
        rsi_1 = 2
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r8)
    int32_t r11_2 = (temp3_1 ^ temp2_1) - temp2_1
    zmm1 = _mm_cvtpd_ps(zmm4)
    zmm1.d = zmm1.d f+ zmm1.d
    zmm1.d = zmm1.d f- 0.5f
    int32_t rcx_1 = int.d(zmm1.d) s>> 1
    zmm1.d = _mm_cvtepi32_ps(zx.o(r11_2)).d f/ _mm_cvtepi32_ps(zx.o(rcx_1)).d
    zmm1.d = zmm1.d f+ zmm1.d
    zmm1.d = zmm1.d f- 0.5f
    uint64_t rax_6 = zx.q((int.d(zmm1.d) s>> 1) * rsi_1)
    int32_t temp1_1 = mods.dp.d(sx.q(r11_2), rcx_1)
    
    if (temp1_1 s>= rsi_1)
        zmm3.d = zmm3.d f* 60f
        zmm3.d = zmm3.d f+ zmm3.d
        zmm1.d = float.s(temp1_1 - rsi_1)
        zmm3.d = zmm3.d f- 0.5f
        zmm0.d = float.s(zx.q(int.d(zmm3.d) s>> 1))
        zmm1.d = zmm1.d f/ zmm0.d
        zmm1.d = zmm1.d f+ zmm1.d
        zmm1.d = zmm1.d f- 0.5f
        r11_2 += (int.d(zmm1.d) s>> 1) * rsi_1
    
    int32_t r8_1
    
    if (r8 s<= 0)
        r8_1 = r8 s>> 0x1f
    else
        r8_1 = 1
    
    int32_t r11_4 = (r11_2 + (rax_6 * 9).d) * r8_1
    zmm0 = _mm_cvtepi32_pd(zx.q(rdi))
    zmm1 = _mm_cvtepi32_pd(zx.q(r11_4))
    zmm2.q = zmm1.q f/ zmm0.q
    int64_t rdx_4 = int.q(zmm2.q)
    
    if (zmm2.q f>= 0.0)
        if (rdx_4 != -0x8000000000000000)
            zmm0.q = float.d(rdx_4)
            
            if (not(zmm0.q f== zmm2.q))
                zmm2.q = float.d(rdx_4 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm2, zmm2.q))) & 1))
    else if (rdx_4 != -0x8000000000000000)
        zmm0.q = float.d(rdx_4)
        
        if (not(zmm0.q f== zmm2.q))
            zmm2.q =
                float.d(rdx_4 + ((zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm2, zmm2.q))) & 1) ^ 1))
    
    rdi_1 = int.d(zmm2.q)
    zmm3.q = zmm1.q f/ _mm_cvtepi32_pd(zx.q(rbx)).q
    int64_t rdx_6 = int.q(zmm3.q)
    
    if (zmm3.q f>= 0.0)
        if (rdx_6 != -0x8000000000000000)
            zmm0.q = float.d(rdx_6)
            
            if (not(zmm0.q f== zmm3.q))
                zmm3.q = float.d(rdx_6 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm3, zmm3.q))) & 1))
    else if (rdx_6 != -0x8000000000000000)
        zmm0.q = float.d(rdx_6)
        
        if (not(zmm0.q f== zmm3.q))
            zmm3.q =
                float.d(rdx_6 + ((zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm3, zmm3.q))) & 1) ^ 1))
    
    zmm1.q = zmm1.q f/ _mm_cvtepi32_pd(zx.q(r9_2)).q
    int64_t rdx_12 = int.q(zmm1.q)
    
    if (zmm1.q f>= 0.0)
        if (rdx_12 != -0x8000000000000000)
            zmm0.q = float.d(rdx_12)
            
            if (not(zmm0.q f== zmm1.q))
                zmm1.q =
                    float.d(rdx_12 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1.q))) & 1))
    else if (rdx_12 != -0x8000000000000000)
        zmm0.q = float.d(rdx_12)
        
        if (not(zmm0.q f== zmm1.q))
            zmm1.q =
                float.d(rdx_12 + ((zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1.q))) & 1) ^ 1))
    
    arg1[1] = int.d(zmm3.q) s% 0x3c
    arg1[4].b = 1
    rax_31 = r11_4
    arg1[2] = int.d(zmm1.q) s% 0x3c
*arg1 = rdi_1
arg1[3] = mods.dp.d(sx.q(rax_31), r9_2)
return arg1
