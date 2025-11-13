// 函数: sub_14283c35c
// 地址: 0x14283c35c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm2 = *(arg1 + 0xdc0)
void* r9 = arg1
uint64_t r10 = 0
int64_t r14 = *(arg1 + 0xdc8)
int64_t r11 = *(arg1 + 0xdb8)
float zmm3 = *(arg1 + 0xdb4)
int64_t rdi = *(*(arg1 + 0xd98) + 0x40)
float zmm4 = *(arg1 + 0xdc4)
int64_t rcx = 0
int64_t var_58 = r14
uint128_t zmm1
zmm1.q = _mm_cvtps_pd(zmm2.q).q f- _mm_cvtepi32_pd(zx.q(int.d(zmm2.d))).q
zmm1.q = zmm1.q f* 4294967296.0

if (not(zmm2.d f< 9.22337204e+18f))
    zmm2.d = zmm2.d f- 9.22337204e+18f
    
    if (not(zmm2.d f>= 9.22337204e+18f))
        rcx = -0x8000000000000000

int64_t r12_2 = zx.q((int.q(zmm1.q)).d) | (int.q(zmm2.d) + rcx) << 0x20
int32_t rax_5 = int.d(fconvert.t(*(r9 + 0x6d8)))
int64_t var_50
int32_t rcx_1
int32_t rsi

if (rax_5 == 1 || (rax_5 == 3 && *(r9 + 0xe84) s< 5))
    rcx_1 = 1
    rsi = *(r9 + 0xdec) - 1
    var_50 = 1
else
    rsi = *(r9 + 0xde4)
    rcx_1 = 0
    var_50 = 0

int32_t i_1 = rsi - 2
uint64_t rbp
int16_t r13

if (*(r9 + 0xd94) == 0)
    rbp = sx.q(*(r9 + 0xde0))
    r13 = *(rdi + (rbp << 1))
else
    rbp = zx.q(*(r9 + 0xde8))
    r13 = *(rdi + (sx.q(*(r9 + 0xdec)) << 1) - 2)

int16_t arg_10 = r13
int32_t arg_20 = rbp.d
int16_t arg_18
int16_t r15

if (rcx_1 == 0)
    r15 = *(rdi + (sx.q(*(r9 + 0xde4)) << 1))
    arg_18 = r15
else
    int64_t rax_7 = sx.q(*(r9 + 0xde8))
    r15 = *(rdi + (rax_7 << 1))
    arg_18 = *(rdi + (rax_7 << 1) + 2)

