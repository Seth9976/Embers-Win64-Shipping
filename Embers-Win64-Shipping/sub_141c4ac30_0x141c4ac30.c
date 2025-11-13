// 函数: sub_141c4ac30
// 地址: 0x141c4ac30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = 0

if (0 == *(arg1 + 0x20))
    *(arg1 + 0x20) = 0
else
    rax = *(arg1 + 0x20)

int32_t rax_1 = 0

if (0 == *(arg1 + 0x24))
    *(arg1 + 0x24) = 0
else
    rax_1 = *(arg1 + 0x24)

if (modu.dp.d(0:(rax - 1 + *(arg1 + 0x18) - rax_1), *(arg1 + 0x18)) s<= 0)
    uint64_t rax_4
    rax_4.b = 0
    return rax_4

int32_t rax_5 = 0

if (0 == *(arg1 + 0x24))
    *(arg1 + 0x24) = 0
else
    rax_5 = *(arg1 + 0x24)

int64_t rdi = sx.q(rax_5)
int64_t* r8 = *(arg1 + 0x10) + (rdi << 3)

if (r8 != arg2)
    int64_t* rcx_3 = *r8
    *r8 = *arg2
    *arg2 = 0
    
    if (rcx_3 != 0)
        int64_t r8_1 = *rcx_3
        (*r8_1)(rcx_3, 1, r8_1)

*(arg1 + 0x18)
uint64_t rax_8
rax_8.b = 1
*(arg1 + 0x24)
*(arg1 + 0x24) = mods.dp.d(sx.q((rdi + 1).d), *(arg1 + 0x18))
return rax_8
