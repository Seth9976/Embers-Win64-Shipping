// 函数: sub_142bab370
// 地址: 0x142bab370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rsi = *arg2
int16_t rcx

if (rsi u< *(arg1 + 0x84))
    rcx = *(arg1 + 0x1c0)

if (rsi u< *(arg1 + 0x84) && rcx u< *(arg1 + 0x44))
    if (*(arg1 + 0x1fe) == 0)
        uint64_t rbx_1 = zx.q(rsi) << 3
        *(rbx_1 + *(arg1 + 0x88)) = *(*(arg1 + 0x48) + (zx.q(rcx) << 3))
        (*(arg1 + 0x348))(arg1, arg1 + 0x78, zx.q(rsi), zx.q(*(arg2 + 4)))
        *(rbx_1 + *(arg1 + 0x90)) = *(rbx_1 + *(arg1 + 0x88))
    
    int32_t* r9_2 = *(arg1 + 0x50) + (zx.q(*(arg1 + 0x1c0)) << 3)
    int64_t rax_7 = *(arg1 + 0x90)
    uint64_t rcx_5 = zx.q(rsi)
    int32_t rax_8 = (*(arg1 + 0x328))(arg1, zx.q(*(rax_7 + (rcx_5 << 3)) - *r9_2), 
        zx.q(*(rax_7 + (rcx_5 << 3) + 4) - r9_2[1]))
    (*(arg1 + 0x340))(arg1, arg1 + 0x78, zx.q(rsi), zx.q(*(arg2 + 4) - rax_8))
    bool cond:0_1 = (*(arg1 + 0x218) & 1) == 0
    *(arg1 + 0x1c2) = *(arg1 + 0x1c0)
    *(arg1 + 0x1c4) = rsi
    
    if (not(cond:0_1))
        *(arg1 + 0x1c0) = rsi
else if (*(arg1 + 0x315) != 0)
    *(arg1 + 0x18) = 0x86
