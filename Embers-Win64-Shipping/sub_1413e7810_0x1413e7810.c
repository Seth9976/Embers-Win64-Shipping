// 函数: sub_1413e7810
// 地址: 0x1413e7810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(*(arg1 + 0x1018))
int128_t* result = nullptr
uint32_t zmm3 = 0x7f7fffff
int64_t r11 = 0
int128_t zmm10 = *arg2
uint32_t zmm11[0x4] = *(arg2 + 4)
float zmm12[0x4] = *(arg2 + 8)
float zmm4 = zmm11[0]
float zmm5 = zmm12[0]
zmm12[0] = zmm12[0] f+ *(arg2 + 0x14)
zmm5 = zmm5 f- *(arg2 + 0x14)
int128_t zmm6
zmm6.d = zmm10.d f+ *(arg2 + 0xc)
zmm11[0] = zmm11[0] f+ arg2[1].d
int128_t zmm9
zmm9.d = zmm10.d f- *(arg2 + 0xc)
zmm4 = zmm4 f- arg2[1].d
int64_t zmm0
float zmm1[0x4]

if (r10 s>= 4)
    void* rdx_1 = *(arg1 + 0x1010) + 0x10
    int64_t i_2 = ((r10 - 4) u>> 2) + 1
    r11 = i_2 << 2
    int64_t i
    
    do
        int128_t* result_1 = *(rdx_1 - 0x10)
        zmm1 = *result_1
        zmm0 = result_1[1].q
        int96_t var_a8_1 = zmm1[0].12
        
        if (not(zmm9.d f> _mm_shuffle_ps(zmm1, zmm1, 0xff)[0]) && not(var_a8_1.d.d f> zmm6.d)
                && not(zmm4 f> zmm0.d) && not(var_a8_1:4.d.d f> zmm11[0]) && not(zmm5 f> zmm0:4.d)
                && not(var_a8_1:8.d.d f> zmm12[0]))
            zmm11[0] = zmm11[0] f* *(result_1 + 0x24)
            zmm0.d = zmm10.q.d f* result_1[2].d
            zmm12[0] = zmm12[0] f* *(result_1 + 0x28)
            zmm11[0] = zmm11[0] f+ zmm0.d
            zmm11[0] = zmm11[0] f+ zmm12[0]
            zmm11[0] = zmm11[0] f- *(result_1 + 0x2c)
            uint32_t temp0_2[0x4] = _mm_and_ps(zmm11, 0x7fffffff)
            
            if (not(temp0_2[0] f>= zmm3))
                zmm3 = temp0_2[0]
                result = result_1
        
        float (* result_2)[0x4] = *(rdx_1 - 8)
        zmm1 = *result_2
        zmm0 = result_2[1][0].q
        int96_t var_a8_2 = zmm1[0].12
        
        if (not(zmm9.d f> _mm_shuffle_ps(zmm1, zmm1, 0xff)[0]) && not(var_a8_2.d.d f> zmm6.d)
                && not(zmm4 f> zmm0.d) && not(var_a8_2:4.d.d f> zmm11[0]) && not(zmm5 f> zmm0:4.d)
                && not(var_a8_2:8.d.d f> zmm12[0]))
            zmm11[0] = zmm11[0] f* (*result_2)[9]
            zmm0.d = zmm10.q.d f* result_2[2][0]
            zmm12[0] = zmm12[0] * (*result_2)[0xa]
            zmm11[0] = zmm11[0] f+ zmm0.d
            zmm11[0] = zmm11[0] f+ zmm12[0]
            zmm11[0] = zmm11[0] f- (*result_2)[0xb]
            uint32_t temp0_4[0x4] = _mm_and_ps(zmm11, 0x7fffffff)
            
            if (not(temp0_4[0] f>= zmm3))
                zmm3 = temp0_4[0]
                result = result_2
        
        float (* result_3)[0x4] = *rdx_1
        zmm1 = *result_3
        zmm0 = result_3[1][0].q
        int96_t var_a8_3 = zmm1[0].12
        
        if (not(zmm9.d f> _mm_shuffle_ps(zmm1, zmm1, 0xff)[0]) && not(var_a8_3.d.d f> zmm6.d)
                && not(zmm4 f> zmm0.d) && not(var_a8_3:4.d.d f> zmm11[0]) && not(zmm5 f> zmm0:4.d)
                && not(var_a8_3:8.d.d f> zmm12[0]))
            zmm11[0] = zmm11[0] f* (*result_3)[9]
            zmm0.d = zmm10.q.d f* result_3[2][0]
            zmm12[0] = zmm12[0] * (*result_3)[0xa]
            zmm11[0] = zmm11[0] f+ zmm0.d
            zmm11[0] = zmm11[0] f+ zmm12[0]
            zmm11[0] = zmm11[0] f- (*result_3)[0xb]
            uint32_t temp0_6[0x4] = _mm_and_ps(zmm11, 0x7fffffff)
            
            if (not(temp0_6[0] f>= zmm3))
                zmm3 = temp0_6[0]
                result = result_3
        
        int128_t* result_4 = *(rdx_1 + 8)
        zmm1 = *result_4
        zmm0 = result_4[1].q
        int96_t var_a8_4 = zmm1[0].12
        
        if (not(zmm9.d f> _mm_shuffle_ps(zmm1, zmm1, 0xff)[0]) && not(var_a8_4.d.d f> zmm6.d)
                && not(zmm4 f> zmm0.d) && not(var_a8_4:4.d.d f> zmm11[0]) && not(zmm5 f> zmm0:4.d)
                && not(var_a8_4:8.d.d f> zmm12[0]))
            zmm11[0] = zmm11[0] f* *(result_4 + 0x24)
            zmm0.d = zmm10.q.d f* result_4[2].d
            zmm12[0] = zmm12[0] f* *(result_4 + 0x28)
            zmm11[0] = zmm11[0] f+ zmm0.d
            zmm11[0] = zmm11[0] f+ zmm12[0]
            zmm11[0] = zmm11[0] f- *(result_4 + 0x2c)
            uint32_t temp0_8[0x4] = _mm_and_ps(zmm11, 0x7fffffff)
            
            if (not(temp0_8[0] f>= zmm3))
                zmm3 = temp0_8[0]
                result = result_4
        
        rdx_1 += 0x20
        i = i_2
        i_2 -= 1
    while (i != 1)

