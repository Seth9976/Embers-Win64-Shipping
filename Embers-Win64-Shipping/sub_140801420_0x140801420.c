// 函数: sub_140801420
// 地址: 0x140801420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
int32_t* r11 = *(arg2 + 0x20)
int32_t r8_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
int32_t rcx = *r11

if (r8_1 s>= rcx)
    int64_t rax_1 = 0
    
    do
        r8_1 -= rcx
        rax_1 += 1
        rcx = r11[rax_1]
        rdx += 1
    while (r8_1 s>= rcx)

int32_t rcx_3 = zx.d(rax[1]) & 0x7fff
void* r11_1 = *(*(arg2 + 0x38) + (sx.q(*(*(*(arg2 + 0x18) + (sx.q(rdx) << 3)) + sx.q(r8_1))) << 3))
int32_t rax_5
rax_5.b = rcx_3 != 0x7fff
*(arg2 + 0x10) = &rax[2]
int32_t var_28 = rcx_3
int32_t* rdx_5
void var_20

if (rcx_3 == 0x7fff)
    rdx_5 = &var_20
else
    rdx_5 = zx.q(*(arg2 + 0x80) * rcx_3) + *(arg2 + 0x70)
int32_t* var_18 = rdx_5
int32_t rcx_5 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_58 = rcx_5
int32_t rax_6
rax_6.b = rcx_5 != 0x7fff
int32_t* var_48
void var_50

if (rcx_5 == 0x7fff)
    var_48 = &var_50
else
    var_48 = zx.q(rcx_5 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_8 = zx.d(rax[3])
*(arg2 + 0x10) = &rax[4]
int32_t r8_5 = rcx_8 & 0x7fff
int32_t var_40 = r8_5
float* result
result.b = r8_5 != 0x7fff
int32_t var_3c = result.d
float* result_1

if (r8_5 == 0x7fff)
    void var_38
    result = &var_38
    result_1 = &var_38
else
    result_1 = zx.q(*(arg2 + 0x80) * r8_5) + *(arg2 + 0x70)

float zmm0 = *(r11_1 + 0x110)
int32_t zmm1 = (zx.o(0)).d
int32_t zmm2 = (zx.o(0)).d
float zmm3 = (zx.o(0)).d
float zmm4 = 1f / zmm0

if (not(zmm0 <= 0f))
    zmm1 = (*(r11_1 + 0x40) f- *(r11_1 + 0xc0)) f* zmm4
    zmm2 = (*(r11_1 + 0x44) f- *(r11_1 + 0xc4)) f* zmm4
    zmm3 = (*(r11_1 + 0x48) f- *(r11_1 + 0xc8)) * zmm4

if (*(arg2 + 0x40) s> 0)
    do
        *rdx_5 = zmm1
        i += 1
        *var_48 = zmm2
        *result_1 = zmm3
        rdx_5 = &var_18[sx.q(rax_5)]
        var_18 = rdx_5
        result = result_1
        var_48 = &var_48[sx.q(rax_6)]
        result_1 = &result[sx.q(var_3c)]
    while (i s< *(arg2 + 0x40))

return result
