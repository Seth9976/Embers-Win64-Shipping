// 函数: sub_14075a4b0
// 地址: 0x14075a4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t* r8 = *(arg2 + 0x20)
int32_t r9_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
int32_t rax_1 = *r8

if (r9_1 s>= rax_1)
    int64_t rcx = 0
    
    do
        r9_1 -= rax_1
        rcx += 1
        rax_1 = r8[rcx]
        rdx += 1
    while (r9_1 s>= rax_1)

int64_t rbx = *(arg2 + 0x18)
void* rbp = *(*(arg2 + 0x38) + (sx.q(*(*(rbx + (sx.q(rdx) << 3)) + sx.q(r9_1))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t rsi_1 = (rax_5 u>> 0xf).b
int32_t rcx_3 = rax_5 & 0x7fff
int32_t* r8_2

if ((not.b(rsi_1) & 1) == 0)
    r8_2 = zx.q(*(arg2 + 0x80) * rcx_3) + *(arg2 + 0x70)
else
    int32_t rax_7 = *r8
    int32_t r9_2 = 0
    
    if (rcx_3 s>= rax_7)
        int64_t rdx_2 = 0
        
        do
            rcx_3 -= rax_7
            rdx_2 += 1
            rax_7 = r8[rdx_2]
            r9_2 += 1
        while (rcx_3 s>= rax_7)
    
    r8_2 = sx.q(rcx_3) + *(rbx + (sx.q(r9_2) << 3))

uint32_t rdx_3 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]
int32_t rdx_4 = rdx_3 & 0x7fff
int32_t var_28 = rdx_4
int32_t rdi
rdi.b = rdx_4 != 0x7fff
int32_t var_24 = rdi
int32_t* r9_5
void var_20

if (rdx_4 == 0x7fff)
    r9_5 = &var_20
else
    r9_5 = zx.q(*(arg2 + 0x80) * rdx_4) + *(arg2 + 0x70)
int64_t result = sx.q(*(arg2 + 0x40))
int32_t rbx_2 = *(arg1 + 0xa0) - 1
int32_t* var_18 = r9_5
int32_t rbp_1 = *(rbp + 0x1c0)

if (rbx_2 == 0xffffffff)
    return memset(r9_5, 0xff, result << 2)

int32_t r10_2 = 0

if (result.d s> 0)
    while (true)
        int32_t rcx_4 = *r8_2
        r8_2 = &r8_2[zx.q(rsi_1)]
        int32_t rdx_5
        
        if (rcx_4 s>= 0)
            rdx_5 = rbx_2
            
            if (rcx_4 s< rbx_2)
                rdx_5 = rcx_4
        else
            rdx_5 = 0
        
        r10_2 += 1
        result = zx.q(rdx_5 + rbp_1)
        *r9_5 = result.d
        
        if (r10_2 s>= *(arg2 + 0x40))
            break
        
        r9_5 = &r9_5[sx.q(rdi)]
        rdi = var_24

return result
