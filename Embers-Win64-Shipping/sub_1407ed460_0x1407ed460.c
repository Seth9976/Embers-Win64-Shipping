// 函数: sub_1407ed460
// 地址: 0x1407ed460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
int32_t* r11 = *(arg2 + 0x20)
int32_t r8 = 0
uint32_t r9 = zx.d(*rax)
*(arg2 + 0x10) = &rax[1]
int32_t r9_1 = r9 & 0x7fff
int32_t rdx = *r11

if (r9_1 s>= rdx)
    int64_t rax_1 = 0
    
    do
        r9_1 -= rdx
        rax_1 += 1
        rdx = r11[rax_1]
        r8 += 1
    while (r9_1 s>= rdx)

void* r9_2 = *(*(arg2 + 0x38) + (sx.q(*(*(*(arg2 + 0x18) + (sx.q(r8) << 3)) + sx.q(r9_1))) << 3))
int32_t r8_4 = zx.d(rax[1]) & 0x7fff
*(arg2 + 0x10) = &rax[2]
int32_t var_28 = r8_4
int32_t var_20 = 0
int32_t rax_6
rax_6.b = r8_4 != 0x7fff
int32_t* rdx_4

if (r8_4 == 0x7fff)
    rdx_4 = &var_20
else
    rdx_4 = zx.q(*(arg2 + 0x80) * r8_4) + *(arg2 + 0x70)

int32_t* var_18 = rdx_4
int64_t rax_7 = *(r9_2 + 8)
int32_t rax_8 = (neg.q(rax_7)).d
int32_t result = sbb.d(rax_8, rax_8, rax_7 != 0)

if (*(arg2 + 0x40) s> 0)
    do
        *rdx_4 = result
        i += 1
        rdx_4 = &var_18[sx.q(rax_6)]
        var_18 = rdx_4
    while (i s< *(arg2 + 0x40))

return result
