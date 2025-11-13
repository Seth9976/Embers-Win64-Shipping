// 函数: sub_14078d440
// 地址: 0x14078d440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t r8 = 0
int32_t* r11 = *(arg2 + 0x20)
int32_t r9_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
int32_t rcx = *r11

if (r9_1 s>= rcx)
    int64_t rax_1 = 0
    
    do
        r9_1 -= rcx
        rax_1 += 1
        rcx = r11[rax_1]
        rdx += 1
    while (r9_1 s>= rcx)

void* r9_2 = *(*(arg2 + 0x38) + (sx.q(*(*(*(arg2 + 0x18) + (sx.q(rdx) << 3)) + sx.q(r9_1))) << 3))
int32_t rdx_4 = zx.d(rax[1]) & 0x7fff
*(arg2 + 0x10) = &rax[2]
int32_t var_28 = rdx_4
int32_t rcx_2
rcx_2.b = rdx_4 != 0x7fff
int32_t var_24 = rcx_2
int32_t* rdx_6
void var_20

if (rdx_4 == 0x7fff)
    rdx_6 = &var_20
else
    rdx_6 = zx.q(*(arg2 + 0x80) * rdx_4) + *(arg2 + 0x70)
int32_t* var_18 = rdx_6
int32_t zmm0 = *(r9_2 + 0x18)

if (*(arg2 + 0x40) s> 0)
    while (true)
        r8 += 1
        int32_t* var_18_1 = &rdx_6[sx.q(rcx_2)]
        *rdx_6 = zmm0
        
        if (r8 s>= *(arg2 + 0x40))
            break
        
        rdx_6 = var_18_1
        rcx_2 = var_24

void* result
result.b = 1
return result
