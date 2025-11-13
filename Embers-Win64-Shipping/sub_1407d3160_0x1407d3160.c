// 函数: sub_1407d3160
// 地址: 0x1407d3160
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
void* rbx = *(*(arg2 + 0x38) + (sx.q(*(*(r10 + (sx.q(r9) << 3)) + sx.q(rdx_1))) << 3))
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
uint8_t r13_1 = (rax_9 u>> 0xf).b
int32_t rcx_5 = rax_9 & 0x7fff
void* rdx_6

if ((not.b(r13_1) & 1) == 0)
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
void* arg_20 = rdx_6
uint8_t r12_1 = (rax_13 u>> 0xf).b
*(arg2 + 0x10) = &rax[4]
int32_t i = rax_13 & 0x7fff
void* rdx_11

if ((not.b(r12_1) & 1) == 0)
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
void* var_118 = rdx_11
uint8_t r15_1 = (rax_17 u>> 0xf).b
*(arg2 + 0x10) = &rax[5]
int32_t rcx_8 = rax_17 & 0x7fff
void* rdx_16

if ((not.b(r15_1) & 1) == 0)
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
void* var_110 = rdx_16
*(arg2 + 0x10) = &rax[6]
int32_t var_108 = rcx_10
int32_t r9_5
r9_5.b = rcx_10 != 0x7fff
int32_t var_104 = r9_5
int32_t* rdx_21
void var_100

if (rcx_10 == 0x7fff)
    rdx_21 = &var_100
else
    rdx_21 = zx.q(*(arg2 + 0x80) * rcx_10) + *(arg2 + 0x70)
int32_t* var_f8 = rdx_21
int32_t rcx_12 = zx.d(rax[6]) & 0x7fff
*(arg2 + 0x10) = &rax[7]
int32_t var_f0 = rcx_12
int32_t rax_21
rax_21.b = rcx_12 != 0x7fff
float* var_e0
void var_e8

if (rcx_12 == 0x7fff)
    var_e0 = &var_e8
