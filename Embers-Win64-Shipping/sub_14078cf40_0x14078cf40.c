// 函数: sub_14078cf40
// 地址: 0x14078cf40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t r10 = 0
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
int32_t r8_2
r8_2.b = rcx_3 != 0x7fff
void* rbx = *(*(arg2 + 0x38) + (sx.q(*(*(*(arg2 + 0x18) + (sx.q(rdx) << 3)) + sx.q(r8_1))) << 3))
int32_t var_1c = r8_2
*(arg2 + 0x10) = &rax[2]
int32_t var_20 = rcx_3
int32_t* rdx_5
void var_18

if (rcx_3 == 0x7fff)
    rdx_5 = &var_18
else
    rdx_5 = zx.q(*(arg2 + 0x80) * rcx_3) + *(arg2 + 0x70)
int32_t* var_10 = rdx_5
uint32_t rcx_4 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]
int32_t r11_3 = rcx_4 & 0x7fff
int32_t var_38 = r11_3
int32_t rax_6
rax_6.b = r11_3 != 0x7fff
void* var_28
void var_30

if (r11_3 == 0x7fff)
    var_28 = &var_30
else
    var_28 = zx.q(*(arg2 + 0x80) * r11_3) + *(arg2 + 0x70)

if (*(arg2 + 0x40) s> 0)
    while (true)
        r10 += 1
        *rdx_5 = *(rbx + 0x18)
        int32_t* rdx_6 = var_28
        var_28 = &rdx_6[sx.q(rax_6)]
        *rdx_6 = *(rbx + 0x1c)
        
        if (r10 s>= *(arg2 + 0x40))
            break
        
        rdx_5 = &rdx_5[sx.q(r8_2)]
        r8_2 = var_1c

int32_t result
result.b = 1
return result
