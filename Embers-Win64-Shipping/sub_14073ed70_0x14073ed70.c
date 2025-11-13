// 函数: sub_14073ed70
// 地址: 0x14073ed70
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
uint32_t var_f0 = 0xffffffff
void* rax_4 = *(rax_3 + (sx.q(rdx) << 3))
int32_t* var_e8 = nullptr
int32_t var_e0 = 0
uint32_t var_d8 = 0xffffffff
int64_t rdx_2 = sx.q(*(rax_4 + sx.q(r8_1)))
int64_t rax_5 = *(arg2 + 0x38)
int32_t* var_d0 = nullptr
int32_t var_c8 = 0
uint32_t var_c0 = 0xffffffff
int32_t* rsi = *(rax_5 + (rdx_2 << 3))
int32_t* var_b8 = nullptr
int32_t var_b0 = 0
sub_140767bd0(&var_f0, arg2)
sub_140767bd0(&var_d8, arg2)
sub_140767bd0(&var_c0, arg2)
int16_t* rax_6 = *(arg2 + 0x10)
int32_t rdx_7 = zx.d(*rax_6) & 0x7fff
*(arg2 + 0x10) = &rax_6[1]
int32_t var_118 = rdx_7
int32_t rax_8
rax_8.b = rdx_7 != 0x7fff
void* var_108
void var_110

if (rdx_7 == 0x7fff)
    var_108 = &var_110
else
    var_108 = zx.q(*(arg2 + 0x80) * rdx_7) + *(arg2 + 0x70)
int32_t var_3c
int32_t var_3c_1 = var_3c & 0xfffffff8
int32_t var_78 = 0xffffffff
int128_t var_88 = zx.o(0)
int128_t var_58
__builtin_memset(&var_58, 0, 0x18)
int32_t var_74
__builtin_memset(&var_74, 0, 0x14)
int32_t var_40 = 0xffffffff
sub_14077b510(&var_88, rsi)
uint64_t rax_9 = zx.q(*(arg2 + 0x40))
int64_t var_68

if (var_68 == 0)
    if (rax_9.d s> 0)
        do
            void* rdx_16 = var_108
            i += 1
            rax_9 = sx.q(rax_8)
            var_108 = rdx_16 + (rax_9 << 2)
            *rdx_16 = 0xffffffff
        while (i s< *(arg2 + 0x40))
else if (rax_9.d s> 0)
    int64_t r10 = 0
    int32_t* r12 = var_e8
    int64_t rcx_10 = sx.q(var_c8) << 2
    int32_t* r14 = var_b8
    int64_t rdx_10 = sx.q(var_b0) << 2
    int32_t* r15 = var_d0
    int64_t arg_20 = rdx_10
    int64_t arg_18 = rcx_10
    int64_t rax_26
    
    do
        int32_t rax_10 = *r15
        r15 += rcx_10
        int32_t r8_2 = *r14
        r14 += rdx_10
        int32_t r9_1 = *r12
        r12 = &r12[sx.q(var_e0)]
        int32_t rsi_1 = *(var_58:8.q + 0x18)
        uint128_t zmm1
        
        if (r8_2 == 0xffffffff)
            int32_t rax_21 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
            *(arg2 + 0x8c) = rax_21
            zmm1.d = (rax_21 u>> 9 | 0x3f800000).d f- 1f
        else
            int32_t* rcx_11 = *(arg2 + 0x90)
            int32_t rdx_11 = *(rcx_11 + r10)
            *(rcx_11 + r10) = rdx_11 + 1
            int32_t r9_3 = r9_1 * 0x19660d + ((r8_2 << 0x10 | rdx_11) * 0x19660d + 0x3c6ef35f)
                * (rax_10 * 0x19660d + 0x3c6ef35f) + 0x3c6ef35f
            int32_t rcx_17 = r9_3 * ((r8_2 << 0x10 | rdx_11) * 0x19660d + 0x3c6ef35f)
                + rax_10 * 0x19660d + 0x3c6ef35f
            zmm1.d = _mm_cvtepi32_ps(zx.o((
                (r9_3 * rcx_17 + (r8_2 << 0x10 | rdx_11) * 0x19660d + 0x3c6ef35f) * rcx_17 + r9_3)
                s>> 8) & 0xffffff).d f* 5.96046448e-08f
        
        i += 1
        r10 += 4
        uint128_t zmm0_1
        zmm0_1.d = _mm_cvtepi32_ps(zx.o(rsi_1)).d f* zmm1.d
        rax_26 = sx.q(rax_8)
        int32_t* rdx_15 = var_108
        var_108 = &rdx_15[rax_26]
        rcx_10 = arg_18
        *rdx_15 = *(*(var_58:8.q + 0x10) + (sx.q(int.d(zmm0_1.d)) << 2))
        rdx_10 = arg_20
    while (i s< *(arg2 + 0x40))
    
    return rax_26

return rax_9
