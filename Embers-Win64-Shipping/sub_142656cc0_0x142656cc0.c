// 函数: sub_142656cc0
// 地址: 0x142656cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9_1 = *(arg1 + 0x118)
float result[0x4] = zx.o(0)
int128_t* r8 = *(arg1 + 0x110)
int32_t rax_1 = r9_1 - arg2

if (arg2 s>= r9_1)
    return zx.o(0)

if (rax_1 u>= 8)
    int32_t rax_2 = rax_1 & 0x80000007
    
    if (rax_2 s< 0)
        rax_2 = ((rax_2 - 1) | 0xfffffff8) + 1
    
    float zmm2[0x4] = zx.o(0)
    
    do
        arg2 += 8
        zmm2 = _mm_add_ps(zmm2, *r8)
        float zmm0[0x4] = r8[1]
        r8 = &r8[2]
        result = _mm_add_ps(result, zmm0)
    while (arg2 s< r9_1 - rax_2)
    
    float temp0_3[0x4] = _mm_add_ps(zmm2, result)
    temp0_3[0].q = temp0_3 u>> 0x40
    result = _mm_add_ps(temp0_3, temp0_3)
    float temp0_5[0x4] = _mm_shuffle_ps(result, result, 0xf5)
    result[0] = result[0] + temp0_5[0]

if (arg2 s< r9_1)
    if (r9_1 - arg2 s>= 4)
        uint64_t rax_11 = zx.q(((r9_1 - arg2 - 4) u>> 2) + 1)
        uint64_t i_3 = zx.q(rax_11.d)
        arg2 += (rax_11 << 2).d
        uint64_t i
        
        do
            result[0] = result[0] f+ *r8
            result[0] = result[0] f+ *(r8 + 4)
            result[0] = result[0] f+ *(r8 + 8)
            result[0] = result[0] f+ *(r8 + 0xc)
            r8 = &r8[1]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    if (arg2 s< r9_1)
        int64_t i_2 = sx.q(r9_1 - arg2)
        int64_t i_1
        
        do
            result[0] = result[0] f+ *r8
            r8 += 4
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

return result
