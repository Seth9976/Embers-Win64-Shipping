// 函数: sub_1407ff800
// 地址: 0x1407ff800
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
int32_t* var_1d8 = rdx_6
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
int128_t* var_1d0 = rdx_11
uint8_t r13_1 = (rax_17 u>> 0xf).b
*(arg2 + 0x10) = &rax[5]
int32_t rcx_8 = rax_17 & 0x7fff
void* rdx_16

if ((not.b(r13_1) & 1) == 0)
    rdx_16 = zx.q(*(arg2 + 0x80) * rcx_8) + *(arg2 + 0x70)
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
    
    rdx_16 = sx.q(rcx_8) + *(r10 + (sx.q(r9_4) << 3))

int32_t rcx_10 = zx.d(rax[5]) & 0x7fff
void* var_1c8 = rdx_16
*(arg2 + 0x10) = &rax[6]
int32_t var_1c0 = rcx_10
int32_t r9_5
r9_5.b = rcx_10 != 0x7fff
int32_t var_1bc = r9_5
float* rdx_21
void var_1b8

if (rcx_10 == 0x7fff)
    rdx_21 = &var_1b8
else
    rdx_21 = zx.q(*(arg2 + 0x80) * rcx_10) + *(arg2 + 0x70)
float* var_1b0 = rdx_21
int32_t rcx_12 = zx.d(rax[6]) & 0x7fff
*(arg2 + 0x10) = &rax[7]
int32_t var_1a8 = rcx_12
int32_t rax_21
rax_21.b = rcx_12 != 0x7fff
float* var_198
void var_1a0

if (rcx_12 == 0x7fff)
    var_198 = &var_1a0
