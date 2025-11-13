// 函数: sub_140b79a00
// 地址: 0x140b79a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_1406daa50(arg1 + 0x118, arg2)

if (result != 0xffffffff)
    return result

int64_t rdi_1 = sx.q(*(arg1 + 0x120))
int32_t rax = (rdi_1 + 1).d
*(arg1 + 0x120) = rax

if (rax s> *(arg1 + 0x124))
    sub_1405a4f90(arg1 + 0x118)

return sub_140596d10((rdi_1 << 4) + *(arg1 + 0x118), arg2)
