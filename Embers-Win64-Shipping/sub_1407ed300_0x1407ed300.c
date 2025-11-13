// 函数: sub_1407ed300
// 地址: 0x1407ed300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
int32_t* r9 = *(arg2 + 0x20)
int32_t r8_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
int32_t rcx = *r9

if (r8_1 s>= rcx)
    int64_t rax_1 = 0
    
    do
        r8_1 -= rcx
        rax_1 += 1
        rcx = r9[rax_1]
        rdx += 1
    while (r8_1 s>= rcx)

void* r8_2 = *(*(arg2 + 0x38) + (sx.q(*(*(*(arg2 + 0x18) + (sx.q(rdx) << 3)) + sx.q(r8_1))) << 3))
int32_t rdx_4 = zx.d(rax[1]) & 0x7fff
*(arg2 + 0x10) = &rax[2]
int32_t var_28 = rdx_4
int32_t result_1
result_1.b = rdx_4 != 0x7fff
void* var_18
void var_20

if (rdx_4 == 0x7fff)
    var_18 = &var_20
else
    var_18 = zx.q(*(arg2 + 0x80) * rdx_4) + *(arg2 + 0x70)
int32_t rdx_5 = *(r8_2 + 0x17c)
int64_t* rbx = *(*(r8_2 + 8) + 0x50)
uint32_t rax_7 = zx.d(*(rbx + 0x5f))

if (rax_7 s>= rdx_5)
    rdx_5 = rax_7

int64_t result = sub_1423647f0(rbx, rdx_5)
int64_t* rcx_7 = *(*rbx + (sx.q(result.d) << 3))

if (rcx_7 != 0)
    rcx_7[1].d += 1

if (*(arg2 + 0x40) s> 0)
    do
        int32_t* r8_3 = var_18
        i += 1
        result = sx.q(result_1)
        var_18 = &r8_3[result]
        *r8_3 = 0xffffffff
    while (i s< *(arg2 + 0x40))

if (rcx_7 != 0)
    int32_t r9_1 = rcx_7[1].d
    rcx_7[1].d -= 1
    
    if (r9_1 == 1)
        return (**rcx_7)(rcx_7, zx.q(r9_1))

return result
