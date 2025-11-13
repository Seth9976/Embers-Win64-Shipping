// 函数: sub_1407d1e50
// 地址: 0x1407d1e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_1 = 0
int32_t r9 = 0
int32_t* r8 = *(arg2 + 0x20)
int32_t rdx_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rcx = *r8

if (rdx_1 s>= rcx)
    int64_t rax_1 = 0
    
    do
        rdx_1 -= rcx
        rax_1 += 1
        rcx = r8[rax_1]
        r9 += 1
    while (rdx_1 s>= rcx)

int64_t r11 = *(arg2 + 0x18)
int32_t r9_1 = 0
int32_t rcx_3 = zx.d(rax[1]) & 0x7fff
int32_t* rsi = *(*(arg2 + 0x38) + (sx.q(*(*(r11 + (sx.q(r9) << 3)) + sx.q(rdx_1))) << 3))
*(arg2 + 0x10) = &rax[2]
int32_t rdx_3 = *r8

if (rcx_3 s>= rdx_3)
    int64_t rax_5 = 0
    
    do
        rcx_3 -= rdx_3
        rax_5 += 1
        rdx_3 = r8[rax_5]
        r9_1 += 1
    while (rcx_3 s>= rdx_3)

int128_t zmm8 = *(sx.q(rcx_3) + *(r11 + (sx.q(r9_1) << 3)))
int32_t rcx_6 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_50 = rcx_6
int32_t rax_8
rax_8.b = rcx_6 != 0x7fff
int32_t* var_40
void var_48

if (rcx_6 == 0x7fff)
    var_40 = &var_48
else
    var_40 = zx.q(rcx_6 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_9 = zx.d(rax[3])
*(arg2 + 0x10) = &rax[4]
int32_t rcx_10 = rcx_9 & 0x7fff
int32_t rax_9 = *r8
int32_t r9_2 = 0

if (rcx_10 s>= rax_9)
    int64_t rdx_5 = 0
    
    do
        rcx_10 -= rax_9
        rdx_5 += 1
        rax_9 = r8[rdx_5]
        r9_2 += 1
    while (rcx_10 s>= rax_9)

int32_t rdx_7 = zx.d(rax[4]) & 0x7fff
int128_t zmm7 = *(sx.q(rcx_10) + *(r11 + (sx.q(r9_2) << 3)))
*(arg2 + 0x10) = &rax[5]
int32_t rax_13
rax_13.b = rdx_7 != 0x7fff
int32_t var_68 = rdx_7
void* result_1
void var_60

if (rdx_7 == 0x7fff)
    result_1 = &var_60
else
    result_1 = zx.q(*(arg2 + 0x80) * rdx_7) + *(arg2 + 0x70)
void* result = sub_140d3c6e0(rsi)
void* result_2 = result

if (result == 0)
    int32_t i = 0
    
    if (*(arg2 + 0x40) s> 0)
        result = result_1
        
        do
            *result = 0
            i += 1
            var_40 = &var_40[sx.q(rax_8)]
            result = result_1 + (sx.q(rax_13) << 2)
            result_1 = result
        while (i s< *(arg2 + 0x40))
else if (*(arg2 + 0x40) s> 0)
    int128_t zmm6
    zmm6.d = 1f f/ *(sx.q(*(result + 0x410)) * 0x2c + *(result + 0x408) - 0x2c)
    int32_t* rdx_9 = var_40
    
    do
        float var_74_1 = *rdx_9
        int32_t var_78 = zmm8.d
        int32_t var_70_1 = zmm7.d
        float zmm0
        float zmm6_1
        zmm0, zmm6_1, zmm7, zmm8 = sub_141f5d8a0(result_2, &var_78)
        i_1 += 1
        *result_1 = zmm0 * zmm6_1
        rdx_9 = &var_40[sx.q(rax_8)]
        result = result_1
        var_40 = rdx_9
        result_1 = result + (sx.q(rax_13) << 2)
    while (i_1 s< *(arg2 + 0x40))

return result
