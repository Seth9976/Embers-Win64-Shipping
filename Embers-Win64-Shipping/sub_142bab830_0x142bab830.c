// 函数: sub_142bab830
// 地址: 0x142bab830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rdi = *arg2

if (rdi u< *(arg1 + 0xc4))
    uint64_t rsi_1 = zx.q(rdi) << 3
    int64_t rax_2 = *(arg1 + 0xd0)
    int32_t rax_3 = (*(arg1 + 0x328))(arg3, zx.q(*(rax_2 + rsi_1)), zx.q(*(rax_2 + rsi_1 + 4)))
    (*(arg1 + 0x340))(arg1, arg1 + 0xb8, zx.q(rdi), zx.q(*(arg2 + 4) - rax_3))
    
    if (*(arg1 + 0x200) == 0)
        *(rsi_1 + *(arg1 + 0xc8)) = *(rsi_1 + *(arg1 + 0xd0))
else if (*(arg1 + 0x315) != 0)
    *(arg1 + 0x18) = 0x86
