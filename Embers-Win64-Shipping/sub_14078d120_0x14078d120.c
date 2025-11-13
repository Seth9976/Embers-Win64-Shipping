// 函数: sub_14078d120
// 地址: 0x14078d120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
void* r14 = *(arg1 + 8)
uint32_t rcx = zx.d(*rax)
*(arg2 + 0x10) = &rax[1]
uint8_t r10_1 = (rcx u>> 0xf).b
int32_t r8_1 = rcx & 0x7fff
int128_t* rbx_1

if ((not.b(r10_1) & 1) == 0)
    rbx_1 = zx.q(*(arg2 + 0x80) * r8_1) + *(arg2 + 0x70)
else
    int32_t* r9_1 = *(arg2 + 0x20)
    int32_t rdx = 0
    int32_t rax_2 = *r9_1
    
    if (r8_1 s>= rax_2)
        int64_t rcx_1 = 0
        
        do
            r8_1 -= rax_2
            rcx_1 += 1
            rax_2 = r9_1[rcx_1]
            rdx += 1
        while (r8_1 s>= rax_2)
    
    rbx_1 = sx.q(r8_1) + *(*(arg2 + 0x18) + (sx.q(rdx) << 3))

int32_t rdx_2 = zx.d(rax[1]) & 0x7fff
*(arg2 + 0x10) = &rax[2]
int32_t var_28 = rdx_2
int32_t rax_5
rax_5.b = rdx_2 != 0x7fff
int64_t var_18
void var_20

if (rdx_2 == 0x7fff)
    var_18 = &var_20
else
    var_18 = zx.q(*(arg2 + 0x80) * rdx_2) + *(arg2 + 0x70)

if (*(arg2 + 0x40) s> 0)
    do
        int32_t zmm0_1 = sub_141f86ef0(r14 + 0x58, *rbx_1, zx.o(0))
        rbx_1 += zx.q(r10_1) << 2
        i += 1
        *var_18 = zmm0_1
        var_18 += sx.q(rax_5) << 2
    while (i s< *(arg2 + 0x40))

uint64_t result
result.b = 1
return result
