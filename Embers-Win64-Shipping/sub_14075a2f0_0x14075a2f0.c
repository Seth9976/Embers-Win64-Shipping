// 函数: sub_14075a2f0
// 地址: 0x14075a2f0
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

int64_t rdi = *(arg2 + 0x18)
void* r14 = *(*(arg2 + 0x38) + (sx.q(*(*(rdi + (sx.q(rdx) << 3)) + sx.q(r8_1))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t rbp_1 = (rax_5 u>> 0xf).b
int32_t rcx_3 = rax_5 & 0x7fff
int32_t* r10_2

if ((not.b(rbp_1) & 1) == 0)
    r10_2 = zx.q(*(arg2 + 0x80) * rcx_3) + *(arg2 + 0x70)
else
    int32_t rax_7 = *r9
    int32_t r8_2 = 0
    
    if (rcx_3 s>= rax_7)
        int64_t rdx_2 = 0
        
        do
            rcx_3 -= rax_7
            rdx_2 += 1
            rax_7 = r9[rdx_2]
            r8_2 += 1
        while (rcx_3 s>= rax_7)
    
    r10_2 = sx.q(rcx_3) + *(rdi + (sx.q(r8_2) << 3))

uint32_t rdx_3 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]
int32_t rdx_4 = rdx_3 & 0x7fff
int32_t var_28 = rdx_4
int32_t rsi
rsi.b = rdx_4 != 0x7fff
int32_t var_24 = rsi
uint32_t* r9_3
void var_20

if (rdx_4 == 0x7fff)
    r9_3 = &var_20
else
    r9_3 = zx.q(*(arg2 + 0x80) * rdx_4) + *(arg2 + 0x70)
int64_t result = sx.q(*(arg2 + 0x40))
uint32_t* var_18 = r9_3
int32_t rbx_1 = *(r14 + 0x198)

if (rbx_1 - 1 s< 0)
    return memset(r9_3, 0xff, result << 2)

int32_t rdi_1 = 0

if (result.d s> 0)
    while (true)
        int32_t result_2 = *r10_2
        r10_2 = &r10_2[zx.q(rbp_1)]
        int32_t result_1
        
        if (result_2 s>= 0)
            result_1 = rbx_1 - 1
            
            if (result_2 s< rbx_1 - 1)
                result_1 = result_2
        else
            result_1 = 0
        
        rdi_1 += 1
        result = sx.q(result_1)
        *r9_3 = zx.d(*(*(r14 + 0x1a0) + (result << 1)))
        
        if (rdi_1 s>= *(arg2 + 0x40))
            break
        
        r9_3 = &r9_3[sx.q(rsi)]
        rsi = var_24

return result
