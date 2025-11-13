// 函数: sub_1407dc190
// 地址: 0x1407dc190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
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

void* rsi = *(*(arg2 + 0x38) + (sx.q(*(*(*(arg2 + 0x18) + (sx.q(rdx) << 3)) + sx.q(r8_1))) << 3))
uint32_t rdx_3 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
int32_t rdx_4 = rdx_3 & 0x7fff
int32_t var_28 = rdx_4
int32_t result_1
result_1.b = rdx_4 != 0x7fff
void* var_18
void var_20

if (rdx_4 == 0x7fff)
    var_18 = &var_20
else
    var_18 = zx.q(*(arg2 + 0x80) * rdx_4) + *(arg2 + 0x70)
int32_t rdx_5 = *(rsi + 0x17c)
int64_t* rbx = *(*(rsi + 8) + 0x50)
uint32_t rax_7 = zx.d(*(rbx + 0x5f))

if (rax_7 s>= rdx_5)
    rdx_5 = rax_7

uint64_t result = sub_1423647f0(rbx, rdx_5)
int64_t* rcx_7 = *(*rbx + (sx.q(result.d) << 3))

if (rcx_7 != 0)
    rcx_7[1].d += 1

int32_t i = 0

if (*(arg2 + 0x40) s> 0)
    do
        int32_t rdx_7 = *(rsi + 0x120)
        int32_t rax_12
        
        if (rdx_7 s<= 0)
            rax_12 = 0
        else
            int32_t rax_8 = *(arg2 + 0x8c) * 0xbb38435
            uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rdx_7))
            *(arg2 + 0x8c) = rax_8 + 0x3619636b
            rax_12 = int.d((((rax_8 + 0x3619636b) u>> 9 | 0x3f800000) - 1f) f* zmm0.d)
        
        int32_t* r8_2 = var_18
        i += 1
        result = sx.q(result_1)
        var_18 = &r8_2[result]
        *r8_2 = *(*(rsi + 0x118) + (sx.q(rax_12) << 2))
    while (i s< *(arg2 + 0x40))

if (rcx_7 != 0)
    result = zx.q(rcx_7[1].d)
    rcx_7[1].d -= 1
    
    if (result.d == 1)
        return (**rcx_7)(rcx_7, 1)

return result
