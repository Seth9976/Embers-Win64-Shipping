// 函数: sub_1407dc9c0
// 地址: 0x1407dc9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t* r9 = *(arg2 + 0x20)
int32_t r8_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
int32_t rax_1 = *r9

if (r8_1 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8_1 -= rax_1
        rcx += 1
        rax_1 = r9[rcx]
        rdx += 1
    while (r8_1 s>= rax_1)

int32_t rcx_3 = zx.d(rax[1]) & 0x7fff
void* rsi = *(*(arg2 + 0x38) + (sx.q(*(*(*(arg2 + 0x18) + (sx.q(rdx) << 3)) + sx.q(r8_1))) << 3))
int32_t var_88 = rcx_3
int32_t rax_5
rax_5.b = rcx_3 != 0x7fff
*(arg2 + 0x10) = &rax[2]
int32_t* var_78
void var_80

if (rcx_3 == 0x7fff)
    var_78 = &var_80
else
    var_78 = zx.q(rcx_3 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_7 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_70 = rcx_7
int32_t rax_6
rax_6.b = rcx_7 != 0x7fff
float* var_60
void var_68

if (rcx_7 == 0x7fff)
    var_60 = &var_68
else
    var_60 = zx.q(rcx_7 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_11 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_58 = rcx_11
int32_t rax_7
rax_7.b = rcx_11 != 0x7fff
int32_t* var_48
void var_50

if (rcx_11 == 0x7fff)
    var_48 = &var_50
else
    var_48 = zx.q(rcx_11 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_14 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
int32_t rdx_7 = rcx_14 & 0x7fff
int32_t var_40 = rdx_7
int32_t rax_9
rax_9.b = rdx_7 != 0x7fff
void* result_1
void var_38

if (rdx_7 == 0x7fff)
    result_1 = &var_38
else
    result_1 = zx.q(*(arg2 + 0x80) * rdx_7) + *(arg2 + 0x70)
int32_t rdx_8 = *(rsi + 0x17c)
int64_t* rbx = *(*(rsi + 8) + 0x50)
uint32_t rax_11 = zx.d(*(rbx + 0x5f))

if (rax_11 s>= rdx_8)
    rdx_8 = rax_11

int32_t rax_12 = sub_1423647f0(rbx, rdx_8)
int64_t* rbx_2 = *(*rbx + (sx.q(rax_12) << 3))

if (rbx_2 != 0)
    rbx_2[1].d += 1

void* var_28
void** result = sub_14229e7e0(&rbx_2[0x2f], &var_28)
int32_t i = 0

if (*(arg2 + 0x40) s> 0)
    int32_t* r10_1 = var_78
    
    do
        int32_t rcx_21 = *(rsi + 0x120)
        int32_t rax_17
        uint128_t zmm0
        
        if (rcx_21 s<= 0)
            rax_17 = 0
        else
            int32_t rax_13 = *(arg2 + 0x8c) * 0xbb38435
            zmm0 = _mm_cvtepi32_ps(zx.o(rcx_21))
            *(arg2 + 0x8c) = rax_13 + 0x3619636b
            rax_17 = int.d((((rax_13 + 0x3619636b) u>> 9 | 0x3f800000) - 1f) f* zmm0.d)
        
        int64_t rdx_10 = sx.q(*(*(rsi + 0x118) + (sx.q(rax_17) << 2)))
        int32_t rdx_14
        
        if (rdx_10.d s>= rbx_2[6].d)
            rdx_14 = 0
        else
            void* rax_19 = rbx_2[5]
            void* rcx_23 = &rbx_2[2]
            int64_t rdx_11 = rdx_10 * 3
            
            if (rax_19 != 0)
                rcx_23 = rax_19
            
            int32_t r8_2 = *(rcx_23 + (rdx_11 << 3) + 8)
            
            if (r8_2 s<= 0)
                int32_t temp1_1
                int32_t temp2_1
                temp1_1:temp2_1 = mulu.dp.d(0xaaaaaaab, *(rcx_23 + (rdx_11 << 3) + 4))
                rdx_14 = temp1_1 u>> 1
            else
                int32_t rax_20 = *(arg2 + 0x8c) * 0xbb38435
                zmm0 = _mm_cvtepi32_ps(zx.o(r8_2))
                *(arg2 + 0x8c) = rax_20 + 0x3619636b
                int32_t temp3_1
                int32_t temp4_1
                temp3_1:temp4_1 = mulu.dp.d(0xaaaaaaab, *(rcx_23 + (rdx_11 << 3) + 4))
                rdx_14 = (temp3_1 u>> 1)
                    + int.d((((rax_20 + 0x3619636b) u>> 9 | 0x3f800000) - 1f) f* zmm0.d)
        
        *r10_1 = rdx_14
        i += 1
        int32_t rcx_25 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
        zmm0.d = (rcx_25 u>> 9 | 0x3f800000).d f- 1f
        float zmm1 = _mm_sqrt_ss((zx.o(0)).d, zmm0.d)
        *(arg2 + 0x8c) = rcx_25 * 0xbb38435 + 0x3619636b
        float zmm3 = ((rcx_25 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000) - 1f
        zmm0.d = 1f - zmm3
        *var_60 = 1f - zmm1
        zmm0.d = zmm0.d f* zmm1
        *var_48 = zmm0.d
        *result_1 = zmm3 * zmm1
        r10_1 = &var_78[sx.q(rax_5)]
        var_78 = r10_1
        var_60 = &var_60[sx.q(rax_6)]
        result = result_1
        var_48 = &var_48[sx.q(rax_7)]
        result_1 = result + (sx.q(rax_9) << 2)
    while (i s< *(arg2 + 0x40))

if (rbx_2 != 0)
    result = zx.q(rbx_2[1].d)
    rbx_2[1].d -= 1
    
    if (result.d == 1)
        return (**rbx_2)(rbx_2, 1)

return result
