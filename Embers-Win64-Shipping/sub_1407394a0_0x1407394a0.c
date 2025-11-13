// 函数: sub_1407394a0
// 地址: 0x1407394a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_2 = 0
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

int32_t* rsi = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(*(arg2 + 0x18) + (sx.q(rdx) << 3)))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
int32_t i_1 = rax_5 & 0x7fff

if ((not.b((rax_5 u>> 0xf).b) & 1) != 0 && i_1 s>= *r8)
    int64_t rcx_4 = 0
    int32_t* rdx_3 = nullptr
    
    do
        i_1 -= *(rdx_3 + r8)
        rcx_4 += 1
        rdx_3 = rcx_4 << 2
    while (i_1 s>= *(rdx_3 + r8))

int32_t rcx_6 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_68 = rcx_6
int32_t rax_6
rax_6.b = rcx_6 != 0x7fff
void* var_58
void var_60

if (rcx_6 == 0x7fff)
    var_58 = &var_60
else
    var_58 = zx.q(rcx_6 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_10 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_50 = rcx_10
int32_t rax_7
rax_7.b = rcx_10 != 0x7fff
void* var_40
void var_48

if (rcx_10 == 0x7fff)
    var_40 = &var_48
else
    var_40 = zx.q(rcx_10 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_13 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
int32_t rdx_7 = rcx_13 & 0x7fff
int32_t var_38 = rdx_7
int32_t result_1
result_1.b = rdx_7 != 0x7fff
void* var_28
void var_30

if (rdx_7 == 0x7fff)
    var_28 = &var_30
else
    var_28 = zx.q(*(arg2 + 0x80) * rdx_7) + *(arg2 + 0x70)

if (sub_140d3c6e0(rsi) != 0)
    sub_142591550()

int64_t result = *(rsi + 0x58)
int64_t result_2 = 0
int64_t* rcx_23

if (result == 0)
    rcx_23 = nullptr
else
    int64_t rcx_18 = **(result + 0x58)
    result = sx.q(rsi[0x1a])
    void* r15_1 = *(rcx_18 + (result << 3))
    
    if (rsi[0x86].b != 0)
        result = sub_140d3c6e0(rsi)
        int64_t result_3 = result
        
        if (result == 0)
            result_2 = r15_1 + 0x138
        else
            int64_t rax_11 = sub_142591550()
            void* rcx_20 = *(result_3 + 0x10)
            result = rax_11 + 0x30
            int64_t rdx_8 = sx.q(*(result + 8))
            
            if (rdx_8.d s> *(rcx_20 + 0x38) || *(*(rcx_20 + 0x30) + (rdx_8 << 3)) != result
                    || *(result_3 + 0x430) == 0)
                result_2 = r15_1 + 0x138
            else
                result = sub_141f66050(result_3, rsi[0x1a])
                result_2 = result
    
    if (r15_1 == 0)
        rcx_23 = nullptr
    else
        rcx_23 = *(r15_1 + 0x18)

if (result_2 != 0)
    result = (*(*rcx_23 + 0x58))(rcx_23, result_2)

if (*(arg2 + 0x40) s> 0)
    do
        int32_t* rdx_10 = var_58
        i_2 += 1
        var_58 = &rdx_10[sx.q(rax_6)]
        *rdx_10 = 0xffffffff
        int32_t* rdx_11 = var_40
        var_40 = &rdx_11[sx.q(rax_7)]
        *rdx_11 = 0xffffffff
        int32_t* rdx_12 = var_28
        result = sx.q(result_1)
        var_28 = &rdx_12[result]
        *rdx_12 = 0xffffffff
    while (i_2 s< *(arg2 + 0x40))

return result
