// 函数: sub_140765790
// 地址: 0x140765790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = 0
int16_t* rax = *(arg2 + 0x10)
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
int32_t* r14 = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r11 + (sx.q(r9) << 3)))) << 3))
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

int32_t rcx_4 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_88 = rcx_4
int32_t rax_9
rax_9.b = rcx_4 != 0x7fff
int32_t* var_78
void var_80

if (rcx_4 == 0x7fff)
    var_78 = &var_80
else
    var_78 = zx.q(rcx_4 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_8 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_70 = rcx_8
int32_t rax_10
rax_10.b = rcx_8 != 0x7fff
int32_t* var_60
void var_68

if (rcx_8 == 0x7fff)
    var_60 = &var_68
else
    var_60 = zx.q(rcx_8 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_12 = zx.d(rax[4]) & 0x7fff
*(arg2 + 0x10) = &rax[5]
int32_t var_58 = rcx_12
int32_t rax_11
rax_11.b = rcx_12 != 0x7fff
int32_t* var_48
void var_50

if (rcx_12 == 0x7fff)
    var_48 = &var_50
else
    var_48 = zx.q(rcx_12 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_15 = zx.d(rax[5])
*(arg2 + 0x10) = &rax[6]
int32_t rdx_6 = rcx_15 & 0x7fff
int32_t var_40 = rdx_6
int32_t result_1
result_1.b = rdx_6 != 0x7fff
int32_t* var_30
void var_38

if (rdx_6 == 0x7fff)
    var_30 = &var_38
else
    var_30 = zx.q(*(arg2 + 0x80) * rdx_6) + *(arg2 + 0x70)

if (sub_140d3c6e0(r14) != 0)
    sub_142591550()

int64_t result = *(r14 + 0x58)
void* r13 = nullptr

if (result != 0)
    int64_t rcx_20 = **(result + 0x58)
    result = sx.q(r14[0x1a])
    r13 = *(rcx_20 + (result << 3))
    
    if (r14[0x86].b != 0)
        result = sub_140d3c6e0(r14)
        int64_t result_2 = result
        
        if (result != 0)
            int64_t rax_15 = sub_142591550()
            void* rcx_22 = *(result_2 + 0x10)
            result = rax_15 + 0x30
            int64_t rdx_7 = sx.q(*(result + 8))
            
            if (rdx_7.d s<= *(rcx_22 + 0x38) && *(*(rcx_22 + 0x30) + (rdx_7 << 3)) == result
                    && *(result_2 + 0x430) != 0)
                result = sub_141f66050(result_2, r14[0x1a])

int32_t r9_2 = *(r13 + 0xec)

if (*(arg2 + 0x40) s> 0)
    do
        int32_t rcx_25 = *rsi_1
        rsi_1 = &rsi_1[zx.q(r12_1)]
        
        if (r9_2 s<= rcx_25)
            rcx_25 = r9_2
        
        i_2 += 1
        char* rdx_10 = zx.q(rcx_25 * *(r13 + 0x128)) + *(r13 + 0x120)
        uint32_t rax_17 = zx.d(rdx_10[1])
        uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rdx_10[2]))
        uint32_t rax_18 = zx.d(*rdx_10)
        zmm0.d = zmm0.d f* 0.00392156886f
        int32_t* rdx_11 = var_78
        uint128_t zmm1
        zmm1.d = _mm_cvtepi32_ps(zx.o(rax_17)).d f* 0.00392156886f
        uint128_t zmm3 = zx.o(rdx_10[3])
        uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(rax_18))
        var_78 = &rdx_11[sx.q(rax_9)]
        *rdx_11 = zmm0.d
        int32_t* rdx_12 = var_60
        zmm2.d = zmm2.d f* 0.00392156886f
        zmm3 = _mm_cvtepi32_ps(zmm3)
        var_60 = &rdx_12[sx.q(rax_10)]
        *rdx_12 = zmm1.d
        int32_t* rdx_13 = var_48
        zmm3.d = zmm3.d f* 0.00392156886f
        var_48 = &rdx_13[sx.q(rax_11)]
        *rdx_13 = zmm2.d
        int32_t* rdx_14 = var_30
        result = sx.q(result_1)
        var_30 = &rdx_14[result]
        *rdx_14 = zmm3.d
    while (i_2 s< *(arg2 + 0x40))

return result
