// 函数: sub_1407703b0
// 地址: 0x1407703b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
int32_t* r8 = *(arg2 + 0x20)
int32_t r9_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
int32_t rax_2 = *r8

if (r9_1 s>= rax_2)
    int64_t rcx = 0
    
    do
        r9_1 -= rax_2
        rcx += 1
        rax_2 = r8[rcx]
        rdx += 1
    while (r9_1 s>= rax_2)

int64_t rax_3 = *(arg2 + 0x18)
uint32_t var_b0 = 0xffffffff
void* rax_4 = *(rax_3 + (sx.q(rdx) << 3))
int32_t* var_a8 = nullptr
int32_t var_a0 = 0
uint32_t var_98 = 0xffffffff
int64_t rdx_2 = sx.q(*(rax_4 + sx.q(r9_1)))
int64_t rax_5 = *(arg2 + 0x38)
int32_t* var_90 = nullptr
int32_t var_88 = 0
uint32_t var_80 = 0xffffffff
void* r14 = *(rax_5 + (rdx_2 << 3))
void* var_78 = nullptr
int32_t var_70 = 0
sub_140767bd0(&var_b0, arg2)
sub_140767bd0(&var_98, arg2)
sub_140767bd0(&var_80, arg2)
int16_t* rax_6 = *(arg2 + 0x10)
int32_t rdx_7 = zx.d(*rax_6) & 0x7fff
*(arg2 + 0x10) = &rax_6[1]
int32_t var_e8 = rdx_7
int32_t rax_8
rax_8.b = rdx_7 != 0x7fff
void* rcx_7
void var_e0

if (rdx_7 == 0x7fff)
    rcx_7 = &var_e0
else
    rcx_7 = zx.q(*(arg2 + 0x80) * rdx_7) + *(arg2 + 0x70)
void* var_d8 = rcx_7
int32_t r11 = *(r14 + 0x198)
int32_t rdx_9 = *(arg1 + 0xa0) + r11

if (rdx_9 s<= 0)
    return memset(rcx_7, 0xff, sx.q(*(arg2 + 0x40)) << 2)

int32_t rax_9 = *(r14 + 0x1c0)

if (*(arg2 + 0x40) s<= 0)
    return rax_9

int64_t r10 = 0
void* r12 = var_78
int64_t rcx_9 = sx.q(var_a0) << 2
int64_t r8_2 = sx.q(var_88) << 2
int32_t* r13 = var_90
int32_t* rax_12 = var_a8
int64_t var_d0 = rcx_9
int64_t var_c8 = r8_2
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(rdx_9))

do
    int32_t r15_1 = *r13
    int32_t* rax_13 = r12
    r13 += r8_2
    r12 = &rax_13[sx.q(var_70)]
    int32_t r8_3 = *rax_13
    uint128_t zmm1
    
    if (r8_3 == 0xffffffff)
        int32_t rax_23 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
        *(arg2 + 0x8c) = rax_23
        zmm1.d = (rax_23 u>> 9 | 0x3f800000).d f- 1f
    else
        int32_t* rcx_11 = *(arg2 + 0x90)
        int32_t r9_3 = *rax_12 * 0x19660d
        int32_t rdx_10 = *(rcx_11 + r10)
        *(rcx_11 + r10) = rdx_10 + 1
        int32_t r9_4 = r9_3
            + ((r8_3 << 0x10 | rdx_10) * 0x19660d + 0x3c6ef35f) * (r15_1 * 0x19660d + 0x3c6ef35f)
            + 0x3c6ef35f
        int32_t rcx_17 =
            r9_4 * ((r8_3 << 0x10 | rdx_10) * 0x19660d + 0x3c6ef35f) + r15_1 * 0x19660d + 0x3c6ef35f
        zmm1.d = _mm_cvtepi32_ps(zx.o((
            (r9_4 * rcx_17 + (r8_3 << 0x10 | rdx_10) * 0x19660d + 0x3c6ef35f) * rcx_17 + r9_4) s>> 8)
            & 0xffffff).d f* 5.96046448e-08f
    
    int64_t rax_26 = sx.q(rax_8)
    int32_t r9_5 = int.d(zmm2.d f* zmm1.d)
    
    if (r9_5 s>= r11)
        void* rdx_14 = var_d8
        var_d8 = rdx_14 + (rax_26 << 2)
        *rdx_14 = r9_5 - r11 + rax_9
    else
        uint32_t* r8_8 = var_d8
        var_d8 = &r8_8[rax_26]
        *r8_8 = zx.d(*(*(r14 + 0x1a0) + (sx.q(r9_5) << 1)))
    
    rax_12 += rcx_9
    i += 1
    rcx_9 = var_d0
    r10 += 4
    r8_2 = var_c8
while (i s< *(arg2 + 0x40))

return rax_12
