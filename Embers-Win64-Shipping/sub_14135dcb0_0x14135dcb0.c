// 函数: sub_14135dcb0
// 地址: 0x14135dcb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405d3490(arg2 + 0x2a8, u"THREADGROUP_SIZEX", 8)
sub_1405d3490(arg2 + 0x2a8, u"THREADGROUP_SIZEY", 8)
sub_1405d3490(arg2 + 0x2a8, u"LOOP_SIZEX", 2)
sub_1405d3490(arg2 + 0x2a8, u"LOOP_SIZEY", 2)
sub_1405d3490(arg2 + 0x2a8, u"AVERAGE_LUMINANCE_COMPUTE_SHADER", 1)
int64_t rbx = sx.q(*(arg2 + 0xb8))
int32_t rax = (rbx + 1).d
*(arg2 + 0xb8) = rax

if (rax s> *(arg2 + 0xbc))
    sub_1405a4cf0(arg2 + 0xb0)

int64_t result = *(arg2 + 0xb0)
*(result + (rbx << 2)) = 4
return result
