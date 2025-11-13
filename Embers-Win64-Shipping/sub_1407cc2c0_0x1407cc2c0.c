// 函数: sub_1407cc2c0
// 地址: 0x1407cc2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_1 = 0
int32_t* r8 = *(arg2 + 0x20)
int32_t r9_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
int32_t rax_1 = *r8

if (r9_1 s>= rax_1)
    int64_t rcx = 0
    
    do
        r9_1 -= rax_1
        rcx += 1
        rax_1 = r8[rcx]
        rdx += 1
    while (r9_1 s>= rax_1)

int64_t r11 = *(arg2 + 0x18)
void* rax_5 = *(*(arg2 + 0x38) + (sx.q(*(*(r11 + (sx.q(rdx) << 3)) + sx.q(r9_1))) << 3))
uint32_t rax_6 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint32_t rax_7 = rax_6 u>> 0xf
int32_t rcx_3 = rax_6 & 0x7fff
uint32_t arg_10 = rax_7
rax_7.b = not.b(rax_7.b)
int64_t* var_128

if ((rax_7.b & 1) == 0)
    var_128 = zx.q(*(arg2 + 0x80) * rcx_3) + *(arg2 + 0x70)
else
    int32_t rax_8 = *r8
    int32_t r9_2 = 0
    
    if (rcx_3 s>= rax_8)
        int64_t rdx_2 = 0
        
        do
            rcx_3 -= rax_8
            rdx_2 += 1
            rax_8 = r8[rdx_2]
            r9_2 += 1
        while (rcx_3 s>= rax_8)
    
    var_128 = sx.q(rcx_3) + *(r11 + (sx.q(r9_2) << 3))

uint32_t rax_13 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]
uint32_t rax_14 = rax_13 u>> 0xf
int32_t rcx_5 = rax_13 & 0x7fff
uint32_t arg_18 = rax_14
rax_14.b = not.b(rax_14.b)
int128_t* var_120

if ((rax_14.b & 1) == 0)
    var_120 = zx.q(*(arg2 + 0x80) * rcx_5) + *(arg2 + 0x70)
else
    int32_t rax_15 = *r8
    int32_t r9_3 = 0
    
    if (rcx_5 s>= rax_15)
        int64_t rdx_5 = 0
        
        do
            rcx_5 -= rax_15
            rdx_5 += 1
            rax_15 = r8[rdx_5]
            r9_3 += 1
        while (rcx_5 s>= rax_15)
    
    var_120 = sx.q(rcx_5) + *(r11 + (sx.q(r9_3) << 3))

uint32_t rax_20 = zx.d(rax[3])
*(arg2 + 0x10) = &rax[4]
uint32_t rax_21 = rax_20 u>> 0xf
int32_t i = rax_20 & 0x7fff
uint32_t arg_20 = rax_21
rax_21.b = not.b(rax_21.b)
int128_t* var_118

if ((rax_21.b & 1) == 0)
    var_118 = zx.q(*(arg2 + 0x80) * i) + *(arg2 + 0x70)
else
    int32_t r9_4 = 0
    
    if (i s>= *r8)
        int64_t rax_22 = 0
        int32_t* rdx_8 = nullptr
        
        do
            i -= *(rdx_8 + r8)
            rax_22 += 1
            rdx_8 = rax_22 << 2
            r9_4 += 1
        while (i s>= *(rdx_8 + r8))
    
    var_118 = sx.q(i) + *(r11 + (sx.q(r9_4) << 3))

uint32_t rax_27 = zx.d(rax[4])
uint32_t rax_28 = rax_27 u>> 0xf
int32_t rcx_8 = rax_27 & 0x7fff
uint32_t var_110 = rax_28
rax_28.b = not.b(rax_28.b)
*(arg2 + 0x10) = &rax[5]
int128_t* r13_1

if ((rax_28.b & 1) == 0)
    r13_1 = zx.q(*(arg2 + 0x80) * rcx_8) + *(arg2 + 0x70)
else
    int32_t rax_29 = *r8
    int32_t r9_5 = 0
    
    if (rcx_8 s>= rax_29)
        int64_t rdx_11 = 0
        
        do
            rcx_8 -= rax_29
            rdx_11 += 1
            rax_29 = r8[rdx_11]
            r9_5 += 1
        while (rcx_8 s>= rax_29)
    
    r13_1 = sx.q(rcx_8) + *(r11 + (sx.q(r9_5) << 3))

uint32_t rax_31 = zx.d(rax[5])
uint32_t rax_32 = rax_31 u>> 0xf
int32_t rcx_10 = rax_31 & 0x7fff
uint32_t var_108 = rax_32
rax_32.b = not.b(rax_32.b)
*(arg2 + 0x10) = &rax[6]
int128_t* r12_1

if ((rax_32.b & 1) == 0)
    r12_1 = zx.q(*(arg2 + 0x80) * rcx_10) + *(arg2 + 0x70)
