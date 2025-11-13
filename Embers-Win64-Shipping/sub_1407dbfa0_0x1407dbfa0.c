// 函数: sub_1407dbfa0
// 地址: 0x1407dbfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
int32_t r9 = 0
*(arg2 + 0x10) = &rax[1]
int32_t r8_1 = zx.d(*rax) & 0x7fff
int32_t* rdx = *(arg2 + 0x20)
int32_t rax_1 = *rdx

if (r8_1 s>= rax_1)
    int64_t rcx_1 = 0
    
    do
        r8_1 -= rax_1
        rcx_1 += 1
        rax_1 = rdx[rcx_1]
        r9 += 1
    while (r8_1 s>= rax_1)

void* rsi = *(*(arg2 + 0x38) + (sx.q(*(*(*(arg2 + 0x18) + (sx.q(r9) << 3)) + sx.q(r8_1))) << 3))
int32_t rdx_4 = zx.d(rax[1]) & 0x7fff
*(arg2 + 0x10) = &rax[2]
int32_t var_38 = rdx_4
int32_t result_1
result_1.b = rdx_4 != 0x7fff
void* var_28
void var_30

if (rdx_4 == 0x7fff)
    var_28 = &var_30
else
    var_28 = zx.q(*(arg2 + 0x80) * rdx_4) + *(arg2 + 0x70)
int32_t rdx_5 = *(rsi + 0x17c)
int64_t* rbx = *(*(rsi + 8) + 0x50)
uint32_t rax_7 = zx.d(*(rbx + 0x5f))

if (rax_7 s>= rdx_5)
    rdx_5 = rax_7

uint64_t result = sub_1423647f0(rbx, rdx_5)
int64_t* rcx_8 = *(*rbx + (sx.q(result.d) << 3))

if (rcx_8 != 0)
    rcx_8[1].d += 1

if (*(arg2 + 0x40) s> 0)
    do
        int32_t rdx_8 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
        *(arg2 + 0x8c) = rdx_8 * 0xbb38435 + 0x3619636b
        void* rax_15 = *(rsi + 0x130)
        int32_t rdx_9 = int.d((((rdx_8 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000) - 1f)
            f* _mm_cvtepi32_ps(zx.o(*(rsi + 0x138))).d)
        
        if ((rax_15.b & 1) != 0)
            rax_15 = (rax_15 s>> 1) + rsi + 0x130
        
        arg1.d = (rdx_8 u>> 9 | 0x3f800000).d f- 1f
        int64_t r8_2 = sx.q(rdx_9)
        
        if (not(arg1.d f< *(rax_15 + (r8_2 << 2))))
            void* rax_17 = *(rsi + 0x140)
            
            if ((rax_17.b & 1) != 0)
                rax_17 = (rax_17 s>> 1) + rsi + 0x140
            
            rdx_9 = *(rax_17 + (r8_2 << 2))
        
        i += 1
        int32_t* r8_3 = var_28
        result = sx.q(result_1)
        var_28 = &r8_3[result]
        *r8_3 = *(*(rsi + 0x118) + (sx.q(rdx_9) << 2))
    while (i s< *(arg2 + 0x40))

if (rcx_8 != 0)
    result = zx.q(rcx_8[1].d)
    rcx_8[1].d -= 1
    
    if (result.d == 1)
        return (**rcx_8)(arg1, 1)

return result