else
    var_198 = zx.q(rcx_12 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_16 = zx.d(rax[7]) & 0x7fff
*(arg2 + 0x10) = &rax[8]
int32_t var_190 = rcx_16
int32_t rax_22
rax_22.b = rcx_16 != 0x7fff
void* var_180
void var_188

if (rcx_16 == 0x7fff)
    var_180 = &var_188
else
    var_180 = zx.q(rcx_16 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_20 = zx.d(rax[8]) & 0x7fff
*(arg2 + 0x10) = &rax[9]
int32_t var_178 = rcx_20
int32_t rax_23
rax_23.b = rcx_20 != 0x7fff
void* var_168
void var_170

if (rcx_20 == 0x7fff)
    var_168 = &var_170
else
    var_168 = zx.q(rcx_20 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_24 = zx.d(rax[9]) & 0x7fff
*(arg2 + 0x10) = &rax[0xa]
int32_t var_160 = rcx_24
int32_t rax_24
rax_24.b = rcx_24 != 0x7fff
void* var_150
void var_158

if (rcx_24 == 0x7fff)
    var_150 = &var_158
else
    var_150 = zx.q(rcx_24 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_27 = zx.d(rax[0xa])
*(arg2 + 0x10) = &rax[0xb]
int32_t r8_7 = rcx_27 & 0x7fff
int32_t var_148 = r8_7
float* result
result.b = r8_7 != 0x7fff
int32_t result_1 = result.d
float* result_2

if (r8_7 == 0x7fff)
    void var_140
    result = &var_140
    result_2 = &var_140
else
    result_2 = zx.q(*(arg2 + 0x80) * r8_7) + *(arg2 + 0x70)

void* rbx = *(r15 + 8)
float zmm3[0x4]

if (rbx != 0)
    int64_t* rbx_1 = *(rbx + 0x50)
    int32_t rdx_26 = *(r15 + 0x17c)
    uint32_t rax_31 = zx.d(*(rbx_1 + 0x5f))
    
    if (rax_31 s>= rdx_26)
        rdx_26 = rax_31
    
    int32_t rax_32 = sub_1423647f0(rbx_1, rdx_26)
    int64_t* rbx_3 = *(*rbx_1 + (sx.q(rax_32) << 3))
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    void* var_108
    sub_14229e7e0(&rbx_3[0x2f], &var_108)
    int32_t var_100
    int32_t temp2_1
    int32_t result_3
    temp2_1:result_3 = muls.dp.d(0x55555556, var_100)
    result = zx.q(result_3)
    int128_t zmm10
    zmm10.d = 1f f/ *(r15 + 0x110)
    
    if (*(arg2 + 0x40) s> 0)
        arg_18.q = zx.q(arg_18.b) << 2
        arg_20.q = zx.q(arg_20.b) << 2
        float zmm6[0x4]
        float var_48_1[0x4] = zmm6
        uint128_t zmm7
        uint128_t var_58_1 = zmm7
        float zmm8[0x4]
        float var_68_1[0x4] = zmm8
        arg_10.q = var_1b0
        float zmm9[0x4]
        float var_78_1[0x4] = zmm9
        int32_t var_ec_1 = 0x3f800000
        int32_t var_dc_1 = 0x3f800000
        
        do
            int64_t rcx_40 = sx.q(mods.dp.d(sx.q(*r14_1), var_100 s/ 3) * 3)
            void* rax_45 = var_108
            char var_fc
            uint32_t r11_5
            
            if (var_fc == 0)
                r11_5 = zx.d(*(rax_45 + (rcx_40 << 1)))
            else
                r11_5 = *(rax_45 + (rcx_40 << 2))
            
            uint32_t r10_1
            
            if (var_fc == 0)
                r10_1 = zx.d(*(rax_45 + (rcx_40 << 1) + 2))
            else
                r10_1 = *(rax_45 + (rcx_40 << 2) + 4)
            
            uint32_t r9_6
            
            if (var_fc == 0)
                r9_6 = zx.d(*(rax_45 + (rcx_40 << 1) + 4))
            else
                r9_6 = *(rax_45 + (rcx_40 << 2) + 8)
            
            int64_t r8_9 = rbx_3[0x24]
            int32_t rdx_32 = rbx_3[0x25].d
            int128_t* rcx_41 = var_1c8
            uint64_t rax_47 = zx.q(rdx_32 * r9_6)
            int64_t var_a8_1 = 0
            int32_t var_a0_1 = 0
            zmm6 = *rcx_41
            int64_t var_98_1 = 0
            int32_t var_90_1 = 0
            zmm7 = zx.o(*(rax_47 + r8_9))
            int32_t rax_48 = *(rax_47 + r8_9 + 8)
            float zmm1[0x4] = zmm7
            zmm1[0] = zmm1[0] * zmm6[0]
            uint64_t rax_50 = zx.q(rdx_32 * r10_1)
            uint64_t rdx_33 = zx.q(rdx_32 * r11_5)
            zmm3 = zx.o(*(rax_50 + r8_9))
            float zmm2[0x4] = zx.o(*(rdx_33 + r8_9))
            int32_t rax_51 = *(rax_50 + r8_9 + 8)
            int32_t rax_52 = *(rdx_33 + r8_9 + 8)
            float temp0_12[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            float zmm5[0x4] = *var_1d0
            float zmm4 = *var_1d8
            zmm3[0] = zmm3[0] * zmm5[0]
            zmm2[0] = zmm2[0] * zmm4
            temp0_12[0] = temp0_12[0] * zmm4
            zmm2[0] = zmm2[0] + zmm3[0]
            float zmm0[0x4] = zmm3
            zmm3 = rax_52
            float temp0_13[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
            temp0_13[0] = temp0_13[0] * zmm5[0]
            zmm2[0] = zmm2[0] + zmm1[0]
            zmm3[0] = zmm3[0] * zmm4
            temp0_12[0] = temp0_12[0] + temp0_13[0]
            zmm1 = zmm7
            zmm0 = rax_51
            float temp0_14[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            temp0_14[0] = temp0_14[0] * zmm6[0]
            float var_f8[0x4]
            var_f8[0] = zmm2[0]
            float temp0_15[0x4] = _mm_shuffle_ps(var_f8, var_f8, 0xe1)
            zmm0[0] = zmm0[0] * zmm5[0]
            temp0_12[0] = temp0_12[0] + temp0_14[0]
            zmm1 = rax_48
            zmm1[0] = zmm1[0] * zmm6[0]
            zmm3[0] = zmm3[0] + zmm0[0]
            temp0_15[0] = temp0_12[0]
            float temp0_16[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xc6)
            zmm3[0] = zmm3[0] + zmm1[0]
            temp0_16[0] = zmm3[0]
            float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xc9)
            var_f8 = temp0_17
            float temp0_19[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_17, temp0_17, 0), *(r15 + 0x90))
            float temp0_21[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_17, temp0_17, 0xff), *(r15 + 0xc0))
            float temp0_23[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_17, temp0_17, 0x55), *(r15 + 0xa0))
            float temp0_25[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_17, temp0_17, 0xaa), *(r15 + 0xb0))
            float temp0_26[0x4] = _mm_add_ps(temp0_19, temp0_23)
            float temp0_27[0x4] = _mm_add_ps(temp0_21, temp0_25)
            float var_e8[0x4]
            var_e8[0] = zmm2[0]
            float temp0_28[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0xe1)
            temp0_28[0] = temp0_12[0]
            float temp0_29[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xc6)
            float temp0_30[0x4] = _mm_add_ps(temp0_26, temp0_27)
            var_a8_1.o = temp0_30
            temp0_29[0] = zmm3[0]
            r14_1 = &r14_1[zx.q(arg_10.b)]
            i_1 += 1
            float temp0_31[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xc9)
            var_1c8 = rcx_41 + (zx.q(r13_1) << 2)
            float temp0_33[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_31, temp0_31, 0xaa), *(r15 + 0x30))
            var_1d8 += arg_18.q
            float temp0_35[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_31, temp0_31, 0xff), *(r15 + 0x40))
            var_1d0 += arg_20.q
            float temp0_37[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_31, temp0_31, 0x55), *(r15 + 0x20))
            float temp0_38[0x4] = _mm_add_ps(temp0_33, temp0_35)
            var_e8 = temp0_31
            float temp0_40[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_31, temp0_31, 0), *(r15 + 0x10))
            float temp0_41[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0x55)
            float temp0_43[0x4] = _mm_add_ps(temp0_38, _mm_add_ps(temp0_37, temp0_40))
            *arg_10.q = temp0_43[0]
            zmm4 = temp0_43[0]
            float temp0_44[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0x55)
            zmm4 = zmm4 - temp0_30[0]
            float temp0_45[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xaa)
            temp0_44[0] = temp0_44[0] - temp0_41[0]
            var_98_1.o = temp0_43
            *var_198 = temp0_44[0]
            float temp0_46[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0xaa)
            temp0_44[0] = temp0_44[0] f* zmm10.d
            temp0_46[0] = temp0_46[0] - temp0_45[0]
            *var_180 = temp0_46[0]
            temp0_46[0] = temp0_46[0] f* zmm10.d
            *var_168 = zmm4 f* zmm10.d
            *var_150 = temp0_44[0]
            *result_2 = temp0_46[0]
            void* r8_12 = &var_1b0[sx.q(var_1bc)]
            arg_10.q = r8_12
            var_1b0 = r8_12
            var_198 = &var_198[sx.q(rax_21)]
            var_180 += sx.q(rax_22) << 2
            var_168 += sx.q(rax_23) << 2
            result = result_2
            var_150 += sx.q(rax_24) << 2
            result_2 = &result[sx.q(result_1)]
        while (i_1 s< *(arg2 + 0x40))
    
    if (rbx_3 != 0)
        result = zx.q(rbx_3[1].d)
        rbx_3[1].d -= 1
        
        if (result.d == 1)
            return (**rbx_3)(rbx_3, 1)
