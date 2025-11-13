// 函数: sub_1407d20e0
// 地址: 0x1407d20e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_1 = 0
int32_t r9 = 0
int32_t* r8 = *(arg2 + 0x20)
uint32_t rdx = zx.d(*rax)
*(arg2 + 0x10) = &rax[1]
int32_t rdx_1 = rdx & 0x7fff
int32_t rax_1 = *r8

if (rdx_1 s>= rax_1)
    int64_t rcx = 0
    
    do
        rdx_1 -= rax_1
        rcx += 1
        rax_1 = r8[rcx]
        r9 += 1
    while (rdx_1 s>= rax_1)

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

int128_t zmm7 = *(sx.q(rcx_3) + *(r11 + (sx.q(r9_1) << 3)))
int32_t rcx_6 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_60 = rcx_6
int32_t rax_8
rax_8.b = rcx_6 != 0x7fff
int32_t* var_50
void var_58

if (rcx_6 == 0x7fff)
    var_50 = &var_58
else
    var_50 = zx.q(rcx_6 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_10 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_48 = rcx_10
int32_t rax_9
rax_9.b = rcx_10 != 0x7fff
int32_t* var_38
void var_40

if (rcx_10 == 0x7fff)
    var_38 = &var_40
else
    var_38 = zx.q(rcx_10 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_13 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
int32_t rdx_7 = rcx_13 & 0x7fff
int32_t var_78 = rdx_7
int32_t rax_11
rax_11.b = rdx_7 != 0x7fff
void* result_1
void var_70

if (rdx_7 == 0x7fff)
    result_1 = &var_70
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
            var_50 = &var_50[sx.q(rax_8)]
            var_38 = &var_38[sx.q(rax_9)]
            result = result_1 + (sx.q(rax_11) << 2)
            result_1 = result
        while (i s< *(arg2 + 0x40))
else if (*(arg2 + 0x40) s> 0)
    int32_t* r8_1 = var_38
    int128_t zmm6
    zmm6.d = 1f f/ *(sx.q(*(result + 0x410)) * 0x2c + *(result + 0x408) - 0x2c)
    int32_t* rdx_9 = var_50
    
    do
        float var_84_1 = *rdx_9
        int32_t var_80_1 = *r8_1
        int32_t var_88 = zmm7.d
        float zmm0
        float zmm6_1
        zmm0, zmm6_1, zmm7 = sub_141f5d8a0(result_2, &var_88)
        i_1 += 1
        *result_1 = zmm0 * zmm6_1
        rdx_9 = &var_50[sx.q(rax_8)]
        var_50 = rdx_9
        r8_1 = &var_38[sx.q(rax_9)]
        result = result_1
        var_38 = r8_1
        result_1 = result + (sx.q(rax_11) << 2)
    while (i_1 s< *(arg2 + 0x40))

return result
