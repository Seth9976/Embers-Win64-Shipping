// 函数: sub_1407ddd30
// 地址: 0x1407ddd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
uint32_t r8 = zx.d(*rax)
*(arg2 + 0x10) = &rax[1]
uint8_t r10_1 = (r8 u>> 0xf).b
int32_t r8_1 = r8 & 0x7fff
int128_t* rdi_1

if ((not.b(r10_1) & 1) == 0)
    rdi_1 = zx.q(*(arg2 + 0x80) * r8_1) + *(arg2 + 0x70)
else
    int32_t* r9_1 = *(arg2 + 0x20)
    int32_t rdx = 0
    int32_t rax_2 = *r9_1
    
    if (r8_1 s>= rax_2)
        int64_t rcx = 0
        
        do
            r8_1 -= rax_2
            rcx += 1
            rax_2 = r9_1[rcx]
            rdx += 1
        while (r8_1 s>= rax_2)
    
    rdi_1 = sx.q(r8_1) + *(*(arg2 + 0x18) + (sx.q(rdx) << 3))

int32_t rcx_3 = zx.d(rax[1]) & 0x7fff
*(arg2 + 0x10) = &rax[2]
int32_t var_68 = rcx_3
int32_t rax_4
rax_4.b = rcx_3 != 0x7fff
void* var_58
void var_60

if (rcx_3 == 0x7fff)
    var_58 = &var_60
else
    var_58 = zx.q(rcx_3 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_6 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]
int32_t rdx_3 = rcx_6 & 0x7fff
int32_t var_50 = rdx_3
int64_t result
result.b = rdx_3 != 0x7fff
int32_t result_1 = result.d
void* var_40

if (rdx_3 == 0x7fff)
    void var_48
    result = &var_48
    var_40 = &var_48
else
    var_40 = zx.q(*(arg2 + 0x80) * rdx_3) + *(arg2 + 0x70)

if (*(arg2 + 0x40) s> 0)
    uint128_t zmm6
    uint128_t var_28_1 = zmm6
    
    do
        int128_t* rax_6 = rdi_1
        rdi_1 += zx.q(r10_1) << 2
        int128_t zmm0_1
        uint128_t zmm6_1
        int512_t zmm7_1
        zmm0_1, zmm6_1, zmm7_1 = sub_141f86ef0(arg1 + 0xd8, *rax_6, zx.o(0))
        zmm7_1.o = zmm0_1
        int32_t zmm0_2
        int32_t zmm7_2
        zmm0_2, zmm7_2 = sub_141f86ef0(arg1 + 0x58, zmm6_1, zx.o(0))
        int32_t* rdx_4 = var_58
        i += 1
        var_58 = &rdx_4[sx.q(rax_4)]
        *rdx_4 = zmm0_2
        int32_t* rdx_5 = var_40
        result = sx.q(result_1)
        var_40 = &rdx_5[result]
        *rdx_5 = zmm7_2
    while (i s< *(arg2 + 0x40))

return result