else
    int32_t rax_33 = *r8
    int32_t r9_6 = 0
    
    if (rcx_10 s>= rax_33)
        int64_t rdx_12 = 0
        
        do
            rcx_10 -= rax_33
            rdx_12 += 1
            rax_33 = r8[rdx_12]
            r9_6 += 1
        while (rcx_10 s>= rax_33)
    
    r12_1 = sx.q(rcx_10) + *(r11 + (sx.q(r9_6) << 3))

uint32_t rax_35 = zx.d(rax[6])
uint32_t rax_36 = rax_35 u>> 0xf
int32_t rcx_12 = rax_35 & 0x7fff
uint32_t var_100 = rax_36
rax_36.b = not.b(rax_36.b)
*(arg2 + 0x10) = &rax[7]
int128_t* r15_1

if ((rax_36.b & 1) == 0)
    r15_1 = zx.q(*(arg2 + 0x80) * rcx_12) + *(arg2 + 0x70)
else
    int32_t rdx_13 = *r8
    int32_t r9_7 = 0
    
    if (rcx_12 s>= rdx_13)
        int64_t rax_37 = 0
        
        do
            rcx_12 -= rdx_13
            rax_37 += 1
            rdx_13 = r8[rax_37]
            r9_7 += 1
        while (rcx_12 s>= rdx_13)
    
    r15_1 = sx.q(rcx_12) + *(r11 + (sx.q(r9_7) << 3))

uint32_t rcx_13 = zx.d(rax[7])
*(arg2 + 0x10) = &rax[8]
uint8_t rbx_1 = (rcx_13 u>> 0xf).b
int32_t rcx_14 = rcx_13 & 0x7fff
int32_t* r14_1

if ((not.b(rbx_1) & 1) == 0)
    r14_1 = zx.q(*(arg2 + 0x80) * rcx_14) + *(arg2 + 0x70)
else
    int32_t rdx_14 = *r8
    int32_t r9_8 = 0
    
    if (rcx_14 s>= rdx_14)
        int64_t rax_41 = 0
        
        do
            rcx_14 -= rdx_14
            rax_41 += 1
            rdx_14 = r8[rax_41]
            r9_8 += 1
        while (rcx_14 s>= rdx_14)
    
    r14_1 = sx.q(rcx_14) + *(r11 + (sx.q(r9_8) << 3))

EnterCriticalSection(&data_143ce0410)
int16_t* rax_43 = *(arg2 + 0x10)
int32_t rdx_16 = zx.d(*rax_43) & 0x7fff
*(arg2 + 0x10) = &rax_43[1]
int32_t var_d8 = rdx_16
int32_t rax_45
rax_45.b = rdx_16 != 0x7fff
int32_t* var_c8
void var_d0

if (rdx_16 == 0x7fff)
    var_c8 = &var_d0
else
    var_c8 = zx.q(*(arg2 + 0x80) * rdx_16) + *(arg2 + 0x70)

if (*(arg2 + 0x40) s> 0)
    arg_10.q = zx.q(arg_10.b) << 2
    arg_18.q = zx.q(arg_18.b) << 2
    arg_20.q = zx.q(arg_20.b) << 2
    var_110.q = zx.q(var_110.b) << 2
    var_108.q = zx.q(var_108.b) << 2
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    var_100.q = zx.q(var_100.b) << 2
    int128_t zmm8
    int128_t var_68_1 = zmm8
    int128_t zmm9
    int128_t var_78_1 = zmm9
    int128_t zmm10
    int128_t var_88_1 = zmm10
    
    do
        zmm8 = *r13_1
        zmm9 = *r12_1
        zmm10 = *r15_1
        float _X[0x2] = *var_128
        float var_e8_1 = _X[0]
        _X = _mm_cvtps_pd(_X)
        zmm6 = *var_120
        int32_t var_e4_1 = zmm6.d
        int32_t var_f4_1 = zmm9.d
        zmm7 = *var_118
        
        if (_finite(_X) != 0 && _finite(_mm_cvtps_pd(zmm6.q)) != 0)
            _finite(_mm_cvtps_pd(zmm7.q))
        
        if (_finite(_mm_cvtps_pd(zmm8.q)) != 0 && _finite(_mm_cvtps_pd(zmm9.q)) != 0)
            _finite(_mm_cvtps_pd(zmm10.q))
        
        float zmm1 = *r14_1
        float var_a8[0x2] = zmm8.d.q
        int32_t var_a0_1 = zmm10.d
        float var_98[0x2] = var_e8_1.q
        int32_t var_90_1 = zmm7.d
        r13_1 += var_110.q
        i_1 += 1
        r12_1 += var_108.q
        r15_1 += var_100.q
        r14_1 = &r14_1[zx.q(rbx_1)]
        *var_c8 = sub_140778680(rax_5 + 8, &var_98, &var_a8, (zx.o(0)).d, zmm1)
        var_128 += arg_10.q
        var_120 += arg_18.q
        var_118 += arg_20.q
        var_c8 = &var_c8[sx.q(rax_45)]
    while (i_1 s< *(arg2 + 0x40))

return LeaveCriticalSection(&data_143ce0410)
