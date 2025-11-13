// 函数: sub_14283d14c
// 地址: 0x14283d14c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x2] = *(arg1 + 0xdc0)
uint64_t r11 = 0
int64_t r10 = *(arg1 + 0xdb8)
int64_t r13 = *(arg1 + 0xdc8)
float zmm3 = *(arg1 + 0xdb4)
int64_t rsi = *(*(arg1 + 0xd98) + 0x40)
float zmm4 = *(arg1 + 0xdc4)
int64_t rcx = 0
uint128_t zmm1
zmm1.q = _mm_cvtps_pd(zmm2).q f- _mm_cvtepi32_pd(zx.q(int.d(zmm2[0]))).q
zmm1.q = zmm1.q f* 4294967296.0

if (not(zmm2[0] < 9.22337204e+18f))
    zmm2[0] = zmm2[0] - 9.22337204e+18f
    
    if (not(zmm2[0] >= 9.22337204e+18f))
        rcx = -0x8000000000000000

int64_t r14_2 = zx.q((int.q(zmm1.q)).d) | (int.q(zmm2[0]) + rcx) << 0x20
int32_t rax_5 = int.d(fconvert.t(*(arg1 + 0x6d8)))
int32_t rax_6
int64_t rbp
int32_t rdi

if (rax_5 == 1 || (rax_5 == 3 && *(arg1 + 0xe84) s< 5))
    rax_6 = 1
    rbp = 1
    rdi = *(arg1 + 0xdec) - 1
else
    rdi = *(arg1 + 0xde4)
    rax_6 = 0
    rbp = 0

int64_t rax_7

if (rax_6 == 0)
    rax_7 = sx.q(*(arg1 + 0xde4))
else
    rax_7 = sx.q(*(arg1 + 0xde8))

int16_t r15 = *(rsi + (rax_7 << 1))

while (true)
    uint32_t rbx_2 = (r10 u>> 0x20).d
    int32_t* r8_2 = (r11 << 2) + r13
    
    while (true)
        uint128_t zmm0
        
        if (rbx_2 u> rdi - 1)
            if (rbx_2 u<= rdi)
                while (r11.d u< 0x40)
                    uint64_t rdx_3 = zx.q(r10.d)
                    r10 += r14_2
                    uint64_t rdx_4 = rdx_3 u>> 0x18
                    zmm1 = _mm_cvtepi32_ps(zx.o(sx.d(*(rsi + (zx.q(rbx_2) << 1)))))
                    uint32_t rax_14 = (r10 u>> 0x20).d
                    rbx_2 = rax_14
                    zmm0 = _mm_cvtepi32_ps(zx.o(sx.d(r15)))
                    zmm1.d = zmm1.d f* *(&data_143fe79f0 + (rdx_4 << 3))
                    zmm0.d = zmm0.d f* *((rdx_4 << 3) + &data_143fe79f4)
                    zmm1.d = zmm1.d f+ zmm0.d
                    zmm1.d = zmm1.d f* zmm3
                    zmm3 = zmm3 + zmm4
                    *(r13 + (r11 << 2)) = zmm1.d
                    r11 = zx.q(r11.d + 1)
                    
                    if (rax_14 u> rdi)
                        break
            
            if (rbp != 0)
                if (rbx_2 u> rdi)
                    r10 -= sx.q(*(arg1 + 0xdec) - *(arg1 + 0xde8)) << 0x20
                    *(arg1 + 0xd94) = 1
                
                if (r11.d u< 0x40)
                    break
        else
            uint64_t rdx_1 = zx.q(r10.d)
            r10 += r14_2
            uint64_t rdx_2 = rdx_1 u>> 0x18
            r11 = zx.q(r11.d + 1)
            zmm1.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rsi + (zx.q(rbx_2 + 1) << 1))))).d f*
                *((rdx_2 << 3) + &data_143fe79f4)
            uint64_t rax_10 = zx.q(rbx_2)
            rbx_2 = (r10 u>> 0x20).d
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rsi + (rax_10 << 1))))).d f*
                *(&data_143fe79f0 + (rdx_2 << 3))
            zmm1.d = zmm1.d f+ zmm0.d
            zmm1.d = zmm1.d f* zmm3
            zmm3 = zmm3 + zmm4
            *r8_2 = zmm1.d
            r8_2 = &r8_2[1]
            
            if (r11.d u< 0x40)
                continue
        *(arg1 + 0xdb4) = zmm3
        *(arg1 + 0xdb8) = r10
        return zx.q(r11.d)
