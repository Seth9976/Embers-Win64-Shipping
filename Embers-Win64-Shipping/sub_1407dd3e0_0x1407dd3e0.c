// 函数: sub_1407dd3e0
// 地址: 0x1407dd3e0
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
int32_t* var_88
void var_90

if (rcx_5 == 0x7fff)
    var_88 = &var_90
else
    var_88 = zx.q(rcx_5 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_9 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_80 = rcx_9
int32_t rax_10
rax_10.b = rcx_9 != 0x7fff
float* var_70
void var_78

if (rcx_9 == 0x7fff)
    var_70 = &var_78
else
    var_70 = zx.q(rcx_9 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_13 = zx.d(rax[4]) & 0x7fff
*(arg2 + 0x10) = &rax[5]
int32_t var_68 = rcx_13
int32_t rax_11
rax_11.b = rcx_13 != 0x7fff
int32_t* var_58
void var_60

if (rcx_13 == 0x7fff)
    var_58 = &var_60
else
    var_58 = zx.q(rcx_13 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_16 = zx.d(rax[5])
*(arg2 + 0x10) = &rax[6]
int32_t rdx_8 = rcx_16 & 0x7fff
int32_t var_50 = rdx_8
int32_t rax_13
rax_13.b = rdx_8 != 0x7fff
float* var_40
void var_48

if (rdx_8 == 0x7fff)
    var_40 = &var_48
else
    var_40 = zx.q(*(arg2 + 0x80) * rdx_8) + *(arg2 + 0x70)
int32_t rdx_9 = *(r15 + 0x17c)
int64_t* rbx = *(*(r15 + 8) + 0x50)
uint32_t rax_15 = zx.d(*(rbx + 0x5f))

if (rax_15 s>= rdx_9)
    rdx_9 = rax_15

int32_t rax_16 = sub_1423647f0(rbx, rdx_9)
int64_t* rbx_2 = *(*rbx + (sx.q(rax_16) << 3))

if (rbx_2 != 0)
    rbx_2[1].d += 1

void* var_38
sub_14229e7e0(&rbx_2[0x2f], &var_38)
int32_t i = 0
int32_t r8_2 = rbx_2[6].d - 1

if (*(arg2 + 0x40) s> 0)
    int32_t* r14_2 = var_88
    
    do
        int32_t rax_17 = *rsi_1
        int32_t rcx_23
        
        if (rax_17 s>= 0)
            rcx_23 = r8_2
            
            if (rax_17 s< r8_2)
                rcx_23 = rax_17
        else
            rcx_23 = 0
        
        void* rax_18 = rbx_2[5]
        void* rdx_11 = &rbx_2[2]
        
        if (rax_18 != 0)
            rdx_11 = rax_18
        
        int64_t r9_2 = sx.q(rcx_23) * 3
        int32_t rcx_24 = *(rdx_11 + (r9_2 << 3) + 8)
        int32_t rcx_25
        uint128_t zmm0
        
        if (rcx_24 s<= 0)
            rcx_25 = 0
        else
            int32_t rax_20 = *(arg2 + 0x8c) * 0xbb38435
            zmm0 = _mm_cvtepi32_ps(zx.o(rcx_24))
            *(arg2 + 0x8c) = rax_20 + 0x3619636b
            rcx_25 = int.d((((rax_20 + 0x3619636b) u>> 9 | 0x3f800000) - 1f) f* zmm0.d)
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = mulu.dp.d(0xaaaaaaab, *(rdx_11 + (r9_2 << 3) + 4))
        rsi_1 = &rsi_1[zx.q(r14_1)]
        i += 1
        *r14_2 = (temp1_1 u>> 1) + rcx_25
        int32_t rcx_27 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
        zmm0.d = (rcx_27 u>> 9 | 0x3f800000).d f- 1f
        int32_t temp0_2 = _mm_sqrt_ss((zx.o(0)).d, zmm0.d)
        *(arg2 + 0x8c) = rcx_27 * 0xbb38435 + 0x3619636b
        arg4 = ((rcx_27 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000) - 1f
        arg3 = 1f f- temp0_2
        zmm0.d = 1f - arg4
        arg4 = arg4 f* temp0_2
        *var_70 = arg3
        zmm0.d = zmm0.d f* temp0_2
        *var_58 = zmm0.d
        *var_40 = arg4
        r14_2 = &var_88[sx.q(rax_9)]
        var_88 = r14_2
        var_70 = &var_70[sx.q(rax_10)]
        var_58 = &var_58[sx.q(rax_11)]
        var_40 = &var_40[sx.q(rax_13)]
    while (i s< *(arg2 + 0x40))

int32_t result = rbx_2[1].d
rbx_2[1].d -= 1

if (result != 1)
    return result

return (**rbx_2)(rbx_2, 1, arg3, arg4, rcx_5)
