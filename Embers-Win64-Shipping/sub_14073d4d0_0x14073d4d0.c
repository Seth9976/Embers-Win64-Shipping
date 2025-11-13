// 函数: sub_14073d4d0
// 地址: 0x14073d4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_3 = 0
int32_t* r8 = *(arg2 + 0x20)
int16_t i_4 = *rax & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
uint32_t i = zx.d(i_4)

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
int32_t* r13 = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r11 + (sx.q(rdx) << 3)))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint32_t r14_1 = rax_5 u>> 0xf
int32_t i_1 = rax_5 & 0x7fff
int32_t* rbp_1

if ((not.b(r14_1.b) & 1) == 0)
    rbp_1 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
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
    
    rbp_1 = sx.q(i_1) + *(r11 + (sx.q(r9) << 3))

uint32_t rax_9 = zx.d(rax[2])
uint8_t r12_1 = (rax_9 u>> 0xf).b
*(arg2 + 0x10) = &rax[3]
int32_t i_2 = rax_9 & 0x7fff
int32_t* rsi_1

if ((not.b(r12_1) & 1) == 0)
    rsi_1 = zx.q(*(arg2 + 0x80) * i_2) + *(arg2 + 0x70)
else
    int32_t r9_1 = 0
    
    if (i_2 s>= *r8)
        int64_t rax_11 = 0
        int32_t* rdx_3 = nullptr
        
        do
            i_2 -= *(rdx_3 + r8)
            rax_11 += 1
            rdx_3 = rax_11 << 2
            r9_1 += 1
        while (i_2 s>= *(rdx_3 + r8))
    
    rsi_1 = sx.q(i_2) + *(r11 + (sx.q(r9_1) << 3))

int32_t rcx_5 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_58 = rcx_5
int32_t rax_13
rax_13.b = rcx_5 != 0x7fff
void* var_48
void var_50

if (rcx_5 == 0x7fff)
    var_48 = &var_50
else
    var_48 = zx.q(rcx_5 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_8 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
int32_t rdx_6 = rcx_8 & 0x7fff
int32_t var_40 = rdx_6
int32_t result_1
result_1.b = rdx_6 != 0x7fff
void* var_30
void var_38

if (rdx_6 == 0x7fff)
    var_30 = &var_38
else
    var_30 = zx.q(*(arg2 + 0x80) * rdx_6) + *(arg2 + 0x70)

if (sub_140d3c6e0(r13) != 0)
    sub_142591550()

int64_t result = *(r13 + 0x58)
void* r15 = nullptr

if (result != 0)
    int64_t rcx_13 = **(result + 0x58)
    result = sx.q(r13[0x1a])
    r15 = *(rcx_13 + (result << 3))
    
    if (r13[0x86].b != 0)
        result = sub_140d3c6e0(r13)
        int64_t result_2 = result
        
        if (result != 0)
            int64_t rax_17 = sub_142591550()
            void* rcx_15 = *(result_2 + 0x10)
            result = rax_17 + 0x30
            int64_t rdx_7 = sx.q(*(result + 8))
            
            if (rdx_7.d s<= *(rcx_15 + 0x38) && *(*(rcx_15 + 0x30) + (rdx_7 << 3)) == result
                    && *(result_2 + 0x430) != 0)
                result = sub_141f66050(result_2, r13[0x1a])

int32_t r8_2 = *(r15 + 0xec) - 1

if (*(arg2 + 0x40) s> 0)
    do
        int32_t rcx_18 = *rbp_1
        int32_t* rdx_9 = rsi_1
        rbp_1 = &rbp_1[zx.q(r14_1.b)]
        rsi_1 = &rsi_1[zx.q(r12_1)]
        int32_t rax_18 = r8_2
        
        if (rcx_18 s<= r8_2)
            rax_18 = rcx_18
        
        i_3 += 1
        int32_t* rdx_10 = var_48
        int64_t rcx_21 = zx.q(rax_18) * zx.q(*(r15 + 0xa8)) + zx.q(*rdx_9)
        int64_t rax_21 = *(r15 + 0x98)
        int32_t zmm1 = *(rax_21 + (rcx_21 << 3) + 4)
        var_48 = &rdx_10[sx.q(rax_13)]
        *rdx_10 = *(rax_21 + (rcx_21 << 3))
        int32_t* rdx_11 = var_30
        result = sx.q(result_1)
        var_30 = &rdx_11[result]
        *rdx_11 = zmm1
    while (i_3 s< *(arg2 + 0x40))

return result
