// 函数: sub_1407deec0
// 地址: 0x1407deec0
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
int32_t var_40 = rcx_3
*(arg2 + 0x10) = &rax[2]
int128_t* var_30
void var_38

if (rcx_3 == 0x7fff)
    var_30 = &var_38
else
    var_30 = zx.q(rcx_3 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_7 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_88 = rcx_7
int32_t rax_6
rax_6.b = rcx_7 != 0x7fff
int32_t* var_78
void var_80

if (rcx_7 == 0x7fff)
    var_78 = &var_80
else
    var_78 = zx.q(rcx_7 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_11 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_70 = rcx_11
int32_t rax_7
rax_7.b = rcx_11 != 0x7fff
int32_t* var_60
void var_68

if (rcx_11 == 0x7fff)
    var_60 = &var_68
else
    var_60 = zx.q(rcx_11 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_14 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
int32_t rdx_7 = rcx_14 & 0x7fff
int32_t var_58 = rdx_7
int32_t rax_9
rax_9.b = rdx_7 != 0x7fff
int32_t* result_1
void var_50

if (rdx_7 == 0x7fff)
    result_1 = &var_50
else
    result_1 = zx.q(*(arg2 + 0x80) * rdx_7) + *(arg2 + 0x70)
int32_t* result = sub_140d3c6e0(r8_2)
int32_t rcx_19 = *(arg2 + 0x40)
int32_t* result_2 = result

if (result == 0)
    int32_t i = 0
    
    if (rcx_19 s> 0)
        int32_t* r8_3 = var_78
        
        do
            *r8_3 = 0
            i += 1
            *var_60 = 0x3f800000
            *result_1 = 0
            var_30 += sx.q(rax_5) << 2
            r8_3 = &var_78[sx.q(rax_6)]
            var_78 = r8_3
            result = result_1
            var_60 = &var_60[sx.q(rax_7)]
            result_1 = &result[sx.q(rax_9)]
        while (i s< *(arg2 + 0x40))
else if (rcx_19 s> 0)
    int128_t* rdx_8 = var_30
    int128_t zmm6
    int128_t var_18_1 = zmm6
    
    do
        int128_t zmm0_1
        zmm0_1.d = sub_141f68050(result_2).d f* (*rdx_8).d
        int32_t var_28
        sub_141f61940(result_2, &var_28, zmm0_1, 0)
        i_1 += 1
        *var_78 = var_28
        int32_t var_24
        *var_60 = var_24
        int32_t var_20
        *result_1 = var_20
        rdx_8 = var_30 + (sx.q(rax_5) << 2)
        var_30 = rdx_8
        var_78 = &var_78[sx.q(rax_6)]
        result = result_1
        var_60 = &var_60[sx.q(rax_7)]
        result_1 = &result[sx.q(rax_9)]
    while (i_1 s< *(arg2 + 0x40))

return result
