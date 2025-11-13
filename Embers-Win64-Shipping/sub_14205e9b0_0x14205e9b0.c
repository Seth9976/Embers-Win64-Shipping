// 函数: sub_14205e9b0
// 地址: 0x14205e9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142094f30(arg1, arg2)
void* rax = arg1[0xa8]

if (rax != 0)
    *(arg2 + 8) += sx.q(*(rax + 0xc)) << 6

int64_t rdx = *(arg2 + 8) + (sx.q(*(arg1 + 0x55c)) << 2)
*(arg2 + 8) = rdx
int64_t result = sx.q(*(arg1 + 0x5ac))
*(arg2 + 8) = result * 0x1c + rdx
return result
