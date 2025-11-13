// 函数: sub_1407d47d0
// 地址: 0x1407d47d0
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
int32_t* var_128 = rdx_6
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
int128_t* var_120 = rdx_11
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
int32_t var_118 = rcx_10
int32_t r9_5
r9_5.b = rcx_10 != 0x7fff
int32_t var_114 = r9_5
int32_t* rdx_17
void var_110

if (rcx_10 == 0x7fff)
    rdx_17 = &var_110
else
    rdx_17 = zx.q(*(arg2 + 0x80) * rcx_10) + *(arg2 + 0x70)
int32_t* var_108 = rdx_17
int32_t rcx_12 = zx.d(rax[6]) & 0x7fff
*(arg2 + 0x10) = &rax[7]
int32_t var_100 = rcx_12
int32_t rax_21
rax_21.b = rcx_12 != 0x7fff
int32_t* var_f0
void var_f8

if (rcx_12 == 0x7fff)
    var_f0 = &var_f8
else
    var_f0 = zx.q(rcx_12 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_15 = zx.d(rax[7])
*(arg2 + 0x10) = &rax[8]
int32_t r8_4 = rcx_15 & 0x7fff
int32_t var_e8 = r8_4
int64_t result
result.b = r8_4 != 0x7fff
int32_t result_1 = result.d
int64_t result_2

if (r8_4 == 0x7fff)
    void var_e0
    result = &var_e0
    result_2 = &var_e0
else
    result_2 = zx.q(*(arg2 + 0x80) * r8_4) + *(arg2 + 0x70)

void* rbx = *(r15 + 8)

if (rbx != 0)
    int64_t* rbx_1 = *(rbx + 0x50)
    int32_t rdx_19 = *(r15 + 0x17c)
    uint32_t rax_25 = zx.d(*(rbx_1 + 0x5f))
    
    if (rax_25 s>= rdx_19)
        rdx_19 = rax_25
    
    int32_t rax_26 = sub_1423647f0(rbx_1, rdx_19)
    int64_t* rbx_3 = *(*rbx_1 + (sx.q(rax_26) << 3))
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    void* var_b8
    sub_14229e7e0(&rbx_3[0x2f], &var_b8)
    int32_t var_b0
    int32_t temp2_1
    int32_t result_3
    temp2_1:result_3 = muls.dp.d(0x55555556, var_b0)
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
        arg_10.q = var_108
        uint128_t zmm9
        uint128_t var_78_1 = zmm9
        
        do
            int64_t rcx_25 = sx.q(mods.dp.d(sx.q(*r14_1), var_b0 s/ 3) * 3)
            void* rax_39 = var_b8
            char var_ac
            uint32_t r11_5
            
            if (var_ac == 0)
                r11_5 = zx.d(*(rax_39 + (rcx_25 << 1)))
            else
                r11_5 = *(rax_39 + (rcx_25 << 2))
            
            uint32_t r10_1
            
            if (var_ac == 0)
                r10_1 = zx.d(*(rax_39 + (rcx_25 << 1) + 2))
            else
                r10_1 = *(rax_39 + (rcx_25 << 2) + 4)
            
            uint32_t r9_6
            
            if (var_ac == 0)
                r9_6 = zx.d(*(rax_39 + (rcx_25 << 1) + 4))
            else
                r9_6 = *(rax_39 + (rcx_25 << 2) + 8)
            
            int64_t r8_6 = rbx_3[0x24]
            r14_1 = &r14_1[zx.q(arg_10.b)]
            int32_t rdx_25 = rbx_3[0x25].d
            i_1 += 1
            zmm7 = *r12_1
            r12_1 += zx.q(r13_1) << 2
            uint64_t rax_41 = zx.q(rdx_25 * r9_6)
            zmm6 = *var_120
            var_120 += arg_20.q
            zmm9 = zx.o(*(rax_41 + r8_6))
            int32_t rax_42 = *(rax_41 + r8_6 + 8)
            uint64_t rax_44 = zx.q(rdx_25 * r10_1)
            uint128_t zmm1
            zmm1.d = zmm9.d f* zmm7.d
            uint64_t rdx_26 = zx.q(rdx_25 * r11_5)
            uint128_t zmm3 = zx.o(*(rax_44 + r8_6))
            int32_t rax_45 = *(rax_44 + r8_6 + 8)
            uint128_t zmm2 = zx.o(*(rdx_26 + r8_6))
            zmm8 = zmm2
            uint128_t zmm5 = zmm2
            zmm2 = *(rdx_26 + r8_6 + 8)
            int32_t zmm4 = *var_128
            uint128_t zmm0
            zmm0.d = zmm3.d f* zmm6.d
            var_128 += arg_18.q
            zmm8.d = zmm8.d f* zmm4
            zmm5.d = _mm_shuffle_ps(zmm5, zmm5, 0x55).d f* zmm4
            zmm8.d = zmm8.d f+ zmm0.d
            zmm2.d = zmm2.d f* zmm4
            zmm0.d = _mm_shuffle_ps(zmm3, zmm3, 0x55).d f* zmm6.d
            zmm8.d = zmm8.d f+ zmm1.d
            zmm5.d = zmm5.d f+ zmm0.d
            zmm1.d = _mm_shuffle_ps(zmm9, zmm9, 0x55).d f* zmm7.d
            *arg_10.q = zmm8.d
            zmm5.d = zmm5.d f+ zmm1.d
            zmm0.d = rax_45.d f* zmm6.d
            zmm1.d = rax_42.d f* zmm7.d
            *var_f0 = zmm5.d
            zmm2.d = zmm2.d f+ zmm0.d
            zmm2.d = zmm2.d f+ zmm1.d
            *result_2 = zmm2.d
            void* r8_7 = &var_108[sx.q(var_114)]
            arg_10.q = r8_7
            var_108 = r8_7
            result = result_2
            var_f0 = &var_f0[sx.q(rax_21)]
            result_2 = result + (sx.q(result_1) << 2)
        while (i_1 s< *(arg2 + 0x40))
    
    if (rbx_3 != 0)
        result = zx.q(rbx_3[1].d)
        rbx_3[1].d -= 1
        
        if (result.d == 1)
            return (**rbx_3)(rbx_3, 1)
else
    int32_t r8_5 = 0
    
    if (*(arg2 + 0x40) s> 0)
        while (true)
            r8_5 += 1
            *rdx_17 = 0
            int32_t* rdx_18 = var_f0
            var_f0 = &rdx_18[sx.q(rax_21)]
            *rdx_18 = 0
            int32_t* result_4 = result_2
            result = sx.q(result_1)
            result_2 = &result_4[result]
            *result_4 = 0
            
            if (r8_5 s>= *(arg2 + 0x40))
                break
            
            rdx_17 = &rdx_17[sx.q(r9_5)]
            r9_5 = var_114

return result
