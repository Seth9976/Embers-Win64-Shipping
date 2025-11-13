// 函数: sub_140765cf0
// 地址: 0x140765cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_1 = 0
int32_t r9 = 0
*(arg2 + 0x10) = &rax[1]
int32_t* rdx = *(arg2 + 0x20)
uint32_t i = zx.d(*rax) & 0x7fff

if (i s>= *rdx)
    int64_t rax_1 = 0
    int32_t* rcx_1 = nullptr
    
    do
        i -= *(rcx_1 + rdx)
        rax_1 += 1
        rcx_1 = rax_1 << 2
        r9 += 1
    while (i s>= *(rcx_1 + rdx))

int32_t* rsi = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(*(arg2 + 0x18) + (sx.q(r9) << 3)))) << 3))
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

if (sub_140d3c6e0(rsi) != 0)
    sub_142591550()

int64_t result = *(rsi + 0x58)
int32_t r8

if (result == 0)
    r8 = 0
else
    int64_t rcx_7 = **(result + 0x58)
    result = sx.q(rsi[0x1a])
    void* r14_1 = *(rcx_7 + (result << 3))
    
    if (rsi[0x86].b == 0)
        r8 = 0
    else
        void* rax_8 = sub_140d3c6e0(rsi)
        void* rax_9
        void* rcx_9
        int64_t rdx_5
        
        if (rax_8 != 0)
            rax_9 = sub_142591550()
            rcx_9 = *(rax_8 + 0x10)
            rdx_5 = sx.q(*(rax_9 + 0x38))
        
        if (rax_8 == 0 || rdx_5.d s> *(rcx_9 + 0x38)
                || *(*(rcx_9 + 0x30) + (rdx_5 << 3)) != rax_9 + 0x30 || *(rax_8 + 0x430) == 0)
            result = r14_1 + 0x138
        else
            result = sub_141f66050(rax_8, rsi[0x1a])
        
        if (result == 0)
            r8 = 0
        else
            r8 = *(r14_1 + 0xec)

if (*(arg2 + 0x40) s> 0)
    do
        int32_t* rdx_7 = var_18
        i_1 += 1
        result = sx.q(result_1)
        var_18 = &rdx_7[result]
        *rdx_7 = r8
    while (i_1 s< *(arg2 + 0x40))

return result
