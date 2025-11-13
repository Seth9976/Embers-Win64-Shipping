// 函数: sub_142baabe0
// 地址: 0x142baabe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rsi = *arg2

if (rsi u< *(arg1 + 0x44))
    int32_t rax_4
    
    if ((*(arg1 + 0x218) & 1) == 0)
        rax_4 = 0
    else
        int64_t rax_1 = *(arg1 + 0x50)
        uint64_t rcx = zx.q(rsi)
        int32_t rax_2 =
            (*(arg1 + 0x328))(arg1, zx.q(*(rax_1 + (rcx << 3))), zx.q(*(rax_1 + (rcx << 3) + 4)))
        rax_4 = (*(arg1 + 0x320))(arg1, zx.q(rax_2), zx.q(*(arg1 + 0x1ac))) - rax_2
    
    (*(arg1 + 0x340))(arg1, arg1 + 0x38, zx.q(rsi), zx.q(rax_4))
    *(arg1 + 0x1c0) = rsi
    *(arg1 + 0x1c2) = rsi
else if (*(arg1 + 0x315) != 0)
    *(arg1 + 0x18) = 0x86