if (r11 s< r10)
    int64_t i_3 = r10 - r11
    int128_t** rdx_2 = *(arg1 + 0x1010) + (r11 << 3)
    int64_t i_1
    
    do
        int128_t* result_5 = *rdx_2
        zmm1 = *result_5
        zmm0 = result_5[1].q
        int96_t var_a8_5 = zmm1[0].12
        
        if (not(zmm9.d f> _mm_shuffle_ps(zmm1, zmm1, 0xff)[0]) && not(var_a8_5.d.d f> zmm6.d)
                && not(zmm4 f> zmm0.d) && not(var_a8_5:4.d.d f> zmm11[0]) && not(zmm5 f> zmm0:4.d)
                && not(var_a8_5:8.d.d f> zmm12[0]))
            zmm11[0] = zmm11[0] f* *(result_5 + 0x24)
            zmm0.d = zmm10.q.d f* result_5[2].d
            zmm12[0] = zmm12[0] f* *(result_5 + 0x28)
            zmm11[0] = zmm11[0] f+ zmm0.d
            zmm11[0] = zmm11[0] f+ zmm12[0]
            zmm11[0] = zmm11[0] f- *(result_5 + 0x2c)
            uint32_t temp0_10[0x4] = _mm_and_ps(zmm11, 0x7fffffff)
            
            if (not(temp0_10[0] f>= zmm3))
                zmm3 = temp0_10[0]
                result = result_5
        
        rdx_2 = &rdx_2[1]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result
