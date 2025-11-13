// 函数: sub_1407df900
// 地址: 0x1407df900
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

int128_t zmm6 = *(sx.q(rcx_3) + *(r11 + (sx.q(r9_1) << 3)))
int32_t rcx_6 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_68 = rcx_6
int32_t rax_8
rax_8.b = rcx_6 != 0x7fff
int32_t* var_58
void var_60

if (rcx_6 == 0x7fff)
    var_58 = &var_60
else
    var_58 = zx.q(rcx_6 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_10 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_50 = rcx_10
int32_t rax_9
rax_9.b = rcx_10 != 0x7fff
int32_t* var_40
void var_48

if (rcx_10 == 0x7fff)
    var_40 = &var_48
else
    var_40 = zx.q(rcx_10 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_13 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
int32_t rdx_7 = rcx_13 & 0x7fff
int32_t var_38 = rdx_7
int32_t rax_11
rax_11.b = rdx_7 != 0x7fff
int64_t result_1
void var_30

if (rdx_7 == 0x7fff)
    result_1 = &var_30
else
    result_1 = zx.q(*(arg2 + 0x80) * rdx_7) + *(arg2 + 0x70)
void* rax_12 = sub_140d3c6e0(rsi)
uint64_t result = zx.q(*(arg2 + 0x40))

if (rax_12 == 0)
    int32_t i = 0
    
    if (result.d s> 0)
        void* r8_1 = var_58
        
        do
            *r8_1 = 0
            i += 1
            *var_40 = 0
            *result_1 = 0
            r8_1 = &var_58[sx.q(rax_8)]
            var_58 = r8_1
            result = result_1
            var_40 = &var_40[sx.q(rax_9)]
            result_1 = result + (sx.q(rax_11) << 2)
        while (i s< *(arg2 + 0x40))
else if (result.d s> 0)
    do
        int128_t zmm0_1
        zmm0_1.d = sub_141f68050(rax_12).d f* zmm6.d
        int32_t var_78
        zmm6 = sub_141f63570(rax_12, &var_78, zmm0_1, 0)
        i_1 += 1
        *var_58 = var_78
        int32_t var_74
        *var_40 = var_74
        int32_t var_70
        *result_1 = var_70
        var_58 = &var_58[sx.q(rax_8)]
        result = result_1
        var_40 = &var_40[sx.q(rax_9)]
        result_1 = result + (sx.q(rax_11) << 2)
    while (i_1 s< *(arg2 + 0x40))

return result
