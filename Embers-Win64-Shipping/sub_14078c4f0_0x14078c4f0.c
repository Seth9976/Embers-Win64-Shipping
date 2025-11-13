// 函数: sub_14078c4f0
// 地址: 0x14078c4f0
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
int32_t* result
result.b = rdx_2 != 0x7fff
int32_t var_24 = result.d
int32_t* result_1

if (rdx_2 == 0x7fff)
    void var_20
    result = &var_20
    result_1 = &var_20
else
    result_1 = zx.q(*(arg2 + 0x80) * rdx_2) + *(arg2 + 0x70)

if (*(arg2 + 0x40) s> 0)
    do
        int32_t zmm0_1 = sub_141f86ef0(r14 + 0x58, *rbx_1, zx.o(0))
        rbx_1 += zx.q(r10_1) << 2
        i += 1
        *result_1 = zmm0_1
        result = result_1
        result_1 = &result[sx.q(var_24)]
    while (i s< *(arg2 + 0x40))

return result
