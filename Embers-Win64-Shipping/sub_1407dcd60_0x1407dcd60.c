// 函数: sub_1407dcd60
// 地址: 0x1407dcd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

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

int64_t r11 = *(arg2 + 0x18)
void* r15 = *(*(arg2 + 0x38) + (sx.q(*(*(r11 + (sx.q(r9) << 3)) + sx.q(rdx_1))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t r14_1 = (rax_5 u>> 0xf).b
int32_t rcx_3 = rax_5 & 0x7fff
int32_t* rsi_1

if ((not.b(r14_1) & 1) == 0)
    rsi_1 = zx.q(*(arg2 + 0x80) * rcx_3) + *(arg2 + 0x70)
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
    
    rsi_1 = sx.q(rcx_3) + *(r11 + (sx.q(r9_1) << 3))

uint32_t rcx_4 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]
int32_t rcx_5 = rcx_4 & 0x7fff
int32_t rax_9
rax_9.b = rcx_5 != 0x7fff
int32_t* var_98
void var_a0

if (rcx_5 == 0x7fff)
    var_98 = &var_a0
else
    var_98 = zx.q(rcx_5 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_9 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_90 = rcx_9
int32_t rax_10
rax_10.b = rcx_9 != 0x7fff
int32_t* var_80
void var_88

if (rcx_9 == 0x7fff)
    var_80 = &var_88
else
    var_80 = zx.q(rcx_9 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_13 = zx.d(rax[4]) & 0x7fff
*(arg2 + 0x10) = &rax[5]
int32_t var_78 = rcx_13
int32_t rax_11
rax_11.b = rcx_13 != 0x7fff
float* var_68
void var_70

if (rcx_13 == 0x7fff)
    var_68 = &var_70
else
    var_68 = zx.q(rcx_13 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_16 = zx.d(rax[5])
*(arg2 + 0x10) = &rax[6]
int32_t rdx_8 = rcx_16 & 0x7fff
int32_t var_60 = rdx_8
int32_t rax_13
rax_13.b = rdx_8 != 0x7fff
int32_t* var_50
void var_58

if (rdx_8 == 0x7fff)
    var_50 = &var_58
else
    var_50 = zx.q(*(arg2 + 0x80) * rdx_8) + *(arg2 + 0x70)
int32_t rdx_9 = *(r15 + 0x17c)
int64_t* rbx = *(*(r15 + 8) + 0x50)
uint32_t rax_15 = zx.d(*(rbx + 0x5f))

if (rax_15 s>= rdx_9)
    rdx_9 = rax_15

int32_t rax_16 = sub_1423647f0(rbx, rdx_9)
int64_t* rbx_2 = *(*rbx + (sx.q(rax_16) << 3))

if (rbx_2 != 0)
    rbx_2[1].d += 1

void* var_48
sub_14229e7e0(&rbx_2[0x2f], &var_48)
int32_t i = 0
int32_t r9_3 = rbx_2[6].d - 1

if (*(arg2 + 0x40) s> 0)
    int32_t* arg_20 = var_98
    
    do
        int32_t rax_18 = *rsi_1
        int32_t rcx_23
        
        if (rax_18 s>= 0)
            rcx_23 = r9_3
            
            if (rax_18 s< r9_3)
                rcx_23 = rax_18
        else
            rcx_23 = 0
        
        void* rax_19 = rbx_2[5]
        void* r11_1 = &rbx_2[2]
        int64_t rdx_11 = sx.q(rcx_23)
        
        if (rax_19 != 0)
            r11_1 = rax_19
        
        int32_t rcx_25 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
        *(arg2 + 0x8c) = rcx_25 * 0xbb38435 + 0x3619636b
        void* rax_27 = rbx_2[0x55]
        
        if ((rax_27.b & 1) != 0)
            rax_27 = (rax_27 s>> 1) + &rbx_2[0x55]
        
        void* rdx_13 = (rdx_11 << 6) + rax_27
        void* rax_29 = *(rdx_13 + 8)
        uint128_t zmm1
        zmm1.d = _mm_cvtepi32_ps(zx.o(*(rdx_13 + 0x10))).d
            f* (((rcx_25 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000) - 1f)
        int32_t r8_1 = int.d(zmm1.d)
        
        if ((rax_29.b & 1) != 0)
            rax_29 = (rax_29 s>> 1) + rdx_13 + 8
        
        int64_t rcx_27 = sx.q(r8_1)
        
        if (not((rcx_25 u>> 9 | 0x3f800000) - 1f f< *(rax_29 + (rcx_27 << 2))))
            void* rax_31 = *(rdx_13 + 0x18)
            
            if ((rax_31.b & 1) != 0)
                rax_31 = (rax_31 s>> 1) + rdx_13 + 0x18
            
            r8_1 = *(rax_31 + (rcx_27 << 2))
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = mulu.dp.d(0xaaaaaaab, *(r11_1 + rdx_11 * 0x18 + 4))
        rsi_1 = &rsi_1[zx.q(r14_1)]
        i += 1
        *arg_20 = (temp1_1 u>> 1) + r8_1
        int32_t rcx_29 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
        int32_t temp0_2 = _mm_sqrt_ss((zx.o(0)).d, (rcx_29 u>> 9 | 0x3f800000) - 1f)
        *(arg2 + 0x8c) = rcx_29 * 0xbb38435 + 0x3619636b
        arg3 = ((rcx_29 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000) - 1f
        zmm1.d = 1f f- temp0_2
        *var_80 = zmm1.d
        arg4 = temp0_2 f* arg3
        *var_68 = (1f - arg3) f* temp0_2
        *var_50 = arg4
        int32_t* rdx_18 = &var_98[sx.q(rax_9)]
        arg_20 = rdx_18
        var_98 = rdx_18
        var_80 = &var_80[sx.q(rax_10)]
        var_68 = &var_68[sx.q(rax_11)]
        var_50 = &var_50[sx.q(rax_13)]
    while (i s< *(arg2 + 0x40))

int32_t result = rbx_2[1].d
rbx_2[1].d -= 1

if (result != 1)
    return result

return (**rbx_2)(rbx_2, 1, arg3, arg4, rcx_5)
