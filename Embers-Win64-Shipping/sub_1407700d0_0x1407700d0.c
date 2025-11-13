// 函数: sub_1407700d0
// 地址: 0x1407700d0
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
uint32_t var_a0 = 0xffffffff
void* rax_4 = *(rax_3 + (sx.q(rdx) << 3))
int32_t* var_98 = nullptr
int32_t var_90 = 0
uint32_t var_88 = 0xffffffff
int64_t rdx_2 = sx.q(*(rax_4 + sx.q(r9_1)))
int64_t rax_5 = *(arg2 + 0x38)
int32_t* var_80 = nullptr
int32_t var_78 = 0
uint32_t var_70 = 0xffffffff
void* rsi = *(rax_5 + (rdx_2 << 3))
int32_t* var_68 = nullptr
int32_t var_60 = 0
sub_140767bd0(&var_a0, arg2)
sub_140767bd0(&var_88, arg2)
sub_140767bd0(&var_70, arg2)
int16_t* rax_6 = *(arg2 + 0x10)
int32_t rdx_7 = zx.d(*rax_6) & 0x7fff
*(arg2 + 0x10) = &rax_6[1]
int32_t var_c8 = rdx_7
int32_t rax_8
rax_8.b = rdx_7 != 0x7fff
void* rcx_7
void var_c0

if (rdx_7 == 0x7fff)
    rcx_7 = &var_c0
else
    rcx_7 = zx.q(*(arg2 + 0x80) * rdx_7) + *(arg2 + 0x70)
int32_t rdx_8 = *(arg1 + 0xa0)
void* var_b8 = rcx_7
int32_t rax_9 = *(rsi + 0x1c0)
int64_t rax_10 = sx.q(*(arg2 + 0x40))

if (rdx_8 == 0)
    return memset(rcx_7, 0xff, rax_10 << 2)

if (rax_10.d s<= 0)
    return rax_10

int64_t r10 = 0
int32_t* rsi_1 = var_68
int32_t* r14_1 = var_80
int64_t rcx_9 = sx.q(var_60) << 2
int32_t* r15 = var_98
int64_t arg_18 = rcx_9
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(rdx_8))
int32_t rax_26

do
    int32_t rax_11 = *r14_1
    r14_1 = &r14_1[sx.q(var_78)]
    int32_t r8_1 = *rsi_1
    rsi_1 += rcx_9
    int32_t r9_2 = *r15
    r15 = &r15[sx.q(var_90)]
    uint128_t zmm1
    
    if (r8_1 == 0xffffffff)
        int32_t rax_21 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
        *(arg2 + 0x8c) = rax_21
        zmm1.d = (rax_21 u>> 9 | 0x3f800000).d f- 1f
    else
        int32_t* rcx_10 = *(arg2 + 0x90)
        int32_t rdx_9 = *(rcx_10 + r10)
        *(rcx_10 + r10) = rdx_9 + 1
        int32_t r9_4 = r9_2 * 0x19660d
            + ((r8_1 << 0x10 | rdx_9) * 0x19660d + 0x3c6ef35f) * (rax_11 * 0x19660d + 0x3c6ef35f)
            + 0x3c6ef35f
        int32_t rcx_16 =
            r9_4 * ((r8_1 << 0x10 | rdx_9) * 0x19660d + 0x3c6ef35f) + rax_11 * 0x19660d + 0x3c6ef35f
        zmm1.d = _mm_cvtepi32_ps(zx.o((
            (r9_4 * rcx_16 + (r8_1 << 0x10 | rdx_9) * 0x19660d + 0x3c6ef35f) * rcx_16 + r9_4) s>> 8)
            & 0xffffff).d f* 5.96046448e-08f
    
    int32_t* rdx_12 = var_b8
    i += 1
    r10 += 4
    var_b8 = &rdx_12[sx.q(rax_8)]
    rcx_9 = arg_18
    rax_26 = int.d(zmm2.d f* zmm1.d) + rax_9
    *rdx_12 = rax_26
while (i s< *(arg2 + 0x40))

return rax_26
