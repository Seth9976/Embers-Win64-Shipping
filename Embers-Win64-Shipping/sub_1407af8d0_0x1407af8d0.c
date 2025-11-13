// 函数: sub_1407af8d0
// 地址: 0x1407af8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t r10 = 0
uint32_t r8 = zx.d(*rax)
*(arg2 + 0x10) = &rax[1]
int32_t* r8_1 = *(arg2 + 0x20)
int32_t rax_2 = r8 & 0x7fff
int32_t rdx = *r8_1

if (rax_2 s>= rdx)
    int64_t rcx = 0
    
    do
        rax_2 -= rdx
        rcx += 1
        rdx = r8_1[rcx]
    while (rax_2 s>= rdx)

int32_t rcx_2 = zx.d(rax[1]) & 0x7fff
*(arg2 + 0x10) = &rax[2]
int32_t var_40 = rcx_2
int32_t r8_2
r8_2.b = rcx_2 != 0x7fff
int32_t var_3c = r8_2
int32_t* rdx_3
void var_38

if (rcx_2 == 0x7fff)
    rdx_3 = &var_38
else
    rdx_3 = zx.q(*(arg2 + 0x80) * rcx_2) + *(arg2 + 0x70)
int32_t* var_30 = rdx_3
int32_t rcx_4 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_58 = rcx_4
int32_t rax_3
rax_3.b = rcx_4 != 0x7fff
void* var_48
void var_50

if (rcx_4 == 0x7fff)
    var_48 = &var_50
else
    var_48 = zx.q(rcx_4 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_7 = zx.d(rax[3])
*(arg2 + 0x10) = &rax[4]
int32_t r11_4 = rcx_7 & 0x7fff
int32_t result
result.b = r11_4 != 0x7fff
int32_t result_1 = result
void* var_18

if (r11_4 == 0x7fff)
    void var_20
    result = &var_20
    var_18 = &var_20
else
    var_18 = zx.q(*(arg2 + 0x80) * r11_4) + *(arg2 + 0x70)

if (*(arg2 + 0x40) s> 0)
    while (true)
        r10 += 1
        *rdx_3 = *(arg1 + 0xe4)
        int32_t* rdx_4 = var_48
        var_48 = &rdx_4[sx.q(rax_3)]
        *rdx_4 = *(arg1 + 0xe8)
        int32_t* rdx_5 = var_18
        result = *(arg1 + 0xec)
        var_18 = &rdx_5[sx.q(result_1)]
        *rdx_5 = result
        
        if (r10 s>= *(arg2 + 0x40))
            break
        
        rdx_3 = &rdx_3[sx.q(r8_2)]
        r8_2 = var_3c

return result
