// 函数: sub_1407d2390
// 地址: 0x1407d2390
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

int32_t rcx_3 = zx.d(rax[1]) & 0x7fff
int32_t* r8_2 =
    *(*(arg2 + 0x38) + (sx.q(*(*(*(arg2 + 0x18) + (sx.q(rdx) << 3)) + sx.q(r8_1))) << 3))
int32_t rax_5
rax_5.b = rcx_3 != 0x7fff
int32_t var_70 = rcx_3
*(arg2 + 0x10) = &rax[2]
int32_t* var_60
void var_68

if (rcx_3 == 0x7fff)
    var_60 = &var_68
else
    var_60 = zx.q(rcx_3 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_7 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_58 = rcx_7
int32_t rax_6
rax_6.b = rcx_7 != 0x7fff
int32_t* var_48
void var_50

if (rcx_7 == 0x7fff)
    var_48 = &var_50
else
    var_48 = zx.q(rcx_7 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_11 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_40 = rcx_11
int32_t rax_7
rax_7.b = rcx_11 != 0x7fff
int32_t* var_30
void var_38

if (rcx_11 == 0x7fff)
    var_30 = &var_38
else
    var_30 = zx.q(rcx_11 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_14 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
int32_t rdx_7 = rcx_14 & 0x7fff
int32_t var_88 = rdx_7
int32_t rax_9
rax_9.b = rdx_7 != 0x7fff
void* result_1
void var_80

if (rdx_7 == 0x7fff)
    result_1 = &var_80
else
    result_1 = zx.q(*(arg2 + 0x80) * rdx_7) + *(arg2 + 0x70)
void* result = sub_140d3c6e0(r8_2)
void* result_2 = result

if (result == 0)
    int32_t i = 0
    
    if (*(arg2 + 0x40) s> 0)
        result = result_1
        
        do
            *result = 0
            i += 1
            var_60 = &var_60[sx.q(rax_5)]
            var_48 = &var_48[sx.q(rax_6)]
            var_30 = &var_30[sx.q(rax_7)]
            result = result_1 + (sx.q(rax_9) << 2)
            result_1 = result
        while (i s< *(arg2 + 0x40))
else if (*(arg2 + 0x40) s> 0)
    int32_t* r8_3 = var_48
    int32_t* r9_1 = var_30
    int128_t zmm6
    zmm6.d = 1f f/ *(sx.q(*(result + 0x410)) * 0x2c + *(result + 0x408) - 0x2c)
    int32_t* rdx_9 = var_60
    
    do
        int32_t zmm1 = *r8_3
        int32_t zmm2 = *r9_1
        float var_28 = *rdx_9
        int32_t var_24_1 = zmm1
        int32_t var_20_1 = zmm2
        float zmm0
        float zmm6_1
        zmm0, zmm6_1 = sub_141f5d8a0(result_2, &var_28)
        i_1 += 1
        *result_1 = zmm0 * zmm6_1
        rdx_9 = &var_60[sx.q(rax_5)]
        var_60 = rdx_9
        r8_3 = &var_48[sx.q(rax_6)]
        var_48 = r8_3
        r9_1 = &var_30[sx.q(rax_7)]
        result = result_1
        var_30 = r9_1
        result_1 = result + (sx.q(rax_9) << 2)
    while (i_1 s< *(arg2 + 0x40))

return result
