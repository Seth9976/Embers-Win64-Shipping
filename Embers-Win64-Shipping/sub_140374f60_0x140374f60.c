// 函数: sub_140374f60
// 地址: 0x140374f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x1714)
char r8

if (result == 0x10)
    r8 = *(arg1 + 0x1710)
    int64_t r9_1 = *(arg1 + 0x10)
    uint64_t rax = zx.q(*(arg1 + 0x28))
    *(arg1 + 0x28) = (rax + 1).d
    *(r9_1 + rax) = r8
    r8 = *(arg1 + 0x1711)
    int64_t r9_2 = *(arg1 + 0x10)
    uint64_t rax_1 = zx.q(*(arg1 + 0x28))
    *(arg1 + 0x28) = (rax_1 + 1).d
    *(r9_2 + rax_1) = r8
    *(arg1 + 0x1710) = 0
    result = 0
    *(arg1 + 0x1714) = result
else if (result s>= 8)
    r8 = *(arg1 + 0x1710)
    int64_t r9_3 = *(arg1 + 0x10)
    uint64_t rax_2 = zx.q(*(arg1 + 0x28))
    *(arg1 + 0x28) = (rax_2 + 1).d
    *(r9_3 + rax_2) = r8
    *(arg1 + 0x1710) = zx.w(*(arg1 + 0x1711))
    result = *(arg1 + 0x1714) - 8
    *(arg1 + 0x1714) = result
return result
