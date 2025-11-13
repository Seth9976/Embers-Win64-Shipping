// 函数: sub_140762560
// 地址: 0x140762560
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
int64_t result_2 = 0
int64_t* rcx_12

if (result == 0)
    rcx_12 = nullptr
else
    int64_t rcx_7 = **(result + 0x58)
    result = sx.q(rsi[0x1a])
    void* r14_1 = *(rcx_7 + (result << 3))
    
    if (rsi[0x86].b != 0)
        result = sub_140d3c6e0(rsi)
        int64_t result_3 = result
        
        if (result == 0)
            result_2 = r14_1 + 0x138
        else
            int64_t rax_8 = sub_142591550()
            void* rcx_9 = *(result_3 + 0x10)
            result = rax_8 + 0x30
            int64_t rdx_5 = sx.q(*(result + 8))
            
            if (rdx_5.d s> *(rcx_9 + 0x38) || *(*(rcx_9 + 0x30) + (rdx_5 << 3)) != result
                    || *(result_3 + 0x430) == 0)
                result_2 = r14_1 + 0x138
            else
                result = sub_141f66050(result_3, rsi[0x1a])
                result_2 = result
    
    if (r14_1 == 0)
        rcx_12 = nullptr
    else
        rcx_12 = *(r14_1 + 0x18)

int32_t r8_2

if (result_2 == 0)
    r8_2 = 0
else
    int32_t temp0_1
    int32_t result_4
    temp0_1:result_4 = muls.dp.d(0x55555556, (*(*rcx_12 + 0x58))(rcx_12, result_2))
    result = zx.q(result_4)
    r8_2 = (temp0_1 u>> 0x1f) + temp0_1

if (*(arg2 + 0x40) s> 0)
    do
        int32_t* rdx_8 = var_18
        i_1 += 1
        result = sx.q(result_1)
        var_18 = &rdx_8[result]
        *rdx_8 = r8_2
    while (i_1 s< *(arg2 + 0x40))

return result
