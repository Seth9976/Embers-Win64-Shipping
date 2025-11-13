// 函数: sub_14075a660
// 地址: 0x14075a660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t r10 = 0
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

int64_t r15 = *(arg2 + 0x18)
void* r14 = *(*(arg2 + 0x38) + (sx.q(*(*(r15 + (sx.q(rdx) << 3)) + sx.q(r9_1))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t rsi_1 = (rax_5 u>> 0xf).b
int32_t rcx_3 = rax_5 & 0x7fff
int32_t* r11_2

if ((not.b(rsi_1) & 1) == 0)
    r11_2 = zx.q(*(arg2 + 0x80) * rcx_3) + *(arg2 + 0x70)
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
    
    r11_2 = sx.q(rcx_3) + *(r15 + (sx.q(r9_2) << 3))

void* result = &rax[3]
int32_t r8_2 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = result
int32_t var_38 = r8_2
int32_t rdx_3
rdx_3.b = r8_2 != 0x7fff
int32_t var_34 = rdx_3
int32_t* r9_5
void var_30

if (r8_2 == 0x7fff)
    r9_5 = &var_30
else
    r9_5 = zx.q(*(arg2 + 0x80) * r8_2) + *(arg2 + 0x70)
int32_t* var_28 = r9_5
int32_t rdi_1 = *(r14 + 0x198)

if (*(arg1 + 0xa0) + rdi_1 s<= 0)
    return memset(r9_5, 0xff, sx.q(*(arg2 + 0x40)) << 2)

int32_t rbp_1 = *(r14 + 0x1c0)

if (*(arg2 + 0x40) s> 0)
    while (true)
        int64_t rax_9 = sx.q(*r11_2)
        r11_2 = &r11_2[zx.q(rsi_1)]
        void* rdx_4 = &r9_5[sx.q(rdx_3)]
        void* var_28_1
        
        if (rax_9.d s>= rdi_1)
            var_28_1 = rdx_4
            result = zx.q(rax_9.d - rdi_1 + rbp_1)
        else
            var_28_1 = rdx_4
            result = zx.q(*(*(r14 + 0x1a0) + (rax_9 << 1)))
        
        r10 += 1
        *r9_5 = result.d
        
        if (r10 s>= *(arg2 + 0x40))
            break
        
        r9_5 = var_28_1
        rdx_3 = var_34

return result
