// 函数: sub_1427620a0
// 地址: 0x1427620a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r9 = *(arg1 + 0x80)
uint32_t rsi = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
uint64_t rbx_1 = zx.q(zx.d(rax[1]) * r9)
*(arg1 + 0x10) = &rax[2]
int32_t result = *(arg1 + 0x44)
int128_t* rbx_2 = rbx_1 + *(arg1 + 0x70)
int128_t* rsi_2 = zx.q(rsi * r9) + *(arg1 + 0x70)

if (result s> 0)
    uint64_t rbp_1 = zx.q(result)
    uint64_t i
    
    do
        int128_t* rdi_1 = rbx_2
        int128_t var_18 = *rsi_2
        rsi_2 = &rsi_2[1]
        rbx_2 = &rbx_2[1]
        *rdi_1 = sub_141c46b90(&var_18)
        i = rbp_1
        rbp_1 -= 1
    while (i != 1)

return result
