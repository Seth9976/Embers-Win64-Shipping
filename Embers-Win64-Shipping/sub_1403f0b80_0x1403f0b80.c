// 函数: sub_1403f0b80
// 地址: 0x1403f0b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_18 = arg3[0]
int64_t r10 = sx.q(arg4)
uint32_t i_1 = 0
uint64_t result = zx.q(r10.d) & 0xfffc

if (result.d s> 0)
    void* r8_1 = arg1 + 4
    void* r11_2 = arg2 - arg1
    result = ((result - 1) u>> 2) + 1
    i_1 = (result << 2).d
    uint64_t i
    
    do
        r8_1 += 0x10
        arg3[0] = arg3[0] f* *(r11_2 + r8_1 - 0x14)
        *(r8_1 - 0x14) = arg3[0]
        arg3[0] = arg3[0] f* *(r11_2 + r8_1 - 0x10)
        *(r8_1 - 0x10) = arg3[0]
        arg3[0] = arg3[0] f* *(r11_2 + r8_1 - 0xc)
        *(r8_1 - 0xc) = arg3[0]
        arg3[0] = arg3[0] f* *(r11_2 + r8_1 - 8)
        *(r8_1 - 8) = arg3[0]
        i = result
        result -= 1
    while (i != 1)

int32_t r8_3 = arg4 - i_1

if (i_1 s< arg4 && r8_3 u>= 8)
    float zmm1[0x4] = arg_18
    int64_t i_5 = sx.q(i_1)
    int64_t rcx = sx.q(arg4 - 1)
    result = arg1 + (i_5 << 2)
    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
    
    if (result u> arg2 + (rcx << 2) || arg1 + (rcx << 2) u< arg2 + (i_5 << 2))
        int32_t r8_4 = r8_3 & 0x80000007
        
        if (r8_4 s< 0)
            r8_4 = ((r8_4 - 1) | 0xfffffff8) + 1
        
        do
            int64_t i_4 = sx.q(i_1)
            *(arg1 + (i_4 << 2)) = _mm_mul_ps(*(arg2 + (i_4 << 2)), zmm1)
            result = zx.q(i_1 + 4)
            i_1 += 8
            int64_t rcx_2 = sx.q(result.d)
            *(arg1 + (rcx_2 << 2)) = _mm_mul_ps(*(arg2 + (rcx_2 << 2)), zmm1)
        while (i_1 s< arg4 - r8_4)

int64_t i_7 = sx.q(i_1)

if (i_7 s< r10)
    result = r10 - i_7
    
    if (result s>= 4)
        void* rcx_4 = arg2 - arg1
        result = arg1 + 4 + (i_7 << 2)
        int64_t i_6 = ((r10 - i_7 - 4) u>> 2) + 1
        i_7 += i_6 << 2
        int64_t i_2
        
        do
            result += 0x10
            arg3[0] = arg3[0] f* *(rcx_4 + result - 0x14)
            *(result - 0x14) = arg3[0]
            arg3[0] = arg3[0] f* *(rcx_4 + result - 0x10)
            *(result - 0x10) = arg3[0]
            arg3[0] = arg3[0] f* *(rcx_4 + result - 0xc)
            *(result - 0xc) = arg3[0]
            arg3[0] = arg3[0] f* *(rcx_4 + result - 8)
            *(result - 8) = arg3[0]
            i_2 = i_6
            i_6 -= 1
        while (i_2 != 1)
    
    if (i_7 s< r10)
        result = arg1 + (i_7 << 2)
        int64_t i_8 = r10 - i_7
        int64_t i_3
        
        do
            result += 4
            arg3[0] = arg3[0] f* *(arg2 - arg1 + result - 4)
            *(result - 4) = arg3[0]
            i_3 = i_8
            i_8 -= 1
        while (i_3 != 1)

return result
