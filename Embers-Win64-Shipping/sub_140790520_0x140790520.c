// 函数: sub_140790520
// 地址: 0x140790520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int16_t* rax = *(arg2 + 0x10)
int32_t* r9 = *(arg2 + 0x20)
uint32_t r8 = zx.d(*rax)
*(arg2 + 0x10) = &rax[1]
int32_t r8_1 = r8 & 0x7fff
int32_t rax_1 = *r9
int32_t rdx = 0

if (r8_1 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8_1 -= rax_1
        rcx += 1
        rax_1 = r9[rcx]
        rdx += 1
    while (r8_1 s>= rax_1)

int32_t rcx_3 = zx.d(rax[1]) & 0x7fff
int32_t r14
r14.b = rcx_3 != 0x7fff
int128_t* r8_2 =
    *(*(arg2 + 0x38) + (sx.q(*(*(*(arg2 + 0x18) + (sx.q(rdx) << 3)) + sx.q(r8_1))) << 3))
int32_t var_bc = r14
*(arg2 + 0x10) = &rax[2]
int32_t var_c0 = rcx_3
int32_t* rsi_2
void var_b8

if (rcx_3 == 0x7fff)
    rsi_2 = &var_b8
else
    rsi_2 = zx.q(*(arg2 + 0x80) * rcx_3) + *(arg2 + 0x70)
int32_t* var_b0 = rsi_2
int32_t rcx_5 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_1c8 = rcx_5
int32_t rax_5
rax_5.b = rcx_5 != 0x7fff
void* var_1b8
void var_1c0

if (rcx_5 == 0x7fff)
    var_1b8 = &var_1c0
else
    var_1b8 = zx.q(rcx_5 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_9 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_1b0 = rcx_9
int32_t rax_6
rax_6.b = rcx_9 != 0x7fff
void* var_1a0
void var_1a8

if (rcx_9 == 0x7fff)
    var_1a0 = &var_1a8
else
    var_1a0 = zx.q(rcx_9 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_13 = zx.d(rax[4]) & 0x7fff
*(arg2 + 0x10) = &rax[5]
int32_t var_198 = rcx_13
int32_t rax_7
rax_7.b = rcx_13 != 0x7fff
void* var_188
void var_190

if (rcx_13 == 0x7fff)
    var_188 = &var_190
else
    var_188 = zx.q(rcx_13 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_17 = zx.d(rax[5]) & 0x7fff
*(arg2 + 0x10) = &rax[6]
int32_t var_180 = rcx_17
int32_t rax_8
rax_8.b = rcx_17 != 0x7fff
void* var_170
void var_178

if (rcx_17 == 0x7fff)
    var_170 = &var_178
else
    var_170 = zx.q(rcx_17 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_21 = zx.d(rax[6]) & 0x7fff
*(arg2 + 0x10) = &rax[7]
int32_t var_168 = rcx_21
int32_t rax_9
rax_9.b = rcx_21 != 0x7fff
void* var_158
void var_160

if (rcx_21 == 0x7fff)
    var_158 = &var_160
else
    var_158 = zx.q(rcx_21 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_25 = zx.d(rax[7]) & 0x7fff
*(arg2 + 0x10) = &rax[8]
int32_t var_150 = rcx_25
int32_t rax_10
rax_10.b = rcx_25 != 0x7fff
void* var_140
void var_148

if (rcx_25 == 0x7fff)
    var_140 = &var_148
else
    var_140 = zx.q(rcx_25 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_29 = zx.d(rax[8]) & 0x7fff
*(arg2 + 0x10) = &rax[9]
int32_t var_138 = rcx_29
int32_t rax_11
rax_11.b = rcx_29 != 0x7fff
void* var_128
void var_130

if (rcx_29 == 0x7fff)
    var_128 = &var_130
else
    var_128 = zx.q(rcx_29 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_33 = zx.d(rax[9]) & 0x7fff
*(arg2 + 0x10) = &rax[0xa]
int32_t var_120 = rcx_33
int32_t rax_12
rax_12.b = rcx_33 != 0x7fff
void* var_110
void var_118

if (rcx_33 == 0x7fff)
    var_110 = &var_118
else
    var_110 = zx.q(rcx_33 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_37 = zx.d(rax[0xa]) & 0x7fff
*(arg2 + 0x10) = &rax[0xb]
int32_t var_108 = rcx_37
int32_t rax_13
rax_13.b = rcx_37 != 0x7fff
void* var_f8
void var_100

if (rcx_37 == 0x7fff)
    var_f8 = &var_100
else
    var_f8 = zx.q(rcx_37 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_41 = zx.d(rax[0xb]) & 0x7fff
*(arg2 + 0x10) = &rax[0xc]
int32_t var_f0 = rcx_41
int32_t rax_14
rax_14.b = rcx_41 != 0x7fff
void* var_e0
void var_e8

if (rcx_41 == 0x7fff)
    var_e0 = &var_e8
else
    var_e0 = zx.q(rcx_41 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_44 = zx.d(rax[0xc])
*(arg2 + 0x10) = &rax[0xd]
int32_t rdx_15 = rcx_44 & 0x7fff
int32_t var_d8 = rdx_15
int32_t result_1
result_1.b = rdx_15 != 0x7fff
void* var_c8
void var_d0

if (rdx_15 == 0x7fff)
    var_c8 = &var_d0
else
    var_c8 = zx.q(*(arg2 + 0x80) * rdx_15) + *(arg2 + 0x70)
*r8_2
*(r8_2 + 4)
*(r8_2 + 8)
float var_a8
float* result
int32_t zmm6_1
int32_t zmm7_1
int32_t zmm8_1
int128_t zmm9
result, zmm6_1, zmm7_1, zmm8_1, zmm9 = sub_14077e760(&var_a8, r8_2 + 0xc)

if (*(arg2 + 0x40) s> 0)
    int128_t var_48_1 = zmm9
    int128_t zmm11 = var_a8
    
    while (true)
        rdi += 1
        *rsi_2 = zmm6_1
        int32_t* rdx_17 = var_1b8
        var_1b8 = &rdx_17[sx.q(rax_5)]
        *rdx_17 = zmm7_1
        int32_t* rdx_18 = var_1a0
        var_1a0 = &rdx_18[sx.q(rax_6)]
        *rdx_18 = zmm8_1
        int32_t* rdx_19 = var_188
        var_188 = &rdx_19[sx.q(rax_7)]
        *rdx_19 = zmm11.d
        int32_t* rdx_20 = var_170
        var_170 = &rdx_20[sx.q(rax_8)]
        int32_t var_a4
        *rdx_20 = var_a4.d
        int32_t* rdx_21 = var_158
        var_158 = &rdx_21[sx.q(rax_9)]
        int32_t var_a0
        *rdx_21 = var_a0.d
        int32_t* rdx_22 = var_140
        var_140 = &rdx_22[sx.q(rax_10)]
        int32_t var_88
        *rdx_22 = var_88
        int32_t* rdx_23 = var_128
        var_128 = &rdx_23[sx.q(rax_11)]
        int32_t var_84
        *rdx_23 = var_84
        int32_t* rdx_24 = var_110
        var_110 = &rdx_24[sx.q(rax_12)]
        int32_t var_80
        *rdx_24 = var_80
        int32_t* rdx_25 = var_f8
        var_f8 = &rdx_25[sx.q(rax_13)]
        int32_t var_98
        *rdx_25 = var_98
        int32_t* rdx_26 = var_e0
        var_e0 = &rdx_26[sx.q(rax_14)]
        int32_t var_94
        *rdx_26 = var_94
        int32_t* rdx_27 = var_c8
        result = sx.q(result_1)
        var_c8 = &rdx_27[result]
        int32_t var_90
        *rdx_27 = var_90
        
        if (rdi s>= *(arg2 + 0x40))
            break
        
        rsi_2 = &rsi_2[sx.q(r14)]
        r14 = var_bc

return result
