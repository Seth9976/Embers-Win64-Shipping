// 函数: sub_142ba9b00
// 地址: 0x142ba9b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rcx = zx.q(*arg2)
uint32_t rax = zx.d(*(arg1 + 0xc4))

if (rcx.d u>= rax)
    if (*(arg1 + 0x315) != 0)
        *(arg1 + 0x18) = 0x86
    
    *arg2 = 0
    return rax

if ((*(arg1 + 0x218) & 1) == 0)
    int64_t rax_3 = *(arg1 + 0xd0)
    int32_t rax_4 =
        (*(arg1 + 0x328))(arg1, zx.q(*(rax_3 + (rcx << 3))), zx.q(*(rax_3 + (rcx << 3) + 4)))
    *arg2 = rax_4
    return rax_4

int64_t rax_1 = *(arg1 + 0xc8)
int32_t rax_2 =
    (*(arg1 + 0x330))(arg1, zx.q(*(rax_1 + (rcx << 3))), zx.q(*(rax_1 + (rcx << 3) + 4)))
*arg2 = rax_2
return rax_2
