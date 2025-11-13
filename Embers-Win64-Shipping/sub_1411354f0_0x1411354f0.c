// 函数: sub_1411354f0
// 地址: 0x1411354f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1410b3fe0(arg2, u"COMBINE_CONES_SIZEX", 8)
sub_1410b3fe0(arg2, u"TRACE_DOWNSAMPLE_FACTOR", zx.q(data_1439b5c50))
int64_t rdi = sx.q(*(arg2 + 0xb8))
int32_t rax = (rdi + 1).d
*(arg2 + 0xb8) = rax

if (rax s> *(arg2 + 0xbc))
    sub_1405a4cf0(arg2 + 0xb0)

int64_t result = *(arg2 + 0xb0)
*(result + (rdi << 2)) = 4
return result
