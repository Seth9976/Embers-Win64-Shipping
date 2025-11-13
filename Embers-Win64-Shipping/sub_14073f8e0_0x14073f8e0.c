// 函数: sub_14073f8e0
// 地址: 0x14073f8e0
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
int32_t var_178 = rdx_7
int32_t rax_7
rax_7.b = rdx_7 != 0x7fff
void* var_168
void var_170

if (rdx_7 == 0x7fff)
    var_168 = &var_170
else
    var_168 = zx.q(*(arg2 + 0x80) * rdx_7) + *(arg2 + 0x70)
int32_t rcx_9 = zx.d(rax_6[1]) & 0x7fff
*(arg2 + 0x10) = &rax_6[2]
int32_t var_160 = rcx_9
int32_t rax_8
rax_8.b = rcx_9 != 0x7fff
void* var_150
void var_158

if (rcx_9 == 0x7fff)
    var_150 = &var_158
else
    var_150 = zx.q(rcx_9 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_13 = zx.d(rax_6[2]) & 0x7fff
*(arg2 + 0x10) = &rax_6[3]
int32_t var_148 = rcx_13
int32_t rax_9
rax_9.b = rcx_13 != 0x7fff
int32_t* var_138
void var_140

if (rcx_13 == 0x7fff)
    var_138 = &var_140
else
    var_138 = zx.q(rcx_13 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_16 = zx.d(rax_6[3])
*(arg2 + 0x10) = &rax_6[4]
int32_t rdx_11 = rcx_16 & 0x7fff
int32_t var_130 = rdx_11
int32_t rax_11
rax_11.b = rdx_11 != 0x7fff
void* var_120
void var_128

if (rdx_11 == 0x7fff)
    var_120 = &var_128
else
    var_120 = zx.q(*(arg2 + 0x80) * rdx_11) + *(arg2 + 0x70)
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
            void* rdx_28 = var_168
            i += 1
            var_168 = rdx_28 + (sx.q(rax_7) << 2)
            *rdx_28 = 0xffffffff
            void* rdx_29 = var_150
            var_150 = rdx_29 + (sx.q(rax_8) << 2)
            *rdx_29 = 0
            int32_t* rdx_30 = var_138
            var_138 = &rdx_30[sx.q(rax_9)]
            *rdx_30 = 0
            void* rdx_31 = var_120
            rax_12 = sx.q(rax_11)
            var_120 = rdx_31 + (rax_12 << 2)
            *rdx_31 = 0
        while (i s< *(arg2 + 0x40))
else if (rax_12.d s> 0)
    int32_t* rax_13 = var_e8
    int32_t* r12 = var_b8
    int32_t* r13 = var_d0
    int64_t rcx_22 = sx.q(var_e0) << 2
    int64_t rdx_14 = sx.q(var_c8) << 2
    int64_t r8_4 = sx.q(var_b0) << 2
    int64_t r15 = 0
    int64_t var_108 = r8_4
    int64_t var_118 = rcx_22
    int64_t var_110 = rdx_14
    
    do
        int32_t r10_1 = *r12
        int32_t rsi_1 = *r13
        r12 += r8_4
        int32_t r14_1 = *rax_13
        r13 += rdx_14
        uint128_t zmm2
        
        if (r10_1 == 0xffffffff)
            int32_t rax_23 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
            *(arg2 + 0x8c) = rax_23
            zmm2.d = (rax_23 u>> 9 | 0x3f800000).d f- 1f
        else
            int32_t* rcx_24 = *(arg2 + 0x90)
            int32_t rdx_15 = *(rcx_24 + r15)
            *(rcx_24 + r15) = rdx_15 + 1
            int32_t r9_2 = r14_1 * 0x19660d + (rsi_1 * 0x19660d + 0x3c6ef35f)
                * ((r10_1 << 0x10 | rdx_15) * 0x19660d + 0x3c6ef35f) + 0x3c6ef35f
            int32_t rcx_33 = ((r10_1 << 0x10 | rdx_15) * 0x19660d + 0x3c6ef35f) * r9_2
                + rsi_1 * 0x19660d + 0x3c6ef35f
            zmm2.d = _mm_cvtepi32_ps(zx.o((
                (rcx_33 * r9_2 + (r10_1 << 0x10 | rdx_15) * 0x19660d + 0x3c6ef35f) * rcx_33 + r9_2)
                s>> 8) & 0xffffff).d f* 5.96046448e-08f
        
        uint128_t zmm1
        
        if (r10_1 == 0xffffffff)
            int32_t rax_35 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
            *(arg2 + 0x8c) = rax_35
            zmm1.d = (rax_35 u>> 9 | 0x3f800000).d f- 1f
        else
            int32_t* rcx_34 = *(arg2 + 0x90)
            int32_t rdx_18 = *(rcx_34 + r15)
            *(rcx_34 + r15) = rdx_18 + 1
            int32_t r9_4 = r14_1 * 0x19660d + ((r10_1 << 0x10 | rdx_18) * 0x19660d + 0x3c6ef35f)
                * (rsi_1 * 0x19660d + 0x3c6ef35f) + 0x3c6ef35f
            int32_t rcx_40 = ((r10_1 << 0x10 | rdx_18) * 0x19660d + 0x3c6ef35f) * r9_4
                + rsi_1 * 0x19660d + 0x3c6ef35f
            zmm1.d = _mm_cvtepi32_ps(zx.o((
                (rcx_40 * r9_4 + (r10_1 << 0x10 | rdx_18) * 0x19660d + 0x3c6ef35f) * rcx_40 + r9_4)
                s>> 8) & 0xffffff).d f* 5.96046448e-08f
        
        int64_t* rdx_21 = var_58:8.q
        void* rax_38 = rdx_21[7]
        uint128_t zmm0_1
        zmm0_1.d = _mm_cvtepi32_ps(zx.o(rdx_21[8].d)).d f* zmm1.d
        int32_t r8_9 = int.d(zmm0_1.d)
        
        if ((rax_38.b & 1) != 0)
            rax_38 = (rax_38 s>> 1) + &rdx_21[7]
        
        int64_t r9_5 = sx.q(r8_9)
        
        if (not(zmm2.d f< *(rax_38 + (r9_5 << 2))))
            void* rax_40 = rdx_21[9]
            
            if ((rax_40.b & 1) != 0)
                rax_40 = (rax_40 s>> 1) + &rdx_21[9]
            
            r8_9 = *(rax_40 + (r9_5 << 2))
        
        int32_t* r8_10 = var_168
        i_1 += 1
        r15 += 4
        int32_t temp0_4
        int32_t temp1_1
        temp0_4:temp1_1 = muls.dp.d(0x55555556, *(*rdx_21 + (sx.q(r8_9) << 2)))
        var_168 = &r8_10[sx.q(rax_7)]
        *r8_10 = temp0_4 + (temp0_4 u>> 0x1f)
        int32_t* rdx_25 = var_150
        r8_4 = var_108
        int32_t rcx_46 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
        zmm0_1.d = (rcx_46 u>> 9 | 0x3f800000).d f- 1f
        zmm1 = _mm_sqrt_ss(0, zmm0_1.d)
        *(arg2 + 0x8c) = rcx_46 * 0xbb38435 + 0x3619636b
        var_150 = &rdx_25[sx.q(rax_8)]
        float zmm3 = ((rcx_46 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000) - 1f
        zmm2.d = 1f f- zmm1.d
        zmm0_1.d = 1f - zmm3
        *rdx_25 = zmm2.d
        int32_t* rdx_26 = var_138
        zmm0_1.d = zmm0_1.d f* zmm1.d
        var_138 = &rdx_26[sx.q(rax_9)]
        *rdx_26 = zmm0_1.d
        float* rdx_27 = var_120
        rax_13 += rcx_22
        var_120 = &rdx_27[sx.q(rax_11)]
        rcx_22 = var_118
        *rdx_27 = zmm3 f* zmm1.d
        rdx_14 = var_110
    while (i_1 s< *(arg2 + 0x40))
    
    return rax_13

return rax_12
