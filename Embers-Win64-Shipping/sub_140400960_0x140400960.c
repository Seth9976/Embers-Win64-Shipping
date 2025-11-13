// 函数: sub_140400960
// 地址: 0x140400960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg4 - 3)
float zmm2[0x4] = zx.o(0)
uint32_t rsi = 0
float zmm3[0x4] = zx.o(0)
float zmm0[0x4]
float zmm1[0x4]

if (result.d s> 0)
    int128_t* r10_1 = arg2
    int128_t* rdx_1 = arg1 - r10_1
    void* r8 = arg3 - r10_1
    result = zx.q(((result.d - 1) u>> 2) + 1)
    uint64_t i_3 = zx.q(result.d)
    rsi = (result << 2).d
    uint64_t i
    
    do
        zmm1 = *(rdx_1 + r10_1)
        zmm0 = *r10_1
        r10_1 = &r10_1[1]
        zmm2 = _mm_add_ps(zmm2, _mm_mul_ps(zmm0, zmm1))
        zmm3 = _mm_add_ps(zmm3, _mm_mul_ps(*(r8 + r10_1 - 0x10), zmm1))
        i = i_3
        i_3 -= 1
    while (i != 1)

zmm2[0].q = zmm2 u>> 0x40
int64_t r10_2 = sx.q(rsi)
int64_t r8_1 = sx.q(arg4)
float temp0_5[0x4] = _mm_add_ps(zmm2, zmm2)
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x55)
temp0_5[0] = temp0_5[0] + temp0_6[0]
zmm3[0].q = zmm3 u>> 0x40
float temp0_7[0x4] = _mm_add_ps(zmm3, zmm3)
*arg5 = temp0_5[0]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x55)
temp0_7[0] = temp0_7[0] + temp0_8[0]
*arg6 = temp0_7[0]

if (r10_2 s< r8_1)
    result = r8_1 - r10_2
    
    if (result s>= 4)
        void* rsi_2 = arg2 - arg1
        int64_t rbp_2 = arg3 - arg1
        result = arg1 + 4 + (r10_2 << 2)
        int64_t i_5 = ((r8_1 - r10_2 - 4) u>> 2) + 1
        r10_2 += i_5 << 2
        int64_t i_1
        
        do
            zmm0 = *(result + rsi_2 - 4)
            result += 0x10
            zmm0[0] = zmm0[0] f* *(result - 0x14)
            zmm0[0] = zmm0[0] + *arg5
            *arg5 = zmm0[0]
            zmm1 = *(result + rbp_2 - 0x14)
            zmm1[0] = zmm1[0] f* *(result - 0x14)
            zmm1[0] = zmm1[0] + *arg6
            *arg6 = zmm1[0]
            zmm0 = *(result + rsi_2 - 0x10)
            zmm0[0] = zmm0[0] f* *(result - 0x10)
            zmm0[0] = zmm0[0] + *arg5
            *arg5 = zmm0[0]
            zmm1 = *(result + rbp_2 - 0x10)
            zmm1[0] = zmm1[0] f* *(result - 0x10)
            zmm1[0] = zmm1[0] + *arg6
            *arg6 = zmm1[0]
            zmm0 = *(result + rsi_2 - 0xc)
            zmm0[0] = zmm0[0] f* *(result - 0xc)
            zmm0[0] = zmm0[0] + *arg5
            *arg5 = zmm0[0]
            zmm1 = *(result + rbp_2 - 0xc)
            zmm1[0] = zmm1[0] f* *(result - 0xc)
            zmm1[0] = zmm1[0] + *arg6
            *arg6 = zmm1[0]
            zmm0 = *(result + rsi_2 - 8)
            zmm0[0] = zmm0[0] f* *(result - 8)
            zmm0[0] = zmm0[0] + *arg5
            *arg5 = zmm0[0]
            zmm1 = *(result + rbp_2 - 8)
            zmm1[0] = zmm1[0] f* *(result - 8)
            zmm1[0] = zmm1[0] + *arg6
            *arg6 = zmm1[0]
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
    
    if (r10_2 s< r8_1)
        result = arg1 + (r10_2 << 2)
        int64_t i_4 = r8_1 - r10_2
        int64_t i_2
        
        do
            zmm0 = *(result + arg2 - arg1)
            result += 4
            zmm0[0] = zmm0[0] f* *(result - 4)
            zmm0[0] = zmm0[0] + *arg5
            *arg5 = zmm0[0]
            zmm1 = *(result + arg3 - arg1 - 4)
            zmm1[0] = zmm1[0] f* *(result - 4)
            zmm1[0] = zmm1[0] + *arg6
            *arg6 = zmm1[0]
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)

return result
