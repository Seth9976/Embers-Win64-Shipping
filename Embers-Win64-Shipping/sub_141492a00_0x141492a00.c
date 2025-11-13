// 函数: sub_141492a00
// 地址: 0x141492a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405d3490(arg2 + 0x2a8, u"PERSPECTIVE_CORRECT_DEPTH", 0)
sub_1405d3490(arg2 + 0x2a8, u"ONEPASS_POINTLIGHT_SHADOW", 1)
sub_1405d3490(arg2 + 0x2a8, u"REFLECTIVE_SHADOW_MAP", 0)
sub_1405d3490(arg2 + 0x2a8, u"POSITION_ONLY", 1)
sub_1405d3490(arg2 + 0x2a8, u"IS_FOR_GEOMETRY_SHADER", 1)
int64_t rbx = sx.q(*(arg2 + 0xb8))
int32_t rax = (rbx + 1).d
*(arg2 + 0xb8) = rax

if (rax s> *(arg2 + 0xbc))
    sub_1405a4cf0(arg2 + 0xb0)

int64_t result = *(arg2 + 0xb0)
*(result + (rbx << 2)) = 0xe
return result
