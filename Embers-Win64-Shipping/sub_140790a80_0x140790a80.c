// 函数: sub_140790a80
// 地址: 0x140790a80
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

int64_t i_2 = 0x80
void* var_18 = nullptr
int64_t var_10 = 0
sub_1405a5130(&var_18, 0x80)
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
        void* r8_2 = r9 + 0x28
        int64_t j_1 = 8
        int64_t j
        
        do
            int32_t* rdx_4 = *(r8_2 - 0x18)
            int64_t rax_7 = sx.q(*(r8_2 - 0x24))
            r8_2 += 0x180
            *(r8_2 - 0x198) = &rdx_4[rax_7]
            *rdx_4 = 0
            int32_t* rdx_5 = *(r8_2 - 0x180)
            *(r8_2 - 0x180) = &rdx_5[sx.q(*(r8_2 - 0x18c))]
            *rdx_5 = 0
            int32_t* rdx_6 = *(r8_2 - 0x168)
            *(r8_2 - 0x168) = &rdx_6[sx.q(*(r8_2 - 0x174))]
            *rdx_6 = 0
            int32_t* rdx_7 = *(r8_2 - 0x150)
            *(r8_2 - 0x150) = &rdx_7[sx.q(*(r8_2 - 0x15c))]
            *rdx_7 = 0
            int32_t* rdx_8 = *(r8_2 - 0x138)
            *(r8_2 - 0x138) = &rdx_8[sx.q(*(r8_2 - 0x144))]
            *rdx_8 = 0
            int32_t* rdx_9 = *(r8_2 - 0x120)
            *(r8_2 - 0x120) = &rdx_9[sx.q(*(r8_2 - 0x12c))]
            *rdx_9 = 0
            int32_t* rdx_10 = *(r8_2 - 0x108)
            *(r8_2 - 0x108) = &rdx_10[sx.q(*(r8_2 - 0x114))]
            *rdx_10 = 0
            int32_t* rdx_11 = *(r8_2 - 0xf0)
            *(r8_2 - 0xf0) = &rdx_11[sx.q(*(r8_2 - 0xfc))]
            *rdx_11 = 0
            int32_t* rdx_12 = *(r8_2 - 0xd8)
            *(r8_2 - 0xd8) = &rdx_12[sx.q(*(r8_2 - 0xe4))]
            *rdx_12 = 0
            int32_t* rdx_13 = *(r8_2 - 0xc0)
            *(r8_2 - 0xc0) = &rdx_13[sx.q(*(r8_2 - 0xcc))]
            *rdx_13 = 0
            int32_t* rdx_14 = *(r8_2 - 0xa8)
            *(r8_2 - 0xa8) = &rdx_14[sx.q(*(r8_2 - 0xb4))]
            *rdx_14 = 0
            int32_t* rdx_15 = *(r8_2 - 0x90)
            *(r8_2 - 0x90) = &rdx_15[sx.q(*(r8_2 - 0x9c))]
            *rdx_15 = 0
            int32_t* rdx_16 = *(r8_2 - 0x78)
            *(r8_2 - 0x78) = &rdx_16[sx.q(*(r8_2 - 0x84))]
            *rdx_16 = 0
            int32_t* rdx_17 = *(r8_2 - 0x60)
            *(r8_2 - 0x60) = &rdx_17[sx.q(*(r8_2 - 0x6c))]
            *rdx_17 = 0
            int32_t* rdx_18 = *(r8_2 - 0x48)
            *(r8_2 - 0x48) = &rdx_18[sx.q(*(r8_2 - 0x54))]
            *rdx_18 = 0
            int32_t* rdx_19 = *(r8_2 - 0x30)
            result = sx.q(*(r8_2 - 0x3c))
            *(r8_2 - 0x30) = &rdx_19[result]
            *rdx_19 = 0
            j = j_1
            j_1 -= 1
        while (j != 1)
        i_1 += 1
    while (i_1 s< *(arg2 + 0x40))

if (r9 == 0)
    return result

return sub_140a74f90(r9)
