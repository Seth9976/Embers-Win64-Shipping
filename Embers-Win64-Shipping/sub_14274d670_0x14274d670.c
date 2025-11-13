// 函数: sub_14274d670
// 地址: 0x14274d670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax_5 = *(arg1 + 0x10)
uint64_t r8 = zx.q(*rax_5)
*(arg1 + 0x10) = &rax_5[1]
uint64_t r10 = zx.q(rax_5[1])
int64_t* r9_1 = r8 * 0x70 + *(arg1 + 0x50)
*(arg1 + 0x10) = &rax_5[2]
uint32_t rdx = zx.d(rax_5[2])
*(arg1 + 0x10) = &rax_5[3]
void* result = zx.q(rdx * *(arg1 + 0x80)) + *(arg1 + 0x70)
int128_t* rcx_2 = *(*r9_1 + (r10 << 3)) + ((sx.q(*(r9_1 + 0x14)) + sx.q(*(arg1 + 0x48))) << 2)

if (*(arg1 + 0x44) s> 0)
    uint64_t i_1 = zx.q(*(arg1 + 0x44))
    uint64_t i
    
    do
        result += 0x10
        int128_t zmm0 = *rcx_2
        rcx_2 = &rcx_2[1]
        *(result - 0x10) = zmm0
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
