// 函数: sub_142c19240
// 地址: 0x142c19240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* const rbp = &data_14369a5d0
int32_t* rcx_2 = *sub_142c1f6d0(*(arg1 + 0x18) + 0xb8)
int128_t* const rax_1 = &data_14369a5d0

if (rcx_2 != 0)
    rax_1 = rcx_2

if (*(rax_1 + 0x18) u>= 0xc)
    rbp = rax_1[1].q

uint64_t result = zx.q(*(arg2 + 0x60))

if (result.d != 0)
    int64_t rbx_1 = 0
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        int16_t rax_3 = sub_142c1ed90(rbp, *(*(arg2 + 0x70) + rbx_1))
        rbx_1 += 0x14
        *(*(arg2 + 0x70) + rbx_1 - 8) = rax_3
        *(*(arg2 + 0x70) + rbx_1 - 6) = 0
        result = *(arg2 + 0x70)
        *(result + rbx_1 - 5) = 0
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
