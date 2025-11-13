// 函数: sub_1408071a0
// 地址: 0x1408071a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
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
void* r9_1 = *(*(arg2 + 0x38) + (sx.q(*(*(*(arg2 + 0x18) + (sx.q(rdx) << 3)) + sx.q(r8_1))) << 3))
int32_t rax_5
rax_5.b = rcx_3 != 0x7fff
int32_t var_78 = rcx_3
*(arg2 + 0x10) = &rax[2]
int32_t* var_68
void var_70

if (rcx_3 == 0x7fff)
    var_68 = &var_70
else
    var_68 = zx.q(rcx_3 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_7 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_60 = rcx_7
int32_t rax_6
rax_6.b = rcx_7 != 0x7fff
int32_t* var_50
void var_58

if (rcx_7 == 0x7fff)
    var_50 = &var_58
else
    var_50 = zx.q(rcx_7 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_11 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_d8 = rcx_11
int32_t r10_1
r10_1.b = rcx_11 != 0x7fff
int32_t var_d4 = r10_1
int32_t* rdx_7
void var_d0

if (rcx_11 == 0x7fff)
    rdx_7 = &var_d0
else
    rdx_7 = zx.q(*(arg2 + 0x80) * rcx_11) + *(arg2 + 0x70)
int32_t* var_c8 = rdx_7
int32_t rcx_13 = zx.d(rax[4]) & 0x7fff
*(arg2 + 0x10) = &rax[5]
int32_t var_c0 = rcx_13
int32_t rax_7
rax_7.b = rcx_13 != 0x7fff
void* var_b0
void var_b8

if (rcx_13 == 0x7fff)
    var_b0 = &var_b8
else
    var_b0 = zx.q(rcx_13 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_17 = zx.d(rax[5]) & 0x7fff
*(arg2 + 0x10) = &rax[6]
int32_t var_a8 = rcx_17
int32_t rax_8
rax_8.b = rcx_17 != 0x7fff
int32_t* var_98
void var_a0

if (rcx_17 == 0x7fff)
    var_98 = &var_a0
else
    var_98 = zx.q(rcx_17 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_20 = zx.d(rax[6])
*(arg2 + 0x10) = &rax[7]
int32_t r8_6 = rcx_20 & 0x7fff
int32_t var_90 = r8_6
int64_t result
result.b = r8_6 != 0x7fff
int32_t result_1 = result.d
int64_t result_2

if (r8_6 == 0x7fff)
    void var_88
    result = &var_88
    result_2 = &var_88
else
    result_2 = zx.q(*(arg2 + 0x80) * r8_6) + *(arg2 + 0x70)

void* rbx = *(r9_1 + 8)

if (rbx != 0)
    int64_t* rbx_1 = *(rbx + 0x50)
    int32_t rdx_10 = *(r9_1 + 0x17c)
    int64_t* r14_1 = *(r9_1 + 0x168)
    uint32_t rax_13 = zx.d(*(rbx_1 + 0x5f))
    
    if (rax_13 s>= rdx_10)
        rdx_10 = rax_13
    
    int32_t rax_14 = sub_1423647f0(rbx_1, rdx_10)
    int64_t* rbx_3 = *(*rbx_1 + (sx.q(rax_14) << 3))
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    void* var_48
    result = sub_14229e7e0(&rbx_3[0x2f], &var_48)
    
    if (*(arg2 + 0x40) s> 0)
        int32_t* rdx_12 = var_68
        int32_t* r8_8 = var_50
        int32_t* r12_1 = var_c8
        
        do
            uint128_t zmm0 = zx.o(*rdx_12)
            int64_t rdi_1 = r14_1[2]
            int32_t r9_3 = r14_1[3].d - 1
            uint128_t zmm1
            zmm1.d = _mm_cvtepi32_ps(zx.o(*r8_8)).d f* 255f
            zmm0.d = _mm_cvtepi32_ps(zmm0).d f* 255f
            zmm1.d = zmm1.d f+ 0.5f
            int64_t rcx_31 = int.q(zmm0.d)
            int32_t r11_1 = (int.q(zmm1.d)).d
            int32_t rdx_13 = r11_1 + rcx_31.d
            int32_t j
            
            do
                int32_t rax_15 = r9_3
                
                if (rcx_31.d u< r9_3)
                    rax_15 = rcx_31.d
                
                rcx_31 = sx.q(rax_15)
                int32_t rdx_14
                
                if (rdx_13 u>= rcx_31.d)
                    int32_t rax_16 = r9_3
                    
                    if (rdx_13 u< r9_3)
                        rax_16 = rdx_13
                    
                    rdx_14 = rax_16
                else
                    rdx_14 = rcx_31.d
                
                int32_t r8_9
                
                if (rdx_14 u>= r9_3)
                    r8_9 = r14_1[1].d
                else
                    r8_9 = *(rdi_1 + (sx.q(rdx_14) << 2) + 4)
                
                j = r8_9 - *(rdi_1 + (rcx_31 << 2))
                
                if (j != 0)
                    break
                
                int32_t rax_18 = (rcx_31 - 1).d
                
                if (rcx_31.d == 0)
                    rax_18 = rcx_31.d
                
                r11_1 += 1
                rcx_31 = zx.q(rax_18)
                rdx_13 = rax_18 + r11_1
            while (j == 0)
            
            i += 1
            int32_t rax_20 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
            *(arg2 + 0x8c) = rax_20
            zmm1.d = (rax_20 u>> 9 | 0x3f800000).d f- 1f
            zmm0.d = float.s(zx.q(j))
            zmm1.d = zmm1.d f* zmm0.d
            *r12_1 =
                *(*r14_1 + (sx.q((int.q(zmm1.d)).d + *(r14_1[2] + (sx.q(rcx_31.d) << 2))) << 2))
            int32_t rcx_36 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
            zmm0.d = (rcx_36 u>> 9 | 0x3f800000).d f- 1f
            int32_t temp0_3 = _mm_sqrt_ss((zx.o(0)).d, zmm0.d)
            *(arg2 + 0x8c) = rcx_36 * 0xbb38435 + 0x3619636b
            float zmm2 = ((rcx_36 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000) - 1f
            zmm1.d = 1f f- temp0_3
            zmm0.d = 1f - zmm2
            *var_b0 = zmm1.d
            zmm0.d = zmm0.d f* temp0_3
            *var_98 = zmm0.d
            *result_2 = temp0_3 f* zmm2
            rdx_12 = &var_68[sx.q(rax_5)]
            var_68 = rdx_12
            r8_8 = &var_50[sx.q(rax_6)]
            var_50 = r8_8
            r12_1 = &var_c8[sx.q(var_d4)]
            var_c8 = r12_1
            var_b0 += sx.q(rax_7) << 2
            result = result_2
            var_98 = &var_98[sx.q(rax_8)]
            result_2 = result + (sx.q(result_1) << 2)
        while (i s< *(arg2 + 0x40))
    
    if (rbx_3 != 0)
        int32_t r9_4 = rbx_3[1].d
        rbx_3[1].d -= 1
        
        if (r9_4 == 1)
            return (**rbx_3)(rbx_3, zx.q(r9_4))
else
    int32_t r8_7 = 0
    
    if (*(arg2 + 0x40) s> 0)
        while (true)
            r8_7 += 1
            *rdx_7 = 0xffffffff
            int32_t* rdx_8 = var_b0
            var_b0 = &rdx_8[sx.q(rax_7)]
            *rdx_8 = 0
            int32_t* rdx_9 = var_98
            var_98 = &rdx_9[sx.q(rax_8)]
            *rdx_9 = 0
            int32_t* result_3 = result_2
            result = sx.q(result_1)
            result_2 = &result_3[result]
            *result_3 = 0
            
            if (r8_7 s>= *(arg2 + 0x40))
                break
            
            rdx_7 = &rdx_7[sx.q(r10_1)]
            r10_1 = var_d4

return result
