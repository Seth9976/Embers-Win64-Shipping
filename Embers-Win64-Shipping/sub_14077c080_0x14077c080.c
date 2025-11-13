// 函数: sub_14077c080
// 地址: 0x14077c080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
uint32_t r8 = zx.d(*rax)
*(arg2 + 0x10) = &rax[1]
uint8_t r10_1 = (r8 u>> 0xf).b
int32_t rdx_1 = r8 & 0x7fff
int128_t* rsi_1

if ((not.b(r10_1) & 1) == 0)
    rsi_1 = zx.q(*(arg2 + 0x80) * rdx_1) + *(arg2 + 0x70)
else
    int32_t* r9_1 = *(arg2 + 0x20)
    int32_t r8_1 = 0
    int32_t rax_2 = *r9_1
    
    if (rdx_1 s>= rax_2)
        int64_t rcx = 0
        
        do
            rdx_1 -= rax_2
            rcx += 1
            rax_2 = r9_1[rcx]
            r8_1 += 1
        while (rdx_1 s>= rax_2)
    
    rsi_1 = sx.q(rdx_1) + *(*(arg2 + 0x18) + (sx.q(r8_1) << 3))

int32_t rcx_3 = zx.d(rax[1]) & 0x7fff
*(arg2 + 0x10) = &rax[2]
int32_t var_c8 = rcx_3
int32_t rax_4
rax_4.b = rcx_3 != 0x7fff
void* var_b8
void var_c0

if (rcx_3 == 0x7fff)
    var_b8 = &var_c0
else
    var_b8 = zx.q(rcx_3 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_7 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_b0 = rcx_7
int32_t rax_5
rax_5.b = rcx_7 != 0x7fff
void* var_a0
void var_a8

if (rcx_7 == 0x7fff)
    var_a0 = &var_a8
else
    var_a0 = zx.q(rcx_7 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_11 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_98 = rcx_11
int32_t rax_6
rax_6.b = rcx_11 != 0x7fff
void* var_88
void var_90

if (rcx_11 == 0x7fff)
    var_88 = &var_90
else
    var_88 = zx.q(rcx_11 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_14 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
int32_t rdx_6 = rcx_14 & 0x7fff
int32_t var_80 = rdx_6
int64_t result
result.b = rdx_6 != 0x7fff
int32_t result_1 = result.d
void* var_70

if (rdx_6 == 0x7fff)
    void var_78
    result = &var_78
    var_70 = &var_78
else
    var_70 = zx.q(*(arg2 + 0x80) * rdx_6) + *(arg2 + 0x70)

if (*(arg2 + 0x40) s> 0)
    uint128_t zmm7
    uint128_t var_48_1 = zmm7
    
    do
        int128_t* rax_9 = rsi_1
        rsi_1 += zx.q(r10_1) << 2
        int128_t zmm0_1
        uint128_t zmm7_1
        int512_t zmm9_1
        zmm0_1, zmm7_1, zmm9_1 = sub_141f86ef0(arg1 + 0x1d8, *rax_9, zx.o(0))
        zmm9_1.o = zmm0_1
        int128_t zmm0_2
        uint128_t zmm7_2
        int512_t zmm8_1
        zmm0_2, zmm7_2, zmm8_1 = sub_141f86ef0(arg1 + 0x158, zmm7_1, zx.o(0))
        zmm8_1.o = zmm0_2
        int128_t zmm0_3
        int512_t zmm6_1
        uint128_t zmm7_3
        zmm0_3, zmm6_1, zmm7_3 = sub_141f86ef0(arg1 + 0xd8, zmm7_2, zx.o(0))
        zmm6_1.o = zmm0_3
        int32_t zmm0_4
        int32_t zmm6_2
        int32_t zmm8_2
        int32_t zmm9_2
        zmm0_4, zmm6_2, zmm8_2, zmm9_2 = sub_141f86ef0(arg1 + 0x58, zmm7_3, zx.o(0))
        int32_t* rdx_7 = var_b8
        i += 1
        var_b8 = &rdx_7[sx.q(rax_4)]
        *rdx_7 = zmm0_4
        int32_t* rdx_8 = var_a0
        var_a0 = &rdx_8[sx.q(rax_5)]
        *rdx_8 = zmm6_2
        int32_t* rdx_9 = var_88
        var_88 = &rdx_9[sx.q(rax_6)]
        *rdx_9 = zmm8_2
        int32_t* rdx_10 = var_70
        result = sx.q(result_1)
        var_70 = &rdx_10[result]
        *rdx_10 = zmm9_2
    while (i s< *(arg2 + 0x40))

return result
