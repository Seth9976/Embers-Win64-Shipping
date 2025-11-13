// 函数: sub_1406f7410
// 地址: 0x1406f7410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_2 = 0
int32_t r9 = 0
int32_t* r8 = *(arg2 + 0x20)
int16_t i_3 = *rax & 0x7fff
*(arg2 + 0x10) = &rax[1]
uint32_t i = zx.d(i_3)

if (i s>= *r8)
    int64_t rax_1 = 0
    int32_t* rcx = nullptr
    
    do
        i -= *(rcx + r8)
        rax_1 += 1
        rcx = rax_1 << 2
        r9 += 1
    while (i s>= *(rcx + r8))

int64_t r11 = *(arg2 + 0x18)
int32_t* rbp = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r11 + (sx.q(r9) << 3)))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t r12_1 = (rax_5 u>> 0xf).b
int32_t i_1 = rax_5 & 0x7fff
int32_t* rsi_1

if ((not.b(r12_1) & 1) == 0)
    rsi_1 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
else
    int32_t r9_1 = 0
    
    if (i_1 s>= *r8)
        int64_t rax_7 = 0
        int32_t* rdx_1 = nullptr
        
        do
            i_1 -= *(rdx_1 + r8)
            rax_7 += 1
            rdx_1 = rax_7 << 2
            r9_1 += 1
        while (i_1 s>= *(rdx_1 + r8))
    
    rsi_1 = sx.q(i_1) + *(r11 + (sx.q(r9_1) << 3))

int32_t rdx_3 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_38 = rdx_3
int32_t result_1
result_1.b = rdx_3 != 0x7fff
void* var_28
void var_30

if (rdx_3 == 0x7fff)
    var_28 = &var_30
else
    var_28 = zx.q(*(arg2 + 0x80) * rdx_3) + *(arg2 + 0x70)

if (sub_140d3c6e0(rbp) != 0)
    sub_142591550()

int64_t result = *(rbp + 0x58)

if (result == 0)
label_1406f7605:
    
    if (*(arg2 + 0x40) s> 0)
        do
            void* rdx_7 = var_28
            i_2 += 1
            result = sx.q(result_1)
            var_28 = rdx_7 + (result << 2)
            *rdx_7 = 0xffffffff
        while (i_2 s< *(arg2 + 0x40))
else
    int64_t rcx_7 = **(result + 0x58)
    result = sx.q(rbp[0x1a])
    int64_t r15_1 = *(rcx_7 + (result << 3))
    
    if (rbp[0x86].b == 0)
        goto label_1406f7605
    
    void* rax_12 = sub_140d3c6e0(rbp)
    void* rax_13
    void* rcx_9
    int64_t rdx_4
    
    if (rax_12 != 0)
        rax_13 = sub_142591550()
        rcx_9 = *(rax_12 + 0x10)
        rdx_4 = sx.q(*(rax_13 + 0x38))
    
    if (rax_12 == 0 || rdx_4.d s> *(rcx_9 + 0x38)
            || *(*(rcx_9 + 0x30) + (rdx_4 << 3)) != rax_13 + 0x30 || *(rax_12 + 0x430) == 0)
        result = r15_1 + 0x138
    else
        result = sub_141f66050(rax_12, rbp[0x1a])
    
    if (result == 0)
        goto label_1406f7605
    
    if (*(arg2 + 0x40) s> 0)
        do
            int32_t* rdx_6 = var_28
            i_2 += 1
            int32_t r8_1 = *rsi_1
            rsi_1 = &rsi_1[zx.q(r12_1)]
            result = sx.q(result_1)
            var_28 = &rdx_6[result]
            *rdx_6 = r8_1
        while (i_2 s< *(arg2 + 0x40))

return result
