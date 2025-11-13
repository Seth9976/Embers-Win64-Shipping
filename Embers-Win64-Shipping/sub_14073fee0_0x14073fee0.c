// 函数: sub_14073fee0
// 地址: 0x14073fee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_1 = 0
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
int32_t var_168 = rdx_7
int32_t rax_7
rax_7.b = rdx_7 != 0x7fff
void* var_158
void var_160

if (rdx_7 == 0x7fff)
    var_158 = &var_160
else
    var_158 = zx.q(*(arg2 + 0x80) * rdx_7) + *(arg2 + 0x70)
int32_t rcx_9 = zx.d(rax_6[1]) & 0x7fff
*(arg2 + 0x10) = &rax_6[2]
int32_t var_150 = rcx_9
int32_t rax_8
rax_8.b = rcx_9 != 0x7fff
void* var_140
void var_148

if (rcx_9 == 0x7fff)
    var_140 = &var_148
else
    var_140 = zx.q(rcx_9 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_13 = zx.d(rax_6[2]) & 0x7fff
*(arg2 + 0x10) = &rax_6[3]
int32_t var_138 = rcx_13
int32_t rax_9
rax_9.b = rcx_13 != 0x7fff
void* var_128
void var_130

if (rcx_13 == 0x7fff)
    var_128 = &var_130
else
    var_128 = zx.q(rcx_13 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_16 = zx.d(rax_6[3])
*(arg2 + 0x10) = &rax_6[4]
int32_t rdx_11 = rcx_16 & 0x7fff
int32_t var_120 = rdx_11
int32_t rax_11
rax_11.b = rdx_11 != 0x7fff
void* var_110
void var_118

if (rdx_11 == 0x7fff)
    var_110 = &var_118
else
    var_110 = zx.q(*(arg2 + 0x80) * rdx_11) + *(arg2 + 0x70)
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
uint64_t rax_12 = zx.q(*(arg2 + 0x40))
int64_t var_68

if (var_68 == 0)
    int32_t i = 0
    
    if (rax_12.d s> 0)
        do
            void* rdx_24 = var_158
            i += 1
            var_158 = rdx_24 + (sx.q(rax_7) << 2)
            *rdx_24 = 0xffffffff
            void* rdx_25 = var_140
            var_140 = rdx_25 + (sx.q(rax_8) << 2)
            *rdx_25 = 0
            void* rdx_26 = var_128
            var_128 = rdx_26 + (sx.q(rax_9) << 2)
            *rdx_26 = 0
            void* rdx_27 = var_110
            rax_12 = sx.q(rax_11)
            var_110 = rdx_27 + (rax_12 << 2)
            *rdx_27 = 0
        while (i s< *(arg2 + 0x40))
else if (rax_12.d s> 0)
    int64_t rdx_13 = 0
    void* r10 = arg2
    int32_t* r11 = var_b8
    int32_t* rsi_1 = var_d0
    int32_t* r14 = var_e8
    int64_t rcx_22 = sx.q(var_b0) << 2
    int64_t var_108 = rcx_22
    int64_t arg_20 = 0
    int64_t rax_41
    
    do
        int32_t r8_3 = *r11
        r11 += rcx_22
        int32_t r9_1 = *r14
        r14 = &r14[sx.q(var_e0)]
        int32_t r15_1 = *rsi_1
        rsi_1 = &rsi_1[sx.q(var_c8)]
        int32_t rax_14 = *(var_58:8.q + 8)
        uint128_t zmm1
        
        if (r8_3 == 0xffffffff)
            int32_t rax_24 = *(r10 + 0x8c) * 0xbb38435 + 0x3619636b
            *(r10 + 0x8c) = rax_24
            zmm1.d = (rax_24 u>> 9 | 0x3f800000).d f- 1f
        else
            int32_t* rcx_23 = *(r10 + 0x90)
            int32_t rdx_14 = *(rcx_23 + rdx_13)
            *(rcx_23 + arg_20) = rdx_14 + 1
            r10 = arg2
            int32_t r9_3 = r9_1 * 0x19660d + ((r8_3 << 0x10 | rdx_14) * 0x19660d + 0x3c6ef35f)
                * (r15_1 * 0x19660d + 0x3c6ef35f) + 0x3c6ef35f
            int32_t rcx_29 = ((r8_3 << 0x10 | rdx_14) * 0x19660d + 0x3c6ef35f) * r9_3
                + r15_1 * 0x19660d + 0x3c6ef35f
            zmm1.d = _mm_cvtepi32_ps(zx.o((
                (rcx_29 * r9_3 + (r8_3 << 0x10 | rdx_14) * 0x19660d + 0x3c6ef35f) * rcx_29 + r9_3)
                s>> 8) & 0xffffff).d f* 5.96046448e-08f
        
        int32_t* r8_8 = var_158
        i_1 += 1
        uint128_t zmm0_1
        zmm0_1.d = _mm_cvtepi32_ps(zx.o(rax_14)).d f* zmm1.d
        int32_t temp0_3
        int32_t temp1_1
        temp0_3:temp1_1 = muls.dp.d(0x55555556, *(*var_58:8.q + (sx.q(int.d(zmm0_1.d)) << 2)))
        var_158 = &r8_8[sx.q(rax_7)]
        *r8_8 = temp0_3 + (temp0_3 u>> 0x1f)
        float* rdx_20 = var_140
        int32_t rcx_33 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
        zmm0_1.d = (rcx_33 u>> 9 | 0x3f800000).d f- 1f
        zmm1 = _mm_sqrt_ss(0, zmm0_1.d)
        *(arg2 + 0x8c) = rcx_33 * 0xbb38435 + 0x3619636b
        var_140 = &rdx_20[sx.q(rax_8)]
        float zmm3 = ((rcx_33 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000) - 1f
        zmm0_1.d = 1f - zmm3
        *rdx_20 = 1f f- zmm1.d
        int32_t* rdx_21 = var_128
        zmm0_1.d = zmm0_1.d f* zmm1.d
        var_128 = &rdx_21[sx.q(rax_9)]
        *rdx_21 = zmm0_1.d
        float* rdx_22 = var_110
        rax_41 = sx.q(rax_11)
        var_110 = &rdx_22[rax_41]
        rcx_22 = var_108
        *rdx_22 = zmm3 f* zmm1.d
        rdx_13 = arg_20 + 4
        arg_20 = rdx_13
    while (i_1 s< *(arg2 + 0x40))
    
    return rax_41

return rax_12
