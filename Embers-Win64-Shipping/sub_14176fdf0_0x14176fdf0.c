// 函数: sub_14176fdf0
// 地址: 0x14176fdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = *(arg1 + 0x38)
int64_t i = 0
zmm2[0] = zmm2[0] f* *(arg1 + 0x34)
int64_t rdx = sx.q(*(arg1 + 0x58))
int32_t i_2 = 0
float result[0x4] = zx.o(0)
zmm2[0] = zmm2[0] f* *(arg1 + 0x3c)
zmm2[0] = zmm2[0] * 0.25f
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)

if (rdx.d s> 0 && rdx.d u>= 8)
    int64_t r11_1 = *(arg1 + 0x50)
    float zmm4[0x4] = zx.o(0)
    float zmm6[0x4] = zx.o(0)
    int32_t rcx_1 = rdx.d & 0x80000007
    
    if (rcx_1 s< 0)
        rcx_1 = ((rcx_1 - 1) | 0xfffffff8) + 1
    
    do
        result = *(r11_1 + (i << 2))
        i_2 += 8
        float temp0_1[0x4] = _mm_add_ps(temp0, zmm4)
        float temp0_2[0x4] = _mm_cmpeq_ps(result, zx.o(0), 2)
        zmm4 = _mm_or_ps(_mm_and_ps(temp0_1, temp0_2), _mm_andnot_ps(temp0_2, zmm4))
        float temp0_6[0x4] = _mm_add_ps(zmm6, temp0)
        result = *(r11_1 + (i << 2) + 0x10)
        i += 8
        float temp0_7[0x4] = _mm_cmpeq_ps(result, zx.o(0), 2)
        zmm6 = _mm_or_ps(_mm_and_ps(temp0_6, temp0_7), _mm_andnot_ps(temp0_7, zmm6))
    while (i s< sx.q(rdx.d - rcx_1))
    
    float temp0_11[0x4] = _mm_add_ps(zmm4, zmm6)
    temp0_11[0].q = temp0_11 u>> 0x40
    result = _mm_add_ps(temp0_11, temp0_11)
    float temp0_13[0x4] = _mm_shuffle_ps(result, result, 0xf5)
    result[0] = result[0] + temp0_13[0]

int64_t i_1 = sx.q(i_2)

if (i_1 s< rdx)
    if (rdx - i_1 s>= 4)
        int64_t rax_5 = *(arg1 + 0x50)
        
        do
            if (not(0f f< *(rax_5 + (i_1 << 2))))
                result[0] = result[0] + zmm2[0]
            
            if (not(0f f< *(rax_5 + (i_1 << 2) + 4)))
                result[0] = result[0] + zmm2[0]
            
            if (not(0f f< *(rax_5 + (i_1 << 2) + 8)))
                result[0] = result[0] + zmm2[0]
            
            if (not(0f f< *(rax_5 + (i_1 << 2) + 0xc)))
                result[0] = result[0] + zmm2[0]
            
            i_1 += 4
        while (i_1 s< rdx - 3)
    
    if (i_1 s< rdx)
        int64_t rax_6 = *(arg1 + 0x50)
        
        do
            if (not(0f f< *(rax_6 + (i_1 << 2))))
                result[0] = result[0] + zmm2[0]
            
            i_1 += 1
        while (i_1 s< rdx)

return result
