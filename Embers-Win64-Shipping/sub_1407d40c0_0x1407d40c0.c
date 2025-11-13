// 函数: sub_1407d40c0
// 地址: 0x1407d40c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_1 = 0
int32_t r9 = 0
int32_t* r8 = *(arg2 + 0x20)
int32_t rdx_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
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
void* r11 = *(*(arg2 + 0x38) + (sx.q(*(*(r10 + (sx.q(r9) << 3)) + sx.q(rdx_1))) << 3))
uint32_t rax_5 = zx.d(rax[1])
uint32_t rax_6 = rax_5 u>> 0xf
int32_t rcx_3 = rax_5 & 0x7fff
uint32_t arg_10 = rax_6
rax_6.b = not.b(rax_6.b)
*(arg2 + 0x10) = &rax[2]
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
int32_t* var_158 = rdx_6
uint32_t rax_14 = rax_13 u>> 0xf
int32_t i = rax_13 & 0x7fff
uint32_t arg_20 = rax_14
rax_14.b = not.b(rax_14.b)
*(arg2 + 0x10) = &rax[4]
int32_t* rdx_11

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
int32_t* var_150 = rdx_11
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
int32_t var_148 = rcx_10
int32_t r8_1
r8_1.b = rcx_10 != 0x7fff
int32_t var_144 = r8_1
float* rdx_17
void var_140

if (rcx_10 == 0x7fff)
    rdx_17 = &var_140
else
    rdx_17 = zx.q(*(arg2 + 0x80) * rcx_10) + *(arg2 + 0x70)
float* var_138 = rdx_17
int32_t rcx_12 = zx.d(rax[6]) & 0x7fff
*(arg2 + 0x10) = &rax[7]
int32_t var_130 = rcx_12
int32_t rax_21
rax_21.b = rcx_12 != 0x7fff
float* var_120
void var_128

if (rcx_12 == 0x7fff)
    var_120 = &var_128
