// 函数: sub_1407d9e30
// 地址: 0x1407d9e30
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
float* rdx_6

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
float* var_d0 = rdx_6
uint32_t rax_14 = rax_13 u>> 0xf
int32_t i = rax_13 & 0x7fff
uint32_t arg_20 = rax_14
rax_14.b = not.b(rax_14.b)
*(arg2 + 0x10) = &rax[4]
float* rdx_11

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
float* var_c8 = rdx_11
uint32_t rax_18 = rax_17 u>> 0xf
int32_t rcx_8 = rax_17 & 0x7fff
uint32_t var_d8 = rax_18
rax_18.b = not.b(rax_18.b)
*(arg2 + 0x10) = &rax[5]
int32_t* rdx_16

if ((rax_18.b & 1) == 0)
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

uint32_t rax_21 = zx.d(rax[5])
int32_t* var_c0 = rdx_16
uint8_t r13_1 = (rax_21 u>> 0xf).b
*(arg2 + 0x10) = &rax[6]
int32_t rcx_10 = rax_21 & 0x7fff
int32_t* r12_1

if ((not.b(r13_1) & 1) == 0)
    r12_1 = zx.q(*(arg2 + 0x80) * rcx_10) + *(arg2 + 0x70)
else
    int32_t rax_23 = *r8
    int32_t r9_5 = 0
    
    if (rcx_10 s>= rax_23)
        int64_t rdx_19 = 0
        
        do
            rcx_10 -= rax_23
            rdx_19 += 1
            rax_23 = r8[rdx_19]
            r9_5 += 1
        while (rcx_10 s>= rax_23)
    
    r12_1 = sx.q(rcx_10) + *(r10 + (sx.q(r9_5) << 3))

int32_t rcx_12 = zx.d(rax[6]) & 0x7fff
*(arg2 + 0x10) = &rax[7]
int32_t var_b8 = rcx_12
int32_t r9_6
r9_6.b = rcx_12 != 0x7fff
int32_t var_b4 = r9_6
int32_t* rdx_22
void var_b0

if (rcx_12 == 0x7fff)
    rdx_22 = &var_b0
else
    rdx_22 = zx.q(*(arg2 + 0x80) * rcx_12) + *(arg2 + 0x70)
int32_t* var_a8 = rdx_22
uint32_t rcx_13 = zx.d(rax[7])
*(arg2 + 0x10) = &rax[8]
int32_t r8_3 = rcx_13 & 0x7fff
int32_t var_a0 = r8_3
int64_t result
result.b = r8_3 != 0x7fff
int32_t result_1 = result.d
int64_t result_2

if (r8_3 == 0x7fff)
    void var_98
    result = &var_98
    result_2 = &var_98
else
    result_2 = zx.q(*(arg2 + 0x80) * r8_3) + *(arg2 + 0x70)

void* rbx = *(r15 + 8)

if (rbx != 0)
    int64_t* rbx_1 = *(rbx + 0x50)
    int32_t rdx_23 = *(r15 + 0x17c)
    uint32_t rax_27 = zx.d(*(rbx_1 + 0x5f))
    
    if (rax_27 s>= rdx_23)
        rdx_23 = rax_27
    
    int32_t rax_28 = sub_1423647f0(rbx_1, rdx_23)
    int64_t* rbx_3 = *(*rbx_1 + (sx.q(rax_28) << 3))
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    void* var_88
    sub_14229e7e0(&rbx_3[0x2f], &var_88)
    int32_t var_80
    int32_t temp2_1
    int32_t result_3
    temp2_1:result_3 = muls.dp.d(0x55555556, var_80)
    result = zx.q(result_3)
    
    if (*(arg2 + 0x40) s> 0)
        arg_18.q = zx.q(arg_18.b) << 2
        arg_20.q = zx.q(arg_20.b) << 2
        var_d8.q = zx.q(var_d8.b) << 2
        int128_t zmm6
        int128_t var_48_1 = zmm6
        int128_t zmm7
        int128_t var_58_1 = zmm7
        arg_10.q = var_a8
        int128_t zmm8
        int128_t var_68_1 = zmm8
        
        do
            int64_t rcx_22 = sx.q(mods.dp.d(sx.q(*r14_1), var_80 s/ 3) * 3)
            void* rax_43 = var_88
            char var_7c
            uint32_t r11_6
            
            if (var_7c == 0)
                r11_6 = zx.d(*(rax_43 + (rcx_22 << 1)))
            else
                r11_6 = *(rax_43 + (rcx_22 << 2))
            
            uint32_t r10_1
            
            if (var_7c == 0)
                r10_1 = zx.d(*(rax_43 + (rcx_22 << 1) + 2))
            else
                r10_1 = *(rax_43 + (rcx_22 << 2) + 4)
            
            uint32_t r9_7
            
            if (var_7c == 0)
                r9_7 = zx.d(*(rax_43 + (rcx_22 << 1) + 4))
            else
                r9_7 = *(rax_43 + (rcx_22 << 2) + 8)
            
            int64_t r8_5 = rbx_3[0x1b]
            r14_1 = &r14_1[zx.q(arg_10.b)]
            uint64_t rdx_29 = zx.q(*r12_1)
            i_1 += 1
            uint64_t rcx_23 = zx.q(rbx_3[0x1d].d)
            r12_1 = &r12_1[zx.q(r13_1)]
            int64_t rax_46 = zx.q(r9_7) * rcx_23 + rdx_29
            int64_t rax_49 = zx.q(r10_1) * rcx_23 + rdx_29
            int64_t rax_52 = zx.q(r11_6) * rcx_23 + rdx_29
            zmm6.d = (*(r8_5 + (rax_46 << 3))).d f* *var_c0
            zmm8.d = (*(r8_5 + (rax_46 << 3) + 4)).d f* *var_c0
            float zmm4 = *(r8_5 + (rax_49 << 3) + 4) * *var_c8
            var_c0 += var_d8.q
            zmm7.d = (*(r8_5 + (rax_52 << 3) + 4)).d f* *var_d0
            float zmm5 = *(r8_5 + (rax_52 << 3)) * *var_d0 + *(r8_5 + (rax_49 << 3)) * *var_c8
            var_d0 += arg_18.q
            var_c8 += arg_20.q
            zmm7.d = zmm7.d f+ zmm4
            zmm7.d = zmm7.d f+ zmm8.d
            *arg_10.q = zmm5 f+ zmm6.d
            *result_2 = zmm7.d
            void* r8_8 = &var_a8[sx.q(var_b4)]
            result = result_2
            arg_10.q = r8_8
            var_a8 = r8_8
            result_2 = result + (sx.q(result_1) << 2)
        while (i_1 s< *(arg2 + 0x40))
    
    if (rbx_3 != 0)
        result = zx.q(rbx_3[1].d)
        rbx_3[1].d -= 1
        
        if (result.d == 1)
            return (**rbx_3)(rbx_3, 1)
else
    int32_t r8_4 = 0
    
    if (*(arg2 + 0x40) s> 0)
        while (true)
            r8_4 += 1
            int32_t* var_a8_1 = &rdx_22[sx.q(r9_6)]
            *rdx_22 = 0
            int32_t* result_4 = result_2
            result = sx.q(result_1)
            result_2 = &result_4[result]
            *result_4 = 0
            
            if (r8_4 s>= *(arg2 + 0x40))
                break
            
            rdx_22 = var_a8_1
            r9_6 = var_b4

return result