while (true)
    uint32_t i = (r11 u>> 0x20).d
    uint128_t zmm0
    
    if (i == rbp.d)
        do
            if (r10.d u>= 0x40)
                goto label_14283c7e2
            
            uint64_t r8_1 = zx.q(r11.d)
            r11 += r12_2
            zmm1 = zx.o(sx.d(*(rdi + (zx.q(i) << 1))))
            int32_t rax_13 = sx.d(*(rdi + (zx.q(i + 1) << 1)))
            zmm0 = _mm_cvtepi32_ps(zx.o(sx.d(r13)))
            zmm1 = _mm_cvtepi32_ps(zmm1)
            zmm0.d = zmm0.d f* *((r8_1 u>> 0x18 << 4) + &data_143fe81f0)
            zmm1.d = zmm1.d f* *((r8_1 u>> 0x18 << 4) + &data_143fe81f4)
            zmm1.d = zmm1.d f+ zmm0.d
            zmm0 = _mm_cvtepi32_ps(zx.o(rax_13))
            int32_t rax_15 = sx.d(*(rdi + (zx.q(i + 2) << 1)))
            i = (r11 u>> 0x20).d
            zmm0.d = zmm0.d f* *((r8_1 u>> 0x18 << 4) + 0x143fe81f8)
            zmm1.d = zmm1.d f+ zmm0.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(rax_15)).d f* *((r8_1 u>> 0x18 << 4) + 0x143fe81fc)
            zmm1.d = zmm1.d f+ zmm0.d
            zmm1.d = zmm1.d f* zmm3
            zmm3 = zmm3 + zmm4
            *(r14 + (r10 << 2)) = zmm1.d
            r10 = zx.q(r10.d + 1)
        while (i == rbp.d)
        
        if (r10.d u>= 0x40)
        label_14283c7e2:
            *(r9 + 0xdb4) = zmm3
            *(r9 + 0xdb8) = r11
            return zx.q(r10.d)
        
        i_1 = rsi - 2
    
    int32_t* r8_5 = r14 + (r10 << 2)
    
    for (; i u<= i_1; i_1 = rsi - 2)
        r10 = zx.q(r10.d + 1)
        uint64_t rdx = zx.q(r11.d)
        r11 += r12_2
        int32_t rax_19 = sx.d(*(rdi + (zx.q(i - 1) << 1)))
        zmm1.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rdi + (zx.q(i) << 1))))).d f*
            *((rdx u>> 0x18 << 4) + &data_143fe81f4)
        int32_t rax_21 = sx.d(*(rdi + (zx.q(i + 1) << 1)))
        zmm0.d = _mm_cvtepi32_ps(zx.o(rax_19)).d f* *((rdx u>> 0x18 << 4) + &data_143fe81f0)
        zmm1.d = zmm1.d f+ zmm0.d
        zmm0 = _mm_cvtepi32_ps(zx.o(rax_21))
        int32_t rax_23 = sx.d(*(rdi + (zx.q(i + 2) << 1)))
        i = (r11 u>> 0x20).d
        zmm0.d = zmm0.d f* *((rdx u>> 0x18 << 4) + 0x143fe81f8)
        zmm1.d = zmm1.d f+ zmm0.d
        zmm0.d = _mm_cvtepi32_ps(zx.o(rax_23)).d f* *((rdx u>> 0x18 << 4) + 0x143fe81fc)
        zmm1.d = zmm1.d f+ zmm0.d
        zmm1.d = zmm1.d f* zmm3
        zmm3 = zmm3 + zmm4
        *r8_5 = zmm1.d
        r8_5 = &r8_5[1]
        
        if (r10.d u>= 0x40)
            goto label_14283c7e2
    
    if (i u<= i_1 + 1)
        while (r10.d u< 0x40)
            uint64_t r8_6 = zx.q(r11.d)
            r11 += r12_2
            int32_t rax_26 = sx.d(*(rdi + (zx.q(i - 1) << 1)))
            zmm2.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rdi + (zx.q(i) << 1))))).d f*
                *((r8_6 u>> 0x18 << 4) + &data_143fe81f4)
            int32_t rax_28 = sx.d(*(rdi + (zx.q(i + 1) << 1)))
            zmm0.d = _mm_cvtepi32_ps(zx.o(rax_26)).d f* *((r8_6 u>> 0x18 << 4) + &data_143fe81f0)
            zmm2.d = zmm2.d f+ zmm0.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(rax_28)).d f* *((r8_6 u>> 0x18 << 4) + 0x143fe81f8)
            uint32_t i_2 = (r11 u>> 0x20).d
            i = i_2
            zmm2.d = zmm2.d f+ zmm0.d
            zmm1.d = _mm_cvtepi32_ps(zx.o(sx.d(r15))).d f* *((r8_6 u>> 0x18 << 4) + 0x143fe81fc)
            zmm2.d = zmm2.d f+ zmm1.d
            zmm2.d = zmm2.d f* zmm3
            zmm3 = zmm3 + zmm4
            *(var_58 + (r10 << 2)) = zmm2.d
            r10 = zx.q(r10.d + 1)
            
            if (i_2 u> i_1 + 1)
                break
        
        r9 = arg1
        rbp = zx.q(arg_20)
    
    if (i u<= rsi)
        while (r10.d u< 0x40)
            uint64_t r8_10 = zx.q(r11.d)
            r11 += r12_2
            int32_t rax_33 = sx.d(*(rdi + (zx.q(i - 1) << 1)))
            zmm2.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rdi + (zx.q(i) << 1))))).d f*
                *((r8_10 u>> 0x18 << 4) + &data_143fe81f4)
            zmm0.d = _mm_cvtepi32_ps(zx.o(rax_33)).d f* *((r8_10 u>> 0x18 << 4) + &data_143fe81f0)
            uint32_t i_3 = (r11 u>> 0x20).d
            i = i_3
            zmm2.d = zmm2.d f+ zmm0.d
            zmm1.d = _mm_cvtepi32_ps(zx.o(sx.d(r15))).d f* *((r8_10 u>> 0x18 << 4) + 0x143fe81f8)
            zmm2.d = zmm2.d f+ zmm1.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(arg_18))).d f* *((r8_10 u>> 0x18 << 4) + 0x143fe81fc)
            zmm2.d = zmm2.d f+ zmm0.d
            zmm2.d = zmm2.d f* zmm3
            zmm3 = zmm3 + zmm4
            *(var_58 + (r10 << 2)) = zmm2.d
            r10 = zx.q(r10.d + 1)
            
            if (i_3 u> rsi)
                break
        
        r9 = arg1
        rbp = zx.q(arg_20)
        r13 = arg_10
    
    if (var_50 == 0)
        goto label_14283c7e2
    
    if (i u> rsi)
        int64_t rdx_4 = sx.q(*(r9 + 0xdec))
        int32_t r8_14 = *(r9 + 0xde8)
        r11 -= sx.q(rdx_4.d - r8_14) << 0x20
        
        if (*(r9 + 0xd94) == 0)
            *(r9 + 0xd94) = 1
            rbp = zx.q(r8_14)
            r13 = *(rdi + (rdx_4 << 1) - 2)
            arg_10 = r13
            arg_20 = r8_14
    
    if (r10.d u>= 0x40)
        goto label_14283c7e2
    
    r14 = var_58
    i_1 = rsi - 2
