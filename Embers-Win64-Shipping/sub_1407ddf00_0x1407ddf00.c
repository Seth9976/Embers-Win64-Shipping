// 函数: sub_1407ddf00
// 地址: 0x1407ddf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
uint32_t r8 = zx.d(*rax)
*(arg2 + 0x10) = &rax[1]
uint8_t r10_1 = (r8 u>> 0xf).b
int32_t rdx_1 = r8 & 0x7fff
int128_t* rdi_1

if ((not.b(r10_1) & 1) == 0)
    rdi_1 = zx.q(*(arg2 + 0x80) * rdx_1) + *(arg2 + 0x70)
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
    
    rdi_1 = sx.q(rdx_1) + *(*(arg2 + 0x18) + (sx.q(r8_1) << 3))

int32_t rcx_3 = zx.d(rax[1]) & 0x7fff
*(arg2 + 0x10) = &rax[2]
int32_t var_a8 = rcx_3
int32_t rax_4
rax_4.b = rcx_3 != 0x7fff
void* var_98
void var_a0

if (rcx_3 == 0x7fff)
    var_98 = &var_a0
else
    var_98 = zx.q(rcx_3 * *(arg2 + 0x80)) + *(arg2 + 0x70)
int32_t rcx_7 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_90 = rcx_7
int32_t rax_5
rax_5.b = rcx_7 != 0x7fff
void* var_80
void var_88

if (rcx_7 == 0x7fff)
    var_80 = &var_88
else
    var_80 = zx.q(rcx_7 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_10 = zx.d(rax[3])
*(arg2 + 0x10) = &rax[4]
int32_t rdx_5 = rcx_10 & 0x7fff
int32_t var_78 = rdx_5
int64_t result
result.b = rdx_5 != 0x7fff
int32_t result_1 = result.d
void* var_68

if (rdx_5 == 0x7fff)
    void var_70
    result = &var_70
    var_68 = &var_70
else
    var_68 = zx.q(*(arg2 + 0x80) * rdx_5) + *(arg2 + 0x70)

if (*(arg2 + 0x40) s> 0)
    uint128_t zmm6
    uint128_t var_38_1 = zmm6
    
    do
        int128_t* rax_7 = rdi_1
        rdi_1 += zx.q(r10_1) << 2
        int128_t zmm0_1
        uint128_t zmm6_1
        int512_t zmm8_1
        zmm0_1, zmm6_1, zmm8_1 = sub_141f86ef0(arg1 + 0x158, *rax_7, zx.o(0))
        zmm8_1.o = zmm0_1
        int128_t zmm0_2
        uint128_t zmm6_2
        int512_t zmm7_1
        zmm0_2, zmm6_2, zmm7_1 = sub_141f86ef0(arg1 + 0xd8, zmm6_1, zx.o(0))
        zmm7_1.o = zmm0_2
        int32_t zmm0_3
        int32_t zmm7_2
        int32_t zmm8_2
        zmm0_3, zmm7_2, zmm8_2 = sub_141f86ef0(arg1 + 0x58, zmm6_2, zx.o(0))
        int32_t* rdx_6 = var_98
        i += 1
        var_98 = &rdx_6[sx.q(rax_4)]
        *rdx_6 = zmm0_3
        int32_t* rdx_7 = var_80
        var_80 = &rdx_7[sx.q(rax_5)]
        *rdx_7 = zmm7_2
        int32_t* rdx_8 = var_68
        result = sx.q(result_1)
        var_68 = &rdx_8[result]
        *rdx_8 = zmm8_2
    while (i s< *(arg2 + 0x40))

return result
