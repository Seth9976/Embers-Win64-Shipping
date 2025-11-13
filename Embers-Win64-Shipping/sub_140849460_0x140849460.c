// 函数: sub_140849460
// 地址: 0x140849460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140862460(arg1)
*(arg2 + 0x6b8) |= 4
int64_t rdi = sx.q(*(arg1 + 0xce8))
int32_t rax = (rdi + 1).d
*(arg1 + 0xce8) = rax

if (rax s> *(arg1 + 0xcec))
    sub_1405a4d70(arg1 + 0xce0)

*(*(arg1 + 0xce0) + (rdi << 3)) = arg2
*(arg2 + 0x10) = rdi.d
sub_140d3c6e0(arg1 + 0x20)
void* result = *(arg1 + 0x28)

if (result != 0)
    *(result + 0x60) += 1

return result
