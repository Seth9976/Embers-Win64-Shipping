// 函数: sub_1406f5880
// 地址: 0x1406f5880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
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

int64_t r11 = *(arg2 + 0x18)
int32_t* rsi = *(*(arg2 + 0x38) + (sx.q(*(*(r11 + (sx.q(r9) << 3)) + sx.q(rdx_1))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t rdi_1 = (rax_5 u>> 0xf).b
int32_t rcx_3 = rax_5 & 0x7fff
int32_t* r14_1

if ((not.b(rdi_1) & 1) == 0)
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
    
    r14_1 = sx.q(rcx_3) + *(r11 + (sx.q(r9_1) << 3))

int32_t rcx_5 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_c8 = rcx_5
int32_t rax_9
rax_9.b = rcx_5 != 0x7fff
void* var_b8
void var_c0

if (rcx_5 == 0x7fff)
    var_b8 = &var_c0
else
    var_b8 = zx.q(rcx_5 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_9 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_b0 = rcx_9
int32_t rax_10
rax_10.b = rcx_9 != 0x7fff
void* var_a0
void var_a8

if (rcx_9 == 0x7fff)
    var_a0 = &var_a8
else
    var_a0 = zx.q(rcx_9 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_13 = zx.d(rax[4]) & 0x7fff
*(arg2 + 0x10) = &rax[5]
int32_t var_98 = rcx_13
int32_t rax_11
rax_11.b = rcx_13 != 0x7fff
void* var_88
void var_90

if (rcx_13 == 0x7fff)
    var_88 = &var_90
else
    var_88 = zx.q(rcx_13 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_16 = zx.d(rax[5])
*(arg2 + 0x10) = &rax[6]
int32_t rdx_8 = rcx_16 & 0x7fff
int32_t var_80 = rdx_8
int32_t result_1
result_1.b = rdx_8 != 0x7fff
void* var_70
void var_78

if (rdx_8 == 0x7fff)
    var_70 = &var_78
else
    var_70 = zx.q(*(arg2 + 0x80) * rdx_8) + *(arg2 + 0x70)
int32_t var_1c
int32_t var_1c_1 = var_1c & 0xfffffff8
int32_t var_58 = 0xffffffff
int128_t var_68 = zx.o(0)
int32_t var_54
__builtin_memset(&var_54, 0, 0x34)
int32_t var_20 = 0xffffffff
sub_14077b510(&var_68, rsi)
uint64_t result = zx.q(*(arg2 + 0x40))
int128_t var_48

if (var_48.q == 0)
    int32_t i = 0
    
    if (result.d s> 0)
        do
            void* rdx_18 = var_b8
            i += 1
            var_b8 = rdx_18 + (sx.q(rax_9) << 2)
            *rdx_18 = 0xffffffff
            void* rdx_19 = var_a0
            var_a0 = rdx_19 + (sx.q(rax_10) << 2)
            *rdx_19 = 0
            void* rdx_20 = var_88
            var_88 = rdx_20 + (sx.q(rax_11) << 2)
            *rdx_20 = 0
            void* rdx_21 = var_70
            result = sx.q(result_1)
            var_70 = rdx_21 + (result << 2)
            *rdx_21 = 0
        while (i s< *(arg2 + 0x40))
else
    int32_t i_1 = 0
    
    if (result.d s> 0)
        do
            int32_t rcx_21 = *r14_1
            r14_1 = &r14_1[zx.q(rdi_1)]
            int128_t var_38
            int64_t* rdx_10 = var_38:8.q
            int32_t rax_14 = rdx_10[1].d - 1
            
            if (rcx_21 s<= rax_14)
                rax_14 = rcx_21
            
            int64_t* rcx_23 = var_48:8.q
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = muls.dp.d(0x55555556, *(*rdx_10 + (sx.q(rax_14) << 2)))
            int32_t rdi_4 = (temp0_1 u>> 0x1f) + temp0_1
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = muls.dp.d(0x55555556, (*(*rcx_23 + 0x58))(rcx_23))
            int32_t r8_4 = (temp2_1 u>> 0x1f) - 1 + temp2_1
            
            if (rdi_4 s< 0)
                r8_4 = 0
            else if (rdi_4 s< r8_4)
                r8_4 = rdi_4
            
            int32_t* rdx_14 = var_b8
            i_1 += 1
            var_b8 = &rdx_14[sx.q(rax_9)]
            *rdx_14 = r8_4
            int32_t* rdx_15 = var_a0
            var_a0 = &rdx_15[sx.q(rax_10)]
            *rdx_15 = 0x3eaaaaab
            int32_t* rdx_16 = var_88
            var_88 = &rdx_16[sx.q(rax_11)]
            *rdx_16 = 0x3eaaaaab
            int32_t* rdx_17 = var_70
            result = sx.q(result_1)
            var_70 = &rdx_17[result]
            *rdx_17 = 0x3eaaaaab
        while (i_1 s< *(arg2 + 0x40))

return result
