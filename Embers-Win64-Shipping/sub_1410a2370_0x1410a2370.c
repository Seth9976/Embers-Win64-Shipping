// 函数: sub_1410a2370
// 地址: 0x1410a2370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1410b3fe0(arg2, u"THREADGROUP_SIZEX", zx.q(data_1439b520c))
sub_1410b3fe0(arg2, u"THREADGROUP_SIZEY", zx.q(data_1439b520c))
sub_1405d3490(arg2 + 0x2a8, u"POINT_LIGHT", 0)
sub_1405d3490(arg2 + 0x2a8, u"LIGHT_SOURCE_MODE", 1)
sub_1405d3490(arg2 + 0x2a8, u"APPLY_TO_BENT_NORMAL", 0)
int64_t rbx = sx.q(*(arg2 + 0xb8))
int32_t rax = (rbx + 1).d
*(arg2 + 0xb8) = rax

if (rax s> *(arg2 + 0xbc))
    sub_1405a4cf0(arg2 + 0xb0)

int64_t result = *(arg2 + 0xb0)
*(result + (rbx << 2)) = 4
return result
