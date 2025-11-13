// 函数: sub_14274daf0
// 地址: 0x14274daf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x10) += 2
int16_t* rdx = *(arg1 + 0x10)
uint32_t rax = zx.d(*rdx)
*(arg1 + 0x10) = &rdx[1]
uint32_t rdx_1 = rax
int32_t* rcx = *(arg1 + 0x20)
int32_t r8 = *rcx

if (rax s>= r8)
    int64_t rax_1 = 0
    
    do
        rdx_1 -= r8
        rax_1 += 1
        r8 = rcx[rax_1]
    while (rdx_1 s>= r8)

uint64_t rcx_2 = zx.q(zx.d(rdx[1]) * *(arg1 + 0x80))
*(arg1 + 0x10) = &rdx[2]
uint64_t result = zx.q(*(arg1 + 0x40))
uint64_t result_1 = rcx_2 + *(arg1 + 0x70)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        result = result_1
        result_1 += 4
        *result = 0
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
