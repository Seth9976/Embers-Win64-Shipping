// 函数: sub_14283d394
// 地址: 0x14283d394
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x2] = *(arg1 + 0xdc0)
uint64_t r11 = 0
int64_t r10 = *(arg1 + 0xdb8)
int64_t r14 = *(arg1 + 0xdc8)
float zmm3 = *(arg1 + 0xdb4)
int64_t rbp = *(*(arg1 + 0xd98) + 0x40)
float zmm4 = *(arg1 + 0xdc4)
int64_t rcx = 0
uint64_t rsi_1 =
    zx.q((int.q((_mm_cvtps_pd(zmm2) f- _mm_cvtepi32_pd(zx.q(int.d(zmm2[0]))).q) * 4294967296.0)).d)

if (not(zmm2[0] < 9.22337204e+18f))
    zmm2[0] = zmm2[0] - 9.22337204e+18f
    
    if (not(zmm2[0] >= 9.22337204e+18f))
        rcx = -0x8000000000000000

int64_t rsi_2 = rsi_1 | (int.q(zmm2[0]) + rcx) << 0x20
int32_t rax_5 = int.d(fconvert.t(*(arg1 + 0x6d8)))
int64_t rbx
int32_t r9

if (rax_5 == 1 || (rax_5 == 3 && *(arg1 + 0xe84) s< 5))
    rbx = 1
    r9 = *(arg1 + 0xdec) - 1
else
    r9 = *(arg1 + 0xde4)
    rbx = 0

do
    int32_t* rdi_1 = r14 + (r11 << 2)
    int64_t rdx_1 = 0x80000000 + r10
    uint32_t rcx_2 = (rdx_1 u>> 0x20).d
    
    while (rcx_2 u<= r9)
        rdx_1 += rsi_2
        r10 += rsi_2
        r11 = zx.q(r11.d + 1)
        uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(sx.d(*(rbp + (zx.q(rcx_2) << 1)))))
        rcx_2 = (rdx_1 u>> 0x20).d
        zmm0.d = zmm0.d f* zmm3
        zmm3 = zmm3 + zmm4
        *rdi_1 = zmm0.d
        rdi_1 = &rdi_1[1]
        
        if (r11.d u>= 0x40)
            break
    
    if (rbx == 0)
        break
    
    if (rcx_2 u> r9)
        r10 -= sx.q(*(arg1 + 0xdec) - *(arg1 + 0xde8)) << 0x20
        *(arg1 + 0xd94) = 1
while (r11.d u< 0x40)

*(arg1 + 0xdb4) = zmm3
*(arg1 + 0xdb8) = r10
return zx.q(r11.d)