else
    var_e0 = zx.q(rcx_12 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_15 = zx.d(rax[7])
*(arg2 + 0x10) = &rax[8]
int32_t r8_4 = rcx_15 & 0x7fff
int32_t var_d8 = r8_4
int64_t result
result.b = r8_4 != 0x7fff
int32_t result_1 = result.d
int64_t result_2

if (r8_4 == 0x7fff)
    void var_d0
    result = &var_d0
    result_2 = &var_d0
else
    result_2 = zx.q(*(arg2 + 0x80) * r8_4) + *(arg2 + 0x70)

void* rbx_1 = *(rbx + 8)

if (rbx_1 != 0)
    int64_t* rbx_2 = *(rbx_1 + 0x50)
    int32_t rdx_23 = *(rbx + 0x17c)
    uint32_t rax_26 = zx.d(*(rbx_2 + 0x5f))
    
    if (rax_26 s>= rdx_23)
        rdx_23 = rax_26
    
    int32_t rax_27 = sub_1423647f0(rbx_2, rdx_23)
    int64_t* rbx_4 = *(*rbx_2 + (sx.q(rax_27) << 3))
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
    
    void* var_b8
    sub_14229e7e0(&rbx_4[0x2f], &var_b8)
    int32_t var_b0
    int32_t temp2_1
    int32_t result_3
    temp2_1:result_3 = muls.dp.d(0x55555556, var_b0)
    result = zx.q(result_3)
    
    if (*(arg2 + 0x40) s> 0)
        float zmm6[0x4]
        float var_48_1[0x4] = zmm6
        float zmm7[0x4]
        float var_58_1[0x4] = zmm7
        arg_10.q = var_f8
        int32_t var_9c_1 = 0
        
        do
            int64_t rcx_25 = sx.q(mods.dp.d(sx.q(*r14_1), var_b0 s/ 3) * 3)
            void* rax_36 = var_b8
            char var_ac
            uint32_t r10_1
            
            if (var_ac == 0)
                r10_1 = zx.d(*(rax_36 + (rcx_25 << 1)))
            else
                r10_1 = *(rax_36 + (rcx_25 << 2))
            
            uint32_t r9_6
            
            if (var_ac == 0)
                r9_6 = zx.d(*(rax_36 + (rcx_25 << 1) + 2))
            else
                r9_6 = *(rax_36 + (rcx_25 << 2) + 4)
            
            uint32_t r8_6
            
            if (var_ac == 0)
                r8_6 = zx.d(*(rax_36 + (rcx_25 << 1) + 4))
            else
                r8_6 = *(rax_36 + (rcx_25 << 2) + 8)
            
            char rdx_29 = *(rbx_4 + 0xf1)
            int64_t rax_37 = rbx_4[0x1a]
            uint64_t rcx_26 = zx.q(r8_6)
            int64_t var_128_1 = 0
            float zmm0[0x4]
            float zmm1[0x4]
            
            if (rdx_29 == 0)
                zmm1 =
                    _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(rax_37 + (rcx_26 << 3) + 4)), 0), 0)
                zmm0 = __mulps_xmmps_memps(
                    _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f80) & data_142dd3fd0)
                        | zmm1), 
                    data_142dd3fb0)
            else
                zmm1 = _mm_unpacklo_epi16(zx.o(*(rax_37 + rcx_26 * 0x10 + 8)), 0)
                zmm0 = __mulps_xmmps_memps(
                    _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f90) & data_142dd3fc0)
                        | zmm1), 
                    data_142dd3fa0)
            
            uint64_t rcx_28 = zx.q(r9_6)
            int64_t var_138_1 = 0
            var_128_1.o = zmm0
            
            if (rdx_29 == 0)
                zmm1 =
                    _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(rax_37 + (rcx_28 << 3) + 4)), 0), 0)
                zmm0 = __mulps_xmmps_memps(
                    _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f80) & data_142dd3fd0)
                        | zmm1), 
                    data_142dd3fb0)
            else
                zmm1 = _mm_unpacklo_epi16(zx.o(*(rax_37 + rcx_28 * 0x10 + 8)), 0)
                zmm0 = __mulps_xmmps_memps(
                    _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f90) & data_142dd3fc0)
                        | zmm1), 
                    data_142dd3fa0)
            
            uint64_t rcx_30 = zx.q(r10_1)
            int64_t var_148_1 = 0
            var_138_1.o = zmm0
            
            if (rdx_29 == 0)
                zmm1 =
                    _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(rax_37 + (rcx_30 << 3) + 4)), 0), 0)
                zmm0 = __mulps_xmmps_memps(
                    _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f80) & data_142dd3fd0)
                        | zmm1), 
                    data_142dd3fb0)
            else
                zmm1 = _mm_unpacklo_epi16(zx.o(*(rax_37 + rcx_30 * 0x10 + 8)), 0)
                zmm0 = __mulps_xmmps_memps(
                    _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f90) & data_142dd3fc0)
                        | zmm1), 
                    data_142dd3fa0)
            
            zmm1 = var_128_1.d
            int128_t* rdx_30 = var_118
            float (* r8_7)[0x4] = arg_20
            float (* rcx_32)[0x4] = var_110
            var_148_1.o = zmm0
            int64_t var_88_1 = 0
            float zmm4[0x4] = *rdx_30
            float zmm2[0x4] = *r8_7
            zmm6 = *rcx_32
            zmm7 = var_148_1.d
            zmm0 = var_138_1.d
            float zmm5[0x4] = var_148_1:4.d
            float zmm3[0x4] = 0
            zmm7[0] = zmm7[0] * zmm2[0]
            int32_t var_80_1 = 0
            zmm0[0] = zmm0[0] * zmm4[0]
            zmm1[0] = zmm1[0] * zmm6[0]
            zmm7[0] = zmm7[0] + zmm0[0]
            zmm3[0] = 0f * zmm2[0]
            zmm0 = var_138_1:4.d
            zmm0[0] = zmm0[0] * zmm4[0]
            zmm7[0] = zmm7[0] + zmm1[0]
            zmm5[0] = zmm5[0] * zmm2[0]
            zmm1 = var_128_1:4.d
            zmm5[0] = zmm5[0] + zmm0[0]
            zmm1[0] = zmm1[0] * zmm6[0]
            zmm0 = 0
            float var_a8[0x4]
            var_a8[0] = zmm7[0]
            zmm0[0] = 0f * zmm4[0]
            zmm5[0] = zmm5[0] + zmm1[0]
            zmm2 = _mm_shuffle_ps(var_a8, var_a8, 0xe1)
            zmm1 = 0
            zmm3[0] = zmm3[0] + zmm0[0]
            zmm1[0] = 0f * zmm6[0]
            zmm2[0] = zmm5[0]
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc6)
            zmm3[0] = zmm3[0] + zmm1[0]
            zmm2[0] = zmm3[0]
            zmm3 = zx.o(0)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
            var_a8 = zmm2
            zmm7 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rbx + 0x70))
            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rbx + 0x80))
            zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rbx + 0x60))
            zmm7 = _mm_add_ps(zmm7, zmm0)
            zmm1 =
                _mm_add_ps(zmm1, __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rbx + 0x50)))
            zmm2 = 0x3f000000
            zmm7 = _mm_add_ps(zmm7, zmm1)
            var_88_1.o = zmm7
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm6 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            zmm5 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm6[0] = zmm6[0] + zmm7[0]
            zmm5[0] = zmm5[0] * zmm5[0]
            zmm6[0] = zmm6[0] + zmm5[0]
            zmm3[0] = zmm6[0]
            zmm4 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            zmm3[0] = zmm3[0] * 0.5f
            zmm4[0] = zmm4[0] * zmm4[0]
            zmm3[0] = zmm3[0] * zmm4[0]
            zmm2[0] = 0.5f - zmm3[0]
            var_110 = &(*rcx_32)[zx.q(r15_1)]
            r14_1 = &r14_1[zx.q(arg_10.b)]
            zmm4[0] = zmm4[0] * zmm2[0]
            i_1 += 1
            arg_20 = &(*r8_7)[zx.q(r13_1)]
            var_118 = rdx_30 + (zx.q(r12_1) << 2)
            zmm4[0] = zmm4[0] + zmm4[0]
            zmm0 = 0x3f000000
            zmm4[0] = zmm4[0] * zmm4[0]
            zmm3[0] = zmm3[0] * zmm4[0]
            zmm0[0] = 0.5f - zmm3[0]
            zmm4[0] = zmm4[0] * zmm0[0]
            zmm4[0] = zmm4[0] + zmm4[0]
            zmm7[0] = zmm7[0] * zmm4[0]
            zmm6[0] = zmm6[0] * zmm4[0]
            *arg_10.q = zmm7[0]
            zmm5[0] = zmm5[0] * zmm4[0]
            uint64_t arg_18
            arg_18.d = zmm4[0]
            *var_e0 = zmm6[0]
            *result_2 = zmm5[0]
            void* r8_9 = &var_f8[sx.q(var_104)]
            arg_10.q = r8_9
            var_f8 = r8_9
            result = result_2
            var_e0 = &var_e0[sx.q(rax_21)]
            result_2 = result + (sx.q(result_1) << 2)
        while (i_1 s< *(arg2 + 0x40))
    
    if (rbx_4 != 0)
        result = zx.q(rbx_4[1].d)
        rbx_4[1].d -= 1
        
        if (result.d == 1)
            return (**rbx_4)(rbx_4, 1)
else
    int32_t r8_5 = 0
    
    if (*(arg2 + 0x40) s> 0)
        while (true)
            r8_5 += 1
            *rdx_21 = 0
            int32_t* rdx_22 = var_e0
            var_e0 = &rdx_22[sx.q(rax_21)]
            *rdx_22 = 0
            int32_t* result_4 = result_2
            result = sx.q(result_1)
            result_2 = &result_4[result]
            *result_4 = 0x3f800000
            
            if (r8_5 s>= *(arg2 + 0x40))
                break
            
            rdx_21 = &rdx_21[sx.q(r9_5)]
            r9_5 = var_104

return result
