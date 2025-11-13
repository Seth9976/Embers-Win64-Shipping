// 函数: sub_14275fa20
// 地址: 0x14275fa20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax_2 = *(arg1 + 0x10)
int32_t* r8 = *(arg1 + 0x20)
uint32_t rax = zx.d(*rax_2)
*(arg1 + 0x10) = &rax_2[1]
int32_t rdx_1 = *r8

if (rax s>= rdx_1)
    int64_t rcx = 0
    
    do
        rax -= rdx_1
        rcx += 1
        rdx_1 = r8[rcx]
    while (rax s>= rdx_1)

uint64_t rdx_3 = zx.q(*(arg1 + 0x80) * zx.d(rax_2[1]))
*(arg1 + 0x10) = &rax_2[2]
uint64_t result = zx.q(*(arg1 + 0x40))
uint64_t result_1 = rdx_3 + *(arg1 + 0x70)

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
