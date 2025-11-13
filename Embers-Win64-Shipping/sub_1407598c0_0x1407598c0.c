// 函数: sub_1407598c0
// 地址: 0x1407598c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_1 = 0
int32_t r9 = 0
int16_t rcx = *rax
*(arg2 + 0x10) = &rax[1]
int32_t* rdx = *(arg2 + 0x20)
uint32_t i = zx.d(rcx) & 0x7fff

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
void* result = sub_140d3c6e0(rsi)

if (result != 0)
    result = sub_142591550()

void* r14 = *(rsi + 0x58)

if (r14 != 0 && rsi[0x86].b != 0)
    result = sub_140d3c6e0(rsi)
    void* result_2 = result
    
    if (result != 0)
        void* rax_6 = sub_142591550()
        void* rcx_8 = *(result_2 + 0x10)
        result = rax_6 + 0x30
        int64_t rdx_5 = sx.q(*(result + 8))
        
        if (rdx_5.d s<= *(rcx_8 + 0x38) && *(*(rcx_8 + 0x30) + (rdx_5 << 3)) == result
                && *(result_2 + 0x430) != 0)
            result = sub_141f66050(result_2, rsi[0x1a])

int32_t r8 = 0

if (r14 != 0)
    r8 = *(r14 + 0x1b0)

if (*(arg2 + 0x40) s> 0)
    do
        int32_t* rdx_7 = var_18
        i_1 += 1
        result = sx.q(result_1)
        var_18 = &rdx_7[result]
        *rdx_7 = r8
    while (i_1 s< *(arg2 + 0x40))

return result
