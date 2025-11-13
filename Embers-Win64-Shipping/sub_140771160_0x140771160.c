// 函数: sub_140771160
// 地址: 0x140771160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
int32_t* r9 = *(arg2 + 0x20)
int32_t r8_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
int32_t rax_2 = *r9

if (r8_1 s>= rax_2)
    int64_t rcx = 0
    
    do
        r8_1 -= rax_2
        rcx += 1
        rax_2 = r9[rcx]
        rdx += 1
    while (r8_1 s>= rax_2)

int64_t rax_3 = *(arg2 + 0x18)
uint32_t var_a0 = 0xffffffff
void* rax_4 = *(rax_3 + (sx.q(rdx) << 3))
int32_t* var_98 = nullptr
int32_t var_90 = 0
uint32_t var_88 = 0xffffffff
int64_t rdx_2 = sx.q(*(rax_4 + sx.q(r8_1)))
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
int64_t result
result.b = rdx_7 != 0x7fff
int32_t var_c4 = result.d
void* rcx_7
void var_c0

if (rdx_7 == 0x7fff)
    rcx_7 = &var_c0
else
    rcx_7 = zx.q(*(arg2 + 0x80) * rdx_7) + *(arg2 + 0x70)
void* var_b8 = rcx_7
int32_t rdx_8 = *(rsi + 0x19c)

if (rdx_8 s<= 0)
    return memset(rcx_7, 0xff, sx.q(*(arg2 + 0x40)) << 2)

int64_t arg_20
uint128_t zmm1
uint128_t zmm3

if (*(rsi + 0x198) == 0)
    int32_t rax_8 = *(rsi + 0x194)
    int32_t rdx_9 = rdx_8 - (rax_8 s>> 0x1f)
    result = sx.q(*(arg2 + 0x40))
    
    if (rdx_9 - 2 s< 0)
        return memset(rcx_7, 0xff, result << 2)
    
    if (result.d s> 0)
        int64_t r10_1 = 0
        int32_t* rsi_1 = var_68
        int32_t* r14_1 = var_80
        int32_t* r15_1 = var_98
        int64_t rcx_9 = sx.q(var_60) << 2
        arg_20 = rcx_9
        zmm3 = _mm_cvtepi32_ps(zx.o(rdx_9 - 1))
        
        do
            int32_t rax_11 = *r14_1
            r14_1 = &r14_1[sx.q(var_78)]
            int32_t r8_2 = *rsi_1
            rsi_1 += rcx_9
            int32_t r9_1 = *r15_1
            r15_1 = &r15_1[sx.q(var_90)]
            
            if (r8_2 == 0xffffffff)
                int32_t rax_21 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
                *(arg2 + 0x8c) = rax_21
                zmm1.d = (rax_21 u>> 9 | 0x3f800000).d f- 1f
            else
                int32_t* rcx_10 = *(arg2 + 0x90)
                int32_t rdx_11 = *(rcx_10 + r10_1)
                *(rcx_10 + r10_1) = rdx_11 + 1
                int32_t r9_3 = r9_1 * 0x19660d + ((r8_2 << 0x10 | rdx_11) * 0x19660d + 0x3c6ef35f)
                    * (rax_11 * 0x19660d + 0x3c6ef35f) + 0x3c6ef35f
                int32_t rcx_16 = r9_3 * ((r8_2 << 0x10 | rdx_11) * 0x19660d + 0x3c6ef35f)
                    + rax_11 * 0x19660d + 0x3c6ef35f
                zmm1.d = _mm_cvtepi32_ps(zx.o((
                    (rcx_16 * r9_3 + (r8_2 << 0x10 | rdx_11) * 0x19660d + 0x3c6ef35f) * rcx_16
                    + r9_3) s>> 8) & 0xffffff).d f* 5.96046448e-08f
            
            void* rdx_14 = var_b8
            int32_t r8_7 = int.d(zmm3.d f* zmm1.d)
            var_b8 = rdx_14 + (sx.q(var_c4) << 2)
            rcx_9 = arg_20
            result = zx.q(r8_7 + 1)
            
            if (r8_7 == rax_8)
                r8_7 = result.d
            
            i += 1
            r10_1 += 4
            *rdx_14 = r8_7
        while (i s< *(arg2 + 0x40))
else if (*(arg2 + 0x40) s> 0)
    int64_t r10_2 = 0
    int32_t* r14_2 = var_68
    int32_t* r15_2 = var_80
    int32_t* r12_3 = var_98
    int64_t rcx_19 = sx.q(var_78) << 2
    int64_t r8_11 = sx.q(var_60) << 2
    arg_20 = r8_11
    int32_t arg_18
    arg_18.q = rcx_19
    zmm3 = _mm_cvtepi32_ps(zx.o(rdx_8))
    
    do
        int32_t rax_25 = *r15_2
        r15_2 += rcx_19
        int32_t r9_4 = *r12_3
        r12_3 = &r12_3[sx.q(var_90)]
        int32_t* rax_26 = r14_2
        r14_2 += r8_11
        int32_t r8_12 = *rax_26
        
        if (r8_12 == 0xffffffff)
            int32_t rax_36 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
            *(arg2 + 0x8c) = rax_36
            zmm1.d = (rax_36 u>> 9 | 0x3f800000).d f- 1f
        else
            int32_t* rcx_20 = *(arg2 + 0x90)
            int32_t rdx_15 = *(rcx_20 + r10_2)
            *(rcx_20 + r10_2) = rdx_15 + 1
            int32_t r9_6 = r9_4 * 0x19660d + ((r8_12 << 0x10 | rdx_15) * 0x19660d + 0x3c6ef35f)
                * (rax_25 * 0x19660d + 0x3c6ef35f) + 0x3c6ef35f
            int32_t rcx_26 = ((r8_12 << 0x10 | rdx_15) * 0x19660d + 0x3c6ef35f) * r9_6
                + rax_25 * 0x19660d + 0x3c6ef35f
            zmm1.d = _mm_cvtepi32_ps(zx.o((
                (rcx_26 * r9_6 + (r8_12 << 0x10 | rdx_15) * 0x19660d + 0x3c6ef35f) * rcx_26 + r9_6)
                s>> 8) & 0xffffff).d f* 5.96046448e-08f
        
        int32_t* rdx_18 = var_b8
        i += 1
        r10_2 += 4
        var_b8 = &rdx_18[sx.q(var_c4)]
        result = zx.q(*(*(rsi + 0x1a0) + (sx.q(int.d(zmm3.d f* zmm1.d) + *(rsi + 0x198)) << 1)))
        rcx_19 = arg_18.q
        r8_11 = arg_20
        *rdx_18 = result.d
    while (i s< *(arg2 + 0x40))
return result
