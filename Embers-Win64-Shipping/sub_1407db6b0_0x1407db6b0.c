// 函数: sub_1407db6b0
// 地址: 0x1407db6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
int32_t r9 = 0
int32_t* r8 = *(arg2 + 0x20)
int32_t rdx_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rax_1 = *r8

if (rdx_1 s>= rax_1)
    int64_t rcx_1 = 0
    
    do
        rdx_1 -= rax_1
        rcx_1 += 1
        rax_1 = r8[rcx_1]
        r9 += 1
    while (rdx_1 s>= rax_1)

int64_t rbx = *(arg2 + 0x18)
void* r11 = *(*(arg2 + 0x38) + (sx.q(*(*(rbx + (sx.q(r9) << 3)) + sx.q(rdx_1))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t r15_1 = (rax_5 u>> 0xf).b
int32_t rcx_4 = rax_5 & 0x7fff
int32_t* r14_1

if ((not.b(r15_1) & 1) == 0)
    r14_1 = zx.q(*(arg2 + 0x80) * rcx_4) + *(arg2 + 0x70)
else
    int32_t rax_7 = *r8
    int32_t r9_1 = 0
    
    if (rcx_4 s>= rax_7)
        int64_t rdx_3 = 0
        
        do
            rcx_4 -= rax_7
            rdx_3 += 1
            rax_7 = r8[rdx_3]
            r9_1 += 1
        while (rcx_4 s>= rax_7)
    
    r14_1 = sx.q(rcx_4) + *(rbx + (sx.q(r9_1) << 3))

int32_t rcx_6 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_68 = rcx_6
int32_t r8_1
r8_1.b = rcx_6 != 0x7fff
int32_t var_64 = r8_1
float* rdx_6
void var_60

if (rcx_6 == 0x7fff)
    rdx_6 = &var_60
else
    rdx_6 = zx.q(*(arg2 + 0x80) * rcx_6) + *(arg2 + 0x70)
void* var_58 = rdx_6
int32_t rcx_8 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_50 = rcx_8
int32_t rax_9
rax_9.b = rcx_8 != 0x7fff
void* var_40
void var_48

if (rcx_8 == 0x7fff)
    var_40 = &var_48
else
    var_40 = zx.q(rcx_8 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_11 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
int32_t r9_5 = rcx_11 & 0x7fff
int32_t var_38 = r9_5
int64_t result
result.b = r9_5 != 0x7fff
int32_t result_1 = result.d
void* var_28

if (r9_5 == 0x7fff)
    void var_30
    result = &var_30
    var_28 = &var_30
else
    var_28 = zx.q(*(arg2 + 0x80) * r9_5) + *(arg2 + 0x70)

void* rbx_1 = *(r11 + 8)

if (rbx_1 != 0)
    int64_t* rbx_2 = *(rbx_1 + 0x50)
    int32_t rdx_9 = *(r11 + 0x17c)
    uint32_t rax_13 = zx.d(*(rbx_2 + 0x5f))
    
    if (rax_13 s>= rdx_9)
        rdx_9 = rax_13
    
    int32_t rax_14 = sub_1423647f0(rbx_2, rdx_9)
    int64_t* rcx_20 = *(*rbx_2 + (sx.q(rax_14) << 3))
    
    if (rcx_20 != 0)
        rcx_20[1].d += 1
    
    int32_t r10_2 = *(rcx_20 + 0x12c)
    
    if (*(arg2 + 0x40) s> 0)
        do
            i += 1
            float* r8_2 = var_58
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(*r14_1)
            int64_t rax_17 = rcx_20[0x24]
            r14_1 = &r14_1[zx.q(r15_1)]
            uint64_t rdx_13 = zx.q(mods.dp.d(temp2_1:temp3_1, r10_2) * rcx_20[0x25].d)
            float zmm1[0x4] = zx.o(*(rdx_13 + rax_17))
            int32_t rax_18 = *(rdx_13 + rax_17 + 8)
            float temp0_12[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            var_58 = &r8_2[sx.q(var_64)]
            *r8_2 = zmm1[0]
            float* r8_3 = var_40
            var_40 = &r8_3[sx.q(rax_9)]
            *r8_3 = temp0_12[0]
            float* r8_4 = var_28
            arg1 = rax_18
            var_28 = &r8_4[sx.q(result_1)]
            *r8_4 = arg1[0]
        while (i s< *(arg2 + 0x40))
    
    result = zx.q(rcx_20[1].d)
    rcx_20[1].d -= 1
    
    if (result.d == 1)
        return (**rcx_20)(arg1, 1)
else
    float zmm3[0x4] = data_142d3f660
    float temp0_2[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xff), *(r11 + 0x40))
    float temp0_4[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0x55), *(r11 + 0x20))
    float temp0_6[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), *(r11 + 0x30))
    float temp0_8[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0), *(r11 + 0x10))
    int96_t var_78_1 = _mm_add_ps(_mm_add_ps(temp0_2, temp0_6), _mm_add_ps(temp0_4, temp0_8))[0].12
    
    if (*(arg2 + 0x40) s> 0)
        while (true)
            i += 1
            *rdx_6 = var_78_1.d[0]
            float* rdx_7 = var_40
            var_40 = &rdx_7[sx.q(rax_9)]
            *rdx_7 = var_78_1:4.d[0]
            float* rdx_8 = var_28
            result = sx.q(result_1)
            var_28 = &rdx_8[result]
            *rdx_8 = var_78_1:8.d[0]
            
            if (i s>= *(arg2 + 0x40))
                break
            
            rdx_6 = &rdx_6[sx.q(r8_1)]
            r8_1 = var_64

return result
