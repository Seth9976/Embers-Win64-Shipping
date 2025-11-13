// 函数: sub_14076e110
// 地址: 0x14076e110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t* r8 = *(arg2 + 0x20)
int16_t i_3 = *rax & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
uint32_t i = zx.d(i_3)

if (i s>= *r8)
    int64_t rax_1 = 0
    int32_t* rcx = nullptr
    
    do
        i -= *(rcx + r8)
        rax_1 += 1
        rcx = rax_1 << 2
        rdx += 1
    while (i s>= *(rcx + r8))

int64_t r11 = *(arg2 + 0x18)
int32_t* rsi = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r11 + (sx.q(rdx) << 3)))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t r15_1 = (rax_5 u>> 0xf).b
int32_t i_1 = rax_5 & 0x7fff
int64_t rbx_1

if ((not.b(r15_1) & 1) == 0)
    rbx_1 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
else
    int32_t r9 = 0
    
    if (i_1 s>= *r8)
        int64_t rax_7 = 0
        int32_t* rdx_2 = nullptr
        
        do
            i_1 -= *(rdx_2 + r8)
            rax_7 += 1
            rdx_2 = rax_7 << 2
            r9 += 1
        while (i_1 s>= *(rdx_2 + r8))
    
    rbx_1 = sx.q(i_1) + *(r11 + (sx.q(r9) << 3))

uint32_t rdx_3 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]
int32_t rdx_4 = rdx_3 & 0x7fff
int32_t var_38 = rdx_4
int32_t var_30 = 0
int32_t rax_10
rax_10.b = rdx_4 != 0x7fff
void* var_28

if (rdx_4 == 0x7fff)
    var_28 = &var_30
else
    var_28 = zx.q(*(arg2 + 0x80) * rdx_4) + *(arg2 + 0x70)

if (sub_140d3c6e0(rsi) != 0)
    sub_142591550()

int64_t result = *(rsi + 0x58)
int32_t r11_1

if (result == 0)
    r11_1 = 0
else
    int64_t rcx_7 = **(result + 0x58)
    result = sx.q(rsi[0x1a])
    void* r14_1 = *(rcx_7 + (result << 3))
    
    if (rsi[0x86].b == 0)
        r11_1 = 0
    else
        void* rax_13 = sub_140d3c6e0(rsi)
        void* rax_14
        void* rcx_9
        int64_t rdx_5
        
        if (rax_13 != 0)
            rax_14 = sub_142591550()
            rcx_9 = *(rax_13 + 0x10)
            rdx_5 = sx.q(*(rax_14 + 0x38))
        
        if (rax_13 == 0 || rdx_5.d s> *(rcx_9 + 0x38)
                || *(*(rcx_9 + 0x30) + (rdx_5 << 3)) != rax_14 + 0x30 || *(rax_13 + 0x430) == 0)
            result = r14_1 + 0x138
        else
            result = sub_141f66050(rax_13, rsi[0x1a])
        
        if (result == 0)
            r11_1 = 0
        else
            r11_1 = *(r14_1 + 0xec)

int32_t i_2 = 0

if (*(arg2 + 0x40) s> 0)
    do
        int32_t* r8_1 = var_28
        int64_t rcx_12 = rbx_1
        rbx_1 += zx.q(r15_1) << 2
        int32_t rax_16
        rax_16.b = *rcx_12 s>= r11_1
        i_2 += 1
        result = zx.q(rax_16 - 1)
        var_28 = &r8_1[sx.q(rax_10)]
        *r8_1 = result.d
    while (i_2 s< *(arg2 + 0x40))

return result
