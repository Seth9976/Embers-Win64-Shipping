// 函数: sub_1407dc330
// 地址: 0x1407dc330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t* r9 = *(arg2 + 0x20)
*(arg2 + 0x10) = &rax[1]
int32_t r8_1 = zx.d(*rax) & 0x7fff
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
void* rsi = *(*(arg2 + 0x38) + (sx.q(*(*(*(arg2 + 0x18) + (sx.q(rdx) << 3)) + sx.q(r8_1))) << 3))
int32_t var_98 = rcx_3
int32_t rax_5
rax_5.b = rcx_3 != 0x7fff
*(arg2 + 0x10) = &rax[2]
int32_t* var_88
void var_90

if (rcx_3 == 0x7fff)
    var_88 = &var_90
else
    var_88 = zx.q(rcx_3 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_7 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_80 = rcx_7
int32_t rax_6
rax_6.b = rcx_7 != 0x7fff
int32_t* var_70
void var_78

if (rcx_7 == 0x7fff)
    var_70 = &var_78
else
    var_70 = zx.q(rcx_7 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_11 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_68 = rcx_11
int32_t rax_7
rax_7.b = rcx_11 != 0x7fff
int32_t* var_58
void var_60

if (rcx_11 == 0x7fff)
    var_58 = &var_60
else
    var_58 = zx.q(rcx_11 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_14 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
int32_t rdx_7 = rcx_14 & 0x7fff
int32_t var_50 = rdx_7
int32_t rax_9
rax_9.b = rdx_7 != 0x7fff
void* result_1
void var_48

if (rdx_7 == 0x7fff)
    result_1 = &var_48
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

void* var_38
void** result = sub_14229e7e0(&rbx_2[0x2f], &var_38)
int32_t i = 0

if (*(arg2 + 0x40) s> 0)
    int32_t* r12_1 = var_88
    
    do
        int32_t r10_2 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
        *(arg2 + 0x8c) = r10_2 * 0xbb38435 + 0x3619636b
        void* rax_20 = *(rsi + 0x130)
        uint128_t zmm1
        zmm1.d = ((r10_2 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
        zmm1.d = zmm1.d f* _mm_cvtepi32_ps(zx.o(*(rsi + 0x138))).d
        int32_t rcx_21 = int.d(zmm1.d)
        
        if ((rax_20.b & 1) != 0)
            rax_20 = (rax_20 s>> 1) + rsi + 0x130
        
        uint128_t zmm0
        zmm0.d = (r10_2 u>> 9 | 0x3f800000).d f- 1f
        int64_t rdx_10 = sx.q(rcx_21)
        
        if (not(zmm0.d f< *(rax_20 + (rdx_10 << 2))))
            void* rax_22 = *(rsi + 0x140)
            
            if ((rax_22.b & 1) != 0)
                rax_22 = (rax_22 s>> 1) + rsi + 0x140
            
            rcx_21 = *(rax_22 + (rdx_10 << 2))
        
        int64_t rdx_11 = sx.q(*(*(rsi + 0x118) + (sx.q(rcx_21) << 2)))
        int32_t rdx_15
        
        if (rdx_11.d s>= rbx_2[6].d || rdx_11.d s>= rbx_2[0x56].d)
            rdx_15 = 0
        else
            void* rax_25 = rbx_2[5]
            void* r9_1 = &rbx_2[2]
            int64_t r11_1 = rdx_11 * 3
            
            if (rax_25 != 0)
                r9_1 = rax_25
            
            void* rax_26 = rbx_2[0x55]
            
            if ((rax_26.b & 1) != 0)
                rax_26 = (rax_26 s>> 1) + &rbx_2[0x55]
            
            int64_t rdx_12 = rdx_11 << 6
            
            if (*(rdx_12 + rax_26 + 0x10) s<= 0)
                int32_t temp1_1
                int32_t temp2_1
                temp1_1:temp2_1 = mulu.dp.d(0xaaaaaaab, *(r9_1 + (r11_1 << 3) + 4))
                rdx_15 = temp1_1 u>> 1
            else
                *(arg2 + 0x8c) = (0x9d6f2492 - r10_2 * 0x4b9b4d07) * 0xbb38435 + 0x3619636b
                void* rax_36 = rbx_2[0x55]
                
                if ((rax_36.b & 1) != 0)
                    rax_36 = (rax_36 s>> 1) + &rbx_2[0x55]
                
                void* r10_4 = rdx_12 + 8 + rax_36
                zmm1 = _mm_cvtepi32_ps(zx.o(*(rdx_12 + rax_36 + 0x10)))
                void* rcx_25 = *r10_4
                zmm0.d = (((0x9d6f2492 - r10_2 * 0x4b9b4d07) * 0xbb38435 + 0x3619636b) u>> 9
                    | 0x3f800000).d f- 1f
                zmm1.d = zmm1.d f* zmm0.d
                int32_t r8_3 = int.d(zmm1.d)
                
                if ((rcx_25.b & 1) != 0)
                    rcx_25 = (rcx_25 s>> 1) + r10_4
                
                zmm0.d = ((0x9d6f2492 - r10_2 * 0x4b9b4d07) u>> 9 | 0x3f800000).d f- 1f
                int64_t r10_5 = sx.q(r8_3)
                
                if (not(zmm0.d f< *(rcx_25 + (r10_5 << 2))))
                    void* rcx_28 = rdx_12 + 0x18 + rax_36
                    void* rax_38 = *rcx_28
                    
                    if ((rax_38.b & 1) != 0)
                        rax_38 = (rax_38 s>> 1) + rcx_28
                    
                    r8_3 = *(rax_38 + (r10_5 << 2))
                
                int32_t temp3_1
                int32_t temp4_1
                temp3_1:temp4_1 = mulu.dp.d(0xaaaaaaab, *(r9_1 + (r11_1 << 3) + 4))
                rdx_15 = (temp3_1 u>> 1) + r8_3
        
        *r12_1 = rdx_15
        i += 1
        int32_t rcx_30 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
        zmm0.d = (rcx_30 u>> 9 | 0x3f800000).d f- 1f
        int32_t temp0_3 = _mm_sqrt_ss((zx.o(0)).d, zmm0.d)
        *(arg2 + 0x8c) = rcx_30 * 0xbb38435 + 0x3619636b
        float zmm2 = ((rcx_30 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000) - 1f
        zmm1.d = 1f f- temp0_3
        zmm0.d = 1f - zmm2
        *var_70 = zmm1.d
        zmm0.d = zmm0.d f* temp0_3
        *var_58 = zmm0.d
        *result_1 = temp0_3 f* zmm2
        r12_1 = &var_88[sx.q(rax_5)]
        var_88 = r12_1
        var_70 = &var_70[sx.q(rax_6)]
        result = result_1
        var_58 = &var_58[sx.q(rax_7)]
        result_1 = result + (sx.q(rax_9) << 2)
    while (i s< *(arg2 + 0x40))

if (rbx_2 != 0)
    result = zx.q(rbx_2[1].d)
    rbx_2[1].d -= 1
    
    if (result.d == 1)
        return (**rbx_2)(rbx_2, 1)

return result
