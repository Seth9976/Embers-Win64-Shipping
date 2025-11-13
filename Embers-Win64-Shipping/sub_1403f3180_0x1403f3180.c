// 函数: sub_1403f3180
// 地址: 0x1403f3180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg3)
int32_t i_1 = 0
float arg_10 = arg2[0]
float zmm2[0x4] = arg2
uint64_t rax_1 = zx.q(r11.d) & 0xfffc

if (rax_1.d s> 0)
    void* rdx_1 = arg1 + 8
    int64_t i_3 = ((rax_1 - 1) u>> 2) + 1
    i_1 = (i_3 << 2).d
    int64_t i
    
    do
        rdx_1 += 0x10
        zmm2[0] = zmm2[0] f* *(rdx_1 - 0x18)
        zmm2[0] = zmm2[0] f* *(rdx_1 - 0x14)
        *(rdx_1 - 0x18) = zmm2[0]
        *(rdx_1 - 0x14) = zmm2[0]
        zmm2[0] = zmm2[0] f* *(rdx_1 - 0x10)
        zmm2[0] = zmm2[0] f* *(rdx_1 - 0xc)
        *(rdx_1 - 0x10) = zmm2[0]
        *(rdx_1 - 0xc) = zmm2[0]
        i = i_3
        i_3 -= 1
    while (i != 1)

uint64_t result = zx.q(arg3 - i_1)

if (i_1 s< arg3 && result.d u>= 8)
    arg2 = arg_10
    arg2 = _mm_shuffle_ps(arg2, arg2, 0)
    int32_t rax_5 = result.d & 0x80000007
    
    if (rax_5 s< 0)
        rax_5 = ((rax_5 - 1) | 0xfffffff8) + 1
    
    do
        int64_t i_4 = sx.q(i_1)
        *(arg1 + (i_4 << 2)) = _mm_mul_ps(*(arg1 + (i_4 << 2)), arg2)
        result = zx.q(i_1 + 4)
        i_1 += 8
        int64_t rcx = sx.q(result.d)
        *(arg1 + (rcx << 2)) = _mm_mul_ps(*(arg1 + (rcx << 2)), arg2)
    while (i_1 s< arg3 - rax_5)

int64_t i_5 = sx.q(i_1)

if (i_5 s< r11)
    result = r11 - i_5
    
    if (result s>= 4)
        result = arg1 + 8 + (i_5 << 2)
        int64_t i_6 = ((r11 - i_5 - 4) u>> 2) + 1
        i_5 += i_6 << 2
        int64_t i_2
        
        do
            result += 0x10
            zmm2[0] = zmm2[0] f* *(result - 0x18)
            zmm2[0] = zmm2[0] f* *(result - 0x14)
            *(result - 0x18) = zmm2[0]
            *(result - 0x14) = zmm2[0]
            zmm2[0] = zmm2[0] f* *(result - 0x10)
            zmm2[0] = zmm2[0] f* *(result - 0xc)
            *(result - 0x10) = zmm2[0]
            *(result - 0xc) = zmm2[0]
            i_2 = i_6
            i_6 -= 1
        while (i_2 != 1)
    
    while (i_5 s< r11)
        i_5 += 1
        zmm2[0] = zmm2[0] f* *(arg1 + (i_5 << 2) - 4)
        *(arg1 + (i_5 << 2) - 4) = zmm2[0]

return result
