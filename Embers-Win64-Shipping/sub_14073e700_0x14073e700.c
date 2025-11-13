// 函数: sub_14073e700
// 地址: 0x14073e700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_1 = 0
int32_t r9 = 0
int32_t* r8 = *(arg2 + 0x20)
int32_t rdx_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rax_1 = *r8

if (rdx_1 s>= rax_1)
    int64_t rcx = 0
    
    do
        rdx_1 -= rax_1
        rcx += 1
        rax_1 = r8[rcx]
        r9 += 1
    while (rdx_1 s>= rax_1)

int64_t r11 = *(arg2 + 0x18)
int32_t* r15 = *(*(arg2 + 0x38) + (sx.q(*(*(r11 + (sx.q(r9) << 3)) + sx.q(rdx_1))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t r14_1 = (rax_5 u>> 0xf).b
int32_t rcx_3 = rax_5 & 0x7fff
int32_t* rsi_1

if ((not.b(r14_1) & 1) == 0)
    rsi_1 = zx.q(*(arg2 + 0x80) * rcx_3) + *(arg2 + 0x70)
else
    int32_t rax_7 = *r8
    int32_t r9_1 = 0
    
    if (rcx_3 s>= rax_7)
        int64_t rdx_3 = 0
        
        do
            rcx_3 -= rax_7
            rdx_3 += 1
            rax_7 = r8[rdx_3]
            r9_1 += 1
        while (rcx_3 s>= rax_7)
    
    rsi_1 = sx.q(rcx_3) + *(r11 + (sx.q(r9_1) << 3))

uint32_t rax_9 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]

if ((not.b((rax_9 u>> 0xf).b) & 1) != 0)
    int32_t rax_11 = *r8
    int32_t rcx_5 = rax_9 & 0x7fff
    
    if (rcx_5 s>= rax_11)
        int64_t rdx_4 = 0
        
        do
            rcx_5 -= rax_11
            rdx_4 += 1
            rax_11 = r8[rdx_4]
        while (rcx_5 s>= rax_11)

uint32_t rax_12 = zx.d(rax[3])
*(arg2 + 0x10) = &rax[4]

if ((not.b((rax_12 u>> 0xf).b) & 1) != 0)
    int32_t rax_14 = *r8
    int32_t rcx_7 = rax_12 & 0x7fff
    
    if (rcx_7 s>= rax_14)
        int64_t rdx_5 = 0
        
        do
            rcx_7 -= rax_14
            rdx_5 += 1
            rax_14 = r8[rdx_5]
        while (rcx_7 s>= rax_14)

uint32_t rax_15 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]

if ((not.b((rax_15 u>> 0xf).b) & 1) != 0)
    int32_t rax_17 = *r8
    int32_t rcx_9 = rax_15 & 0x7fff
    
    if (rcx_9 s>= rax_17)
        int64_t rdx_6 = 0
        
        do
            rcx_9 -= rax_17
            rdx_6 += 1
            rax_17 = r8[rdx_6]
        while (rcx_9 s>= rax_17)

int32_t rdx_8 = zx.d(rax[5]) & 0x7fff
*(arg2 + 0x10) = &rax[6]
int32_t var_88 = rdx_8
int32_t var_80 = 0
int32_t result_1
result_1.b = rdx_8 != 0x7fff
void* var_78

if (rdx_8 == 0x7fff)
    var_78 = &var_80
else
    var_78 = zx.q(*(arg2 + 0x80) * rdx_8) + *(arg2 + 0x70)

int32_t var_1c
int32_t var_1c_1 = var_1c & 0xfffffff8
int32_t var_58 = 0xffffffff
int128_t var_68 = zx.o(0)
int32_t var_54
__builtin_memset(&var_54, 0, 0x34)
int32_t var_20 = 0xffffffff
sub_14077b510(&var_68, r15)
uint64_t result = zx.q(*(arg2 + 0x40))
int128_t var_48

if (var_48.q == 0)
    int32_t i = 0
    
    if (result.d s> 0)
        do
            void* rdx_11 = var_78
            i += 1
            result = sx.q(result_1)
            var_78 = rdx_11 + (result << 2)
            *rdx_11 = 0
        while (i s< *(arg2 + 0x40))
else if (result.d s> 0)
    do
        int32_t r14_2 = *rsi_1
        rsi_1 = &rsi_1[zx.q(r14_1)]
        int64_t* rcx_14 = var_48:8.q
        int32_t rax_20
        
        if (rcx_14 != 0)
            rax_20 = (*(*rcx_14 + 0x58))(rcx_14)
        
        char r8_1
        
        if (rcx_14 == 0 || rax_20 s<= r14_2 + ((r14_2 + 1) << 1))
            r8_1 = 0
        else
            r8_1 = 1
        
        int32_t* rdx_10 = var_78
        int64_t result_2 = sx.q(result_1)
        result = zx.q(sbb.d(result_2.d, result_2.d, r8_1 != 0))
        var_78 = &rdx_10[result_2]
        i_1 += 1
        *rdx_10 = result.d
    while (i_1 s< *(arg2 + 0x40))

return result
