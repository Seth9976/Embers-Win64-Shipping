// 函数: sub_1407ff0b0
// 地址: 0x1407ff0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 0
int32_t r9 = 0
int16_t* rax = *(arg2 + 0x10)
int32_t* r8 = *(arg2 + 0x20)
uint32_t rdx = zx.d(*rax)
*(arg2 + 0x10) = &rax[1]
int32_t rdx_1 = rdx & 0x7fff
int32_t rax_1 = *r8

if (rdx_1 s>= rax_1)
    int64_t rcx = 0
    
    do
        rdx_1 -= rax_1
        rcx += 1
        rax_1 = r8[rcx]
        r9 += 1
    while (rdx_1 s>= rax_1)

int64_t r10 = *(arg2 + 0x18)
void* r15 = *(*(arg2 + 0x38) + (sx.q(*(*(r10 + (sx.q(r9) << 3)) + sx.q(rdx_1))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint32_t rax_6 = rax_5 u>> 0xf
int32_t rcx_3 = rax_5 & 0x7fff
uint32_t arg_10 = rax_6
rax_6.b = not.b(rax_6.b)
int32_t* r14_1

if ((rax_6.b & 1) == 0)
    r14_1 = zx.q(*(arg2 + 0x80) * rcx_3) + *(arg2 + 0x70)
else
    int32_t rax_7 = *r8
    int32_t r9_1 = 0
    
    if (rcx_3 s>= rax_7)
        int64_t rdx_3 = 0
        
        do
            rcx_3 -= rax_7
            rdx_3 += 1
            rax_7 = r8[rdx_3]
            r9_1 += 1
        while (rcx_3 s>= rax_7)
    
    r14_1 = sx.q(rcx_3) + *(r10 + (sx.q(r9_1) << 3))

uint32_t rax_9 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]
uint32_t rax_10 = rax_9 u>> 0xf
int32_t rcx_5 = rax_9 & 0x7fff
uint32_t arg_18 = rax_10
rax_10.b = not.b(rax_10.b)
int32_t* rdx_6

if ((rax_10.b & 1) == 0)
    rdx_6 = zx.q(*(arg2 + 0x80) * rcx_5) + *(arg2 + 0x70)
else
    int32_t rax_11 = *r8
    int32_t r9_2 = 0
    
    if (rcx_5 s>= rax_11)
        int64_t rdx_4 = 0
        
        do
            rcx_5 -= rax_11
            rdx_4 += 1
            rax_11 = r8[rdx_4]
            r9_2 += 1
        while (rcx_5 s>= rax_11)
    
    rdx_6 = sx.q(rcx_5) + *(r10 + (sx.q(r9_2) << 3))

uint32_t rax_13 = zx.d(rax[3])
int32_t* var_108 = rdx_6
uint32_t rax_14 = rax_13 u>> 0xf
int32_t i = rax_13 & 0x7fff
uint32_t arg_20 = rax_14
rax_14.b = not.b(rax_14.b)
*(arg2 + 0x10) = &rax[4]
int128_t* rdx_11

if ((rax_14.b & 1) == 0)
    rdx_11 = zx.q(*(arg2 + 0x80) * i) + *(arg2 + 0x70)
else
    int32_t r9_3 = 0
    
    if (i s>= *r8)
        int64_t rax_15 = 0
        int32_t* rdx_9 = nullptr
        
        do
            i -= *(rdx_9 + r8)
            rax_15 += 1
            rdx_9 = rax_15 << 2
            r9_3 += 1
        while (i s>= *(rdx_9 + r8))
    
    rdx_11 = sx.q(i) + *(r10 + (sx.q(r9_3) << 3))

uint32_t rax_17 = zx.d(rax[4])
int128_t* var_100 = rdx_11
uint8_t r13_1 = (rax_17 u>> 0xf).b
*(arg2 + 0x10) = &rax[5]
int32_t rcx_8 = rax_17 & 0x7fff
int128_t* r12_1

if ((not.b(r13_1) & 1) == 0)
    r12_1 = zx.q(*(arg2 + 0x80) * rcx_8) + *(arg2 + 0x70)
else
    int32_t rax_19 = *r8
    int32_t r9_4 = 0
    
    if (rcx_8 s>= rax_19)
        int64_t rdx_14 = 0
        
        do
            rcx_8 -= rax_19
            rdx_14 += 1
            rax_19 = r8[rdx_14]
            r9_4 += 1
        while (rcx_8 s>= rax_19)
    
    r12_1 = sx.q(rcx_8) + *(r10 + (sx.q(r9_4) << 3))

int32_t rcx_10 = zx.d(rax[5]) & 0x7fff
*(arg2 + 0x10) = &rax[6]
int32_t var_f8 = rcx_10
int32_t rax_21
rax_21.b = rcx_10 != 0x7fff
void* var_e8
void var_f0

if (rcx_10 == 0x7fff)
    var_e8 = &var_f0
else
    var_e8 = zx.q(rcx_10 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_14 = zx.d(rax[6]) & 0x7fff
*(arg2 + 0x10) = &rax[7]
int32_t var_e0 = rcx_14
int32_t rax_22
rax_22.b = rcx_14 != 0x7fff
int32_t* var_d0
void var_d8

if (rcx_14 == 0x7fff)
    var_d0 = &var_d8
else
    var_d0 = zx.q(rcx_14 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_18 = zx.d(rax[7]) & 0x7fff
*(arg2 + 0x10) = &rax[8]
int32_t var_c8 = rcx_18
int32_t rax_23
rax_23.b = rcx_18 != 0x7fff
void* var_b8
void var_c0

if (rcx_18 == 0x7fff)
    var_b8 = &var_c0
else
    var_b8 = zx.q(rcx_18 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_21 = zx.d(rax[8])
*(arg2 + 0x10) = &rax[9]
int32_t rdx_19 = rcx_21 & 0x7fff
int32_t var_b0 = rdx_19
int32_t result_2
result_2.b = rdx_19 != 0x7fff
void* result_1
void var_a8

if (rdx_19 == 0x7fff)
    result_1 = &var_a8
else
    result_1 = zx.q(*(arg2 + 0x80) * rdx_19) + *(arg2 + 0x70)
void* result = *(r15 + 8)
int64_t* rbx = nullptr
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2
uint128_t zmm3

if (result == 0)
label_1407ff710:
    zmm0 = data_14399f5c0.d
    zmm1 = data_14399f5c0:4.d
    zmm2 = data_14399f5c0:8.d
    zmm3 = data_14399f5c0:0xc.d
    
    if (*(arg2 + 0x40) s> 0)
        do
            int32_t* rdx_30 = var_e8
            i_1 += 1
            var_e8 = &rdx_30[sx.q(rax_21)]
            *rdx_30 = zmm0.d
            int32_t* rdx_31 = var_d0
            var_d0 = &rdx_31[sx.q(rax_22)]
            *rdx_31 = zmm1.d
            int32_t* rdx_32 = var_b8
            var_b8 = &rdx_32[sx.q(rax_23)]
            *rdx_32 = zmm2.d
            int32_t* result_4 = result_1
            result = sx.q(result_2)
            result_1 = &result_4[result]
            *result_4 = zmm3.d
        while (i_1 s< *(arg2 + 0x40))
else
    int64_t* rbx_1 = *(result + 0x50)
    int32_t rdx_20 = *(r15 + 0x17c)
    uint32_t rax_25 = zx.d(*(rbx_1 + 0x5f))
    
    if (rax_25 s>= rdx_20)
        rdx_20 = rax_25
    
    result = sub_1423647f0(rbx_1, rdx_20)
    rbx = *(*rbx_1 + (sx.q(result.d) << 3))
    
    if (rbx == 0)
        goto label_1407ff710
    
    rbx[1].d += 1
    
    if (*(rbx + 0x16c) u<= 0)
        goto label_1407ff710
    
    void* var_98
    sub_14229e7e0(&rbx[0x2f], &var_98)
    int32_t var_90
    int32_t temp2_1
    int32_t result_3
    temp2_1:result_3 = muls.dp.d(0x55555556, var_90)
    result = zx.q(result_3)
    
    if (*(arg2 + 0x40) s> 0)
        arg_18.q = zx.q(arg_18.b) << 2
        arg_20.q = zx.q(arg_20.b) << 2
        int128_t zmm6
        int128_t var_48_1 = zmm6
        int128_t zmm7
        int128_t var_58_1 = zmm7
        uint128_t zmm8
        uint128_t var_68_1 = zmm8
        arg_10.q = var_e8
        
        do
            int64_t rcx_28 = sx.q(mods.dp.d(sx.q(*r14_1), var_90 s/ 3) * 3)
            void* rax_38 = var_98
            char var_8c
            uint32_t r11_5
            
            if (var_8c == 0)
                r11_5 = zx.d(*(rax_38 + (rcx_28 << 1)))
            else
                r11_5 = *(rax_38 + (rcx_28 << 2))
            
            uint32_t r9_5
            
            if (var_8c == 0)
                r9_5 = zx.d(*(rax_38 + (rcx_28 << 1) + 2))
            else
                r9_5 = *(rax_38 + (rcx_28 << 2) + 4)
            
            uint32_t r8_1
            
            if (var_8c == 0)
                r8_1 = zx.d(*(rax_38 + (rcx_28 << 1) + 4))
            else
                r8_1 = *(rax_38 + (rcx_28 << 2) + 8)
            
            int32_t rdx_26 = rbx[0x2d].d
            int64_t rcx_29 = rbx[0x2c]
            zmm7 = *r12_1
            char* r9_7 = zx.q(r9_5 * rdx_26) + rcx_29
            char* r10_3 = zx.q(rdx_26 * r8_1) + rcx_29
            char* r8_3 = zx.q(rdx_26 * r11_5) + rcx_29
            int32_t zmm5 = *var_108
            zmm6 = *var_100
            uint32_t rax_40 = zx.d(r9_7[2])
            zmm8 = _mm_cvtepi32_ps(zx.o(r8_3[2]))
            uint32_t rax_41 = zx.d(r10_3[2])
            zmm0 = _mm_cvtepi32_ps(zx.o(rax_40))
            uint32_t rax_42 = zx.d(r8_3[1])
            zmm0.d = zmm0.d f* 0.00392156886f
            zmm0.d = zmm0.d f* zmm6.d
            zmm1.d = _mm_cvtepi32_ps(zx.o(rax_41)).d f* 0.00392156886f
            uint32_t rax_43 = zx.d(r9_7[1])
            zmm1.d = zmm1.d f* zmm7.d
            zmm8.d = zmm8.d f* 0.00392156886f
            uint128_t zmm4
            zmm4.d = _mm_cvtepi32_ps(zx.o(rax_42)).d f* 0.00392156886f
            zmm8.d = zmm8.d f* zmm5
            zmm4.d = zmm4.d f* zmm5
            zmm8.d = zmm8.d f+ zmm0.d
            uint32_t rax_44 = zx.d(r10_3[1])
            zmm0 = _mm_cvtepi32_ps(zx.o(rax_43))
            zmm8.d = zmm8.d f+ zmm1.d
            uint32_t rax_45 = zx.d(*r8_3)
            zmm0.d = zmm0.d f* 0.00392156886f
            zmm0.d = zmm0.d f* zmm6.d
            zmm1.d = _mm_cvtepi32_ps(zx.o(rax_44)).d f* 0.00392156886f
            zmm4.d = zmm4.d f+ zmm0.d
            uint32_t rax_46 = zx.d(*r9_7)
            zmm1.d = zmm1.d f* zmm7.d
            zmm3 = _mm_cvtepi32_ps(zx.o(rax_45))
            zmm4.d = zmm4.d f+ zmm1.d
            uint32_t rax_47 = zx.d(*r10_3)
            zmm0 = _mm_cvtepi32_ps(zx.o(rax_46))
            uint32_t rax_48 = zx.d(r8_3[3])
            zmm0.d = zmm0.d f* 0.00392156886f
            zmm0.d = zmm0.d f* zmm6.d
            zmm1.d = _mm_cvtepi32_ps(zx.o(rax_47)).d f* 0.00392156886f
            zmm3.d = zmm3.d f* 0.00392156886f
            zmm1.d = zmm1.d f* zmm7.d
            uint32_t rax_49 = zx.d(r9_7[3])
            zmm3.d = zmm3.d f* zmm5
            zmm2.d = _mm_cvtepi32_ps(zx.o(rax_48)).d f* 0.00392156886f
            zmm3.d = zmm3.d f+ zmm0.d
            uint32_t rax_50 = zx.d(r10_3[3])
            zmm3.d = zmm3.d f+ zmm1.d
            zmm2.d = zmm2.d f* zmm5
            zmm0.d = _mm_cvtepi32_ps(zx.o(rax_49)).d f* 0.00392156886f
            zmm0.d = zmm0.d f* zmm6.d
            zmm1.d = _mm_cvtepi32_ps(zx.o(rax_50)).d f* 0.00392156886f
            zmm2.d = zmm2.d f+ zmm0.d
            r14_1 = &r14_1[zx.q(arg_10.b)]
            i_1 += 1
            r12_1 += zx.q(r13_1) << 2
            var_100 += arg_20.q
            *arg_10.q = zmm8.d
            zmm1.d = zmm1.d f* zmm7.d
            var_108 += arg_18.q
            *var_d0 = zmm4.d
            zmm2.d = zmm2.d f+ zmm1.d
            *var_b8 = zmm3.d
            *result_1 = zmm2.d
            void* r8_4 = var_e8 + (sx.q(rax_21) << 2)
            arg_10.q = r8_4
            var_e8 = r8_4
            var_d0 = &var_d0[sx.q(rax_22)]
            result = result_1
            var_b8 += sx.q(rax_23) << 2
            result_1 = result + (sx.q(result_2) << 2)
        while (i_1 s< *(arg2 + 0x40))

if (rbx != 0)
    result = zx.q(rbx[1].d)
    rbx[1].d -= 1
    
    if (result.d == 1)
        return (**rbx)(rbx, 1)

return result