else
    var_120 = zx.q(rcx_12 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_15 = zx.d(rax[7])
*(arg2 + 0x10) = &rax[8]
int32_t r9_8 = rcx_15 & 0x7fff
int32_t var_118 = r9_8
int64_t result
result.b = r9_8 != 0x7fff
int32_t result_1 = result.d
int64_t result_2

if (r9_8 == 0x7fff)
    void var_110
    result = &var_110
    result_2 = &var_110
else
    result_2 = zx.q(*(arg2 + 0x80) * r9_8) + *(arg2 + 0x70)

void* rbx_5 = *(r11 + 8)
float zmm3[0x4]

if (rbx_5 != 0)
    int64_t* rbx_6 = *(rbx_5 + 0x50)
    int32_t rdx_19 = *(r11 + 0x17c)
    uint32_t rax_25 = zx.d(*(rbx_6 + 0x5f))
    
    if (rax_25 s>= rdx_19)
        rdx_19 = rax_25
    
    int32_t rax_26 = sub_1423647f0(rbx_6, rdx_19)
    int64_t* rbx_8 = *(*rbx_6 + (sx.q(rax_26) << 3))
    
    if (rbx_8 != 0)
        rbx_8[1].d += 1
    
    void* var_d8
    sub_14229e7e0(&rbx_8[0x2f], &var_d8)
    int32_t var_d0
    int32_t temp2_1
    int32_t result_3
    temp2_1:result_3 = muls.dp.d(0x55555556, var_d0)
    result = zx.q(result_3)
    
    if (*(arg2 + 0x40) s> 0)
        arg_18.q = zx.q(arg_18.b) << 2
        arg_20.q = zx.q(arg_20.b) << 2
        float zmm6[0x4]
        float var_48_1[0x4] = zmm6
        int128_t zmm7
        int128_t var_58_1 = zmm7
        uint128_t zmm8
        uint128_t var_68_1 = zmm8
        arg_10.q = var_138
        int32_t var_bc_1 = 0x3f800000
        float zmm9[0x4]
        float var_78_1[0x4] = zmm9
        
        do
            int64_t rcx_25 = sx.q(mods.dp.d(sx.q(*r14_1), var_d0 s/ 3) * 3)
            void* rax_39 = var_d8
            char var_cc
            uint32_t r11_1
            
            if (var_cc == 0)
                r11_1 = zx.d(*(rax_39 + (rcx_25 << 1)))
            else
                r11_1 = *(rax_39 + (rcx_25 << 2))
            
            uint32_t r10_1
            
            if (var_cc == 0)
                r10_1 = zx.d(*(rax_39 + (rcx_25 << 1) + 2))
            else
                r10_1 = *(rax_39 + (rcx_25 << 2) + 4)
            
            uint32_t r9_9
            
            if (var_cc == 0)
                r9_9 = zx.d(*(rax_39 + (rcx_25 << 1) + 4))
            else
                r9_9 = *(rax_39 + (rcx_25 << 2) + 8)
            
            int32_t rdx_25 = rbx_8[0x25].d
            int64_t r8_2 = rbx_8[0x24]
            zmm7 = *r12_1
            uint64_t rax_41 = zx.q(rdx_25 * r9_9)
            int64_t var_88_1 = 0
            int32_t var_80_1 = 0
            int32_t zmm5 = *var_150
            zmm8 = zx.o(*(rax_41 + r8_2))
            int32_t rax_42 = *(rax_41 + r8_2 + 8)
            float zmm1[0x4] = zmm8
            zmm1[0] = zmm1[0] f* zmm7.d
            uint64_t rax_44 = zx.q(rdx_25 * r10_1)
            uint64_t rdx_26 = zx.q(rdx_25 * r11_1)
            zmm3 = zx.o(*(rax_44 + r8_2))
            int32_t rax_45 = *(rax_44 + r8_2 + 8)
            float zmm2[0x4] = zx.o(*(rdx_26 + r8_2))
            zmm9 = zmm2
            zmm3[0] = zmm3[0] f* zmm5
            zmm6 = zmm2
            zmm2 = *(rdx_26 + r8_2 + 8)
            int32_t zmm4 = *var_158
            zmm2[0] = zmm2[0] f* zmm4
            float temp0_12[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            zmm9[0] = zmm9[0] f* zmm4
            temp0_12[0] = temp0_12[0] f* zmm4
            zmm9[0] = zmm9[0] + zmm3[0]
            float temp0_13[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            temp0_13[0] = temp0_13[0] f* zmm5
            zmm9[0] = zmm9[0] + zmm1[0]
            zmm1 = zmm8
            float temp0_14[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            temp0_12[0] = temp0_12[0] + temp0_13[0]
            temp0_14[0] = temp0_14[0] f* zmm7.d
            float zmm0[0x4] = rax_45
            float var_c8[0x4]
            var_c8[0] = zmm9[0]
            zmm0[0] = zmm0[0] f* zmm5
            temp0_12[0] = temp0_12[0] + temp0_14[0]
            float temp0_15[0x4] = _mm_shuffle_ps(var_c8, var_c8, 0xe1)
            zmm1 = rax_42
            zmm2[0] = zmm2[0] + zmm0[0]
            zmm1[0] = zmm1[0] f* zmm7.d
            temp0_15[0] = temp0_12[0]
            float temp0_16[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xc6)
            zmm2[0] = zmm2[0] + zmm1[0]
            temp0_16[0] = zmm2[0]
            float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xc9)
            var_c8 = temp0_17
            float temp0_19[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_17, temp0_17, 0xff), *(r11 + 0x40))
            float temp0_21[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_17, temp0_17, 0xaa), *(r11 + 0x30))
            float temp0_23[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_17, temp0_17, 0), *(r11 + 0x10))
            float temp0_28[0x4] = _mm_add_ps(_mm_add_ps(temp0_19, temp0_21), 
                _mm_add_ps(temp0_23, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_17, temp0_17, 0x55), *(r11 + 0x20))))
            *arg_10.q = temp0_28[0]
            float temp0_29[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0x55)
            var_88_1.o = temp0_28
            float temp0_30[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xaa)
            *var_120 = temp0_29[0]
            r14_1 = &r14_1[zx.q(arg_10.b)]
            i_1 += 1
            r12_1 += zx.q(r13_1) << 2
            var_150 += arg_20.q
            *result_2 = temp0_30[0]
            var_158 += arg_18.q
            void* r8_3 = &var_138[sx.q(var_144)]
            arg_10.q = r8_3
            var_138 = r8_3
            result = result_2
            var_120 = &var_120[sx.q(rax_21)]
            result_2 = result + (sx.q(result_1) << 2)
        while (i_1 s< *(arg2 + 0x40))
    
    if (rbx_8 != 0)
        result = zx.q(rbx_8[1].d)
        rbx_8[1].d -= 1
        
        if (result.d == 1)
            return (**rbx_8)(rbx_8, 1)
else
    zmm3 = data_142d3f660
    float temp0_2[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xff), *(r11 + 0x40))
    float temp0_4[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0x55), *(r11 + 0x20))
    float temp0_6[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), *(r11 + 0x30))
    float temp0_8[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0), *(r11 + 0x10))
    int96_t var_f8_1 = _mm_add_ps(_mm_add_ps(temp0_2, temp0_6), _mm_add_ps(temp0_4, temp0_8))[0].12
    
    if (*(arg2 + 0x40) s> 0)
        while (true)
            i_1 += 1
            *rdx_17 = var_f8_1.d[0]
            float* rdx_18 = var_120
            var_120 = &rdx_18[sx.q(rax_21)]
            *rdx_18 = var_f8_1:4.d[0]
            float* result_4 = result_2
            result = sx.q(result_1)
            result_2 = &result_4[result]
            *result_4 = var_f8_1:8.d[0]
            
            if (i_1 s>= *(arg2 + 0x40))
                break
            
            rdx_17 = &rdx_17[sx.q(r8_1)]
            r8_1 = var_144
return result
