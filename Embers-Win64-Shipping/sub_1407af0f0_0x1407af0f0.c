// 函数: sub_1407af0f0
// 地址: 0x1407af0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t* r8 = *(arg2 + 0x20)
*(arg2 + 0x10) = &rax[1]
int32_t rcx_1 = *r8
int32_t rax_3 = zx.d(*rax) & 0x7fff

if (rax_3 s>= rcx_1)
    int64_t rdx = 0
    
    do
        rax_3 -= rcx_1
        rdx += 1
        rcx_1 = r8[rdx]
    while (rax_3 s>= rcx_1)

int64_t i_2 = 0x18
void* var_18 = nullptr
int64_t var_10 = 0
sub_1405a5130(&var_18, 0x18)
void* r9 = var_18
int64_t result
int64_t i

do
    int64_t rdi_1 = sx.q(var_10.d)
    int32_t rax_4 = (rdi_1 + 1).d
    var_10.d = rax_4
    
    if (rax_4 s> var_10:4.d)
        sub_1405a4df0(&var_18)
        r9 = var_18
    
    int16_t* rax_5 = *(arg2 + 0x10)
    int64_t r8_1 = rdi_1 * 3
    uint32_t rdx_2 = zx.d(*rax_5)
    *(arg2 + 0x10) = &rax_5[1]
    int32_t rdx_3 = rdx_2 & 0x7fff
    *(r9 + (r8_1 << 3)) = rdx_3
    result.b = rdx_3 != 0x7fff
    *(r9 + (r8_1 << 3) + 4) = result.d
    void* rcx_6
    
    if (rdx_3 == 0x7fff)
        rcx_6 = r9 + ((r8_1 + 1) << 3)
    else
        rcx_6 = zx.q(*(arg2 + 0x80) * rdx_3) + *(arg2 + 0x70)
    
    *(r9 + (r8_1 << 3) + 0x10) = rcx_6
    i = i_2
    i_2 -= 1
while (i != 1)
int32_t i_1 = 0

if (*(arg2 + 0x40) s> 0)
    do
        int32_t* rdx_4 = *(r9 + 0x10)
        *(r9 + 0x10) = &rdx_4[sx.q(*(r9 + 4))]
        *rdx_4 = 0
        int32_t* rdx_5 = *(r9 + 0x28)
        *(r9 + 0x28) = &rdx_5[sx.q(*(r9 + 0x1c))]
        *rdx_5 = 0
        int32_t* rdx_6 = *(r9 + 0x40)
        *(r9 + 0x40) = &rdx_6[sx.q(*(r9 + 0x34))]
        *rdx_6 = 0
        int32_t* rdx_7 = *(r9 + 0x58)
        *(r9 + 0x58) = &rdx_7[sx.q(*(r9 + 0x4c))]
        *rdx_7 = 0
        int32_t* rdx_8 = *(r9 + 0x70)
        *(r9 + 0x70) = &rdx_8[sx.q(*(r9 + 0x64))]
        *rdx_8 = 0
        int32_t* rdx_9 = *(r9 + 0x88)
        *(r9 + 0x88) = &rdx_9[sx.q(*(r9 + 0x7c))]
        *rdx_9 = 0
        int32_t* rdx_10 = *(r9 + 0xa0)
        *(r9 + 0xa0) = &rdx_10[sx.q(*(r9 + 0x94))]
        *rdx_10 = 0
        int32_t* rdx_11 = *(r9 + 0xb8)
        *(r9 + 0xb8) = &rdx_11[sx.q(*(r9 + 0xac))]
        *rdx_11 = 0
        int32_t* rdx_12 = *(r9 + 0xd0)
        *(r9 + 0xd0) = &rdx_12[sx.q(*(r9 + 0xc4))]
        *rdx_12 = 0
        int32_t* rdx_13 = *(r9 + 0xe8)
        *(r9 + 0xe8) = &rdx_13[sx.q(*(r9 + 0xdc))]
        *rdx_13 = 0
        int32_t* rdx_14 = *(r9 + 0x100)
        *(r9 + 0x100) = &rdx_14[sx.q(*(r9 + 0xf4))]
        *rdx_14 = 0
        int32_t* rdx_15 = *(r9 + 0x118)
        *(r9 + 0x118) = &rdx_15[sx.q(*(r9 + 0x10c))]
        *rdx_15 = 0
        int32_t* rdx_16 = *(r9 + 0x130)
        *(r9 + 0x130) = &rdx_16[sx.q(*(r9 + 0x124))]
        *rdx_16 = 0
        int32_t* rdx_17 = *(r9 + 0x148)
        *(r9 + 0x148) = &rdx_17[sx.q(*(r9 + 0x13c))]
        *rdx_17 = 0
        int32_t* rdx_18 = *(r9 + 0x160)
        *(r9 + 0x160) = &rdx_18[sx.q(*(r9 + 0x154))]
        *rdx_18 = 0
        int32_t* rdx_19 = *(r9 + 0x178)
        *(r9 + 0x178) = &rdx_19[sx.q(*(r9 + 0x16c))]
        *rdx_19 = 0
        int32_t* rdx_20 = *(r9 + 0x190)
        i_1 += 1
        *(r9 + 0x190) = &rdx_20[sx.q(*(r9 + 0x184))]
        *rdx_20 = 0
        int32_t* rdx_21 = *(r9 + 0x1a8)
        *(r9 + 0x1a8) = &rdx_21[sx.q(*(r9 + 0x19c))]
        *rdx_21 = 0
        int32_t* rdx_22 = *(r9 + 0x1c0)
        *(r9 + 0x1c0) = &rdx_22[sx.q(*(r9 + 0x1b4))]
        *rdx_22 = 0
        int32_t* rdx_23 = *(r9 + 0x1d8)
        *(r9 + 0x1d8) = &rdx_23[sx.q(*(r9 + 0x1cc))]
        *rdx_23 = 0
        int32_t* rdx_24 = *(r9 + 0x1f0)
        *(r9 + 0x1f0) = &rdx_24[sx.q(*(r9 + 0x1e4))]
        *rdx_24 = 0
        int32_t* rdx_25 = *(r9 + 0x208)
        *(r9 + 0x208) = &rdx_25[sx.q(*(r9 + 0x1fc))]
        *rdx_25 = 0
        int32_t* rdx_26 = *(r9 + 0x220)
        *(r9 + 0x220) = &rdx_26[sx.q(*(r9 + 0x214))]
        *rdx_26 = 0
        int32_t* r8_2 = *(r9 + 0x238)
        result = sx.q(*(r9 + 0x22c))
        *(r9 + 0x238) = &r8_2[result]
        *r8_2 = 0
    while (i_1 s< *(arg2 + 0x40))

if (r9 == 0)
    return result

return sub_140a74f90(r9)
