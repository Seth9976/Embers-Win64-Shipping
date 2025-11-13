// 函数: sub_1407d1950
// 地址: 0x1407d1950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_1 = 0
int32_t* r9 = *(arg2 + 0x20)
int32_t r8_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
int32_t rax_1 = *r9

if (r8_1 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8_1 -= rax_1
        rcx += 1
        rax_1 = r9[rcx]
        rdx += 1
    while (r8_1 s>= rax_1)

int64_t r11 = *(arg2 + 0x18)
int32_t r8_2 = 0
int32_t rcx_3 = zx.d(rax[1]) & 0x7fff
int32_t* rsi = *(*(arg2 + 0x38) + (sx.q(*(*(r11 + (sx.q(rdx) << 3)) + sx.q(r8_1))) << 3))
*(arg2 + 0x10) = &rax[2]
int32_t rdx_2 = *r9

if (rcx_3 s>= rdx_2)
    int64_t rax_5 = 0
    
    do
        rcx_3 -= rdx_2
        rax_5 += 1
        rdx_2 = r9[rax_5]
        r8_2 += 1
    while (rcx_3 s>= rdx_2)

int32_t r8_3 = 0
int128_t zmm9 = *(sx.q(rcx_3) + *(r11 + (sx.q(r8_2) << 3)))
uint32_t rcx_5 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]
int32_t rcx_6 = rcx_5 & 0x7fff
int32_t rdx_3 = *r9

if (rcx_6 s>= rdx_3)
    int64_t rax_8 = 0
    
    do
        rcx_6 -= rdx_3
        rax_8 += 1
        rdx_3 = r9[rax_8]
        r8_3 += 1
    while (rcx_6 s>= rdx_3)

int32_t r8_4 = 0
int128_t zmm8 = *(sx.q(rcx_6) + *(r11 + (sx.q(r8_3) << 3)))
uint32_t rcx_8 = zx.d(rax[3])
*(arg2 + 0x10) = &rax[4]
int32_t rcx_9 = rcx_8 & 0x7fff
int32_t rdx_4 = *r9

if (rcx_9 s>= rdx_4)
    int64_t rax_11 = 0
    
    do
        rcx_9 -= rdx_4
        rax_11 += 1
        rdx_4 = r9[rax_11]
        r8_4 += 1
    while (rcx_9 s>= rdx_4)

int32_t rdx_6 = zx.d(rax[4]) & 0x7fff
int128_t zmm7 = *(sx.q(rcx_9) + *(r11 + (sx.q(r8_4) << 3)))
*(arg2 + 0x10) = &rax[5]
int32_t rax_15
rax_15.b = rdx_6 != 0x7fff
int32_t var_68 = rdx_6
void* result_1
void var_60

if (rdx_6 == 0x7fff)
    result_1 = &var_60
else
    result_1 = zx.q(*(arg2 + 0x80) * rdx_6) + *(arg2 + 0x70)
void* result = sub_140d3c6e0(rsi)
void* result_2 = result

if (result == 0)
    int32_t i = 0
    
    if (*(arg2 + 0x40) s> 0)
        result = result_1
        
        do
            *result = 0
            i += 1
            result = result_1 + (sx.q(rax_15) << 2)
            result_1 = result
        while (i s< *(arg2 + 0x40))
else if (*(arg2 + 0x40) s> 0)
    int128_t zmm6
    zmm6.d = 1f f/ *(sx.q(*(result + 0x410)) * 0x2c + *(result + 0x408) - 0x2c)
    
    do
        int32_t var_78 = zmm9.d
        int32_t var_74_1 = zmm8.d
        int32_t var_70_1 = zmm7.d
        float zmm0_1
        float zmm6_1
        zmm0_1, zmm6_1, zmm7, zmm8, zmm9 = sub_141f5d8a0(result_2, &var_78)
        i_1 += 1
        *result_1 = zmm0_1 * zmm6_1
        result = result_1
        result_1 = result + (sx.q(rax_15) << 2)
    while (i_1 s< *(arg2 + 0x40))

return result