else
    int32_t r8_8 = 0
    zmm3 = data_142d3f660
    float temp0_2[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xff), *(r15 + 0x40))
    float temp0_4[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0x55), *(r15 + 0x20))
    float temp0_6[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), *(r15 + 0x30))
    float temp0_8[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0), *(r15 + 0x10))
    int96_t var_128_1 = _mm_add_ps(_mm_add_ps(temp0_2, temp0_6), _mm_add_ps(temp0_4, temp0_8))[0].12
    
    if (*(arg2 + 0x40) s> 0)
        while (true)
            r8_8 += 1
            *rdx_21 = var_128_1.d[0]
            float* rdx_22 = var_198
            var_198 = &rdx_22[sx.q(rax_21)]
            *rdx_22 = var_128_1:4.d[0]
            float* rdx_23 = var_180
            var_180 = &rdx_23[sx.q(rax_22)]
            *rdx_23 = var_128_1:8.d[0]
            int32_t* rdx_24 = var_168
            var_168 = &rdx_24[sx.q(rax_23)]
            *rdx_24 = 0
            int32_t* rdx_25 = var_150
            var_150 = &rdx_25[sx.q(rax_24)]
            *rdx_25 = 0
            float* result_4 = result_2
            result = sx.q(result_1)
            result_2 = &result_4[result]
            *result_4 = 0f
            
            if (r8_8 s>= *(arg2 + 0x40))
                break
            
            rdx_21 = &rdx_21[sx.q(r9_5)]
            r9_5 = var_1bc
return result
