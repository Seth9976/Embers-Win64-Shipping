// 函数: sub_14135db20
// 地址: 0x14135db20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405d3490(arg2 + 0x2a8, u"CLEAR_UAV_UINT_COMPUTE_SHADER", 1)
int64_t rdi = sx.q(*(arg2 + 0xb8))
int32_t rax = (rdi + 1).d
*(arg2 + 0xb8) = rax

if (rax s> *(arg2 + 0xbc))
    sub_1405a4cf0(arg2 + 0xb0)

int64_t result = *(arg2 + 0xb0)
*(result + (rdi << 2)) = 4
return result
