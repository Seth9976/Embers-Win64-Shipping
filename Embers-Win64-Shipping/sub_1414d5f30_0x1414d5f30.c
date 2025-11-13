// 函数: sub_1414d5f30
// 地址: 0x1414d5f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1410b3fe0(arg2, u"THREADGROUP_SIZEX", 0x10)
sub_1410b3fe0(arg2, u"THREADGROUP_SIZEY", 0x10)
sub_1410b3fe0(arg2, u"MAX_LIGHTS", 0x400)
sub_1405d3490(arg2 + 0x2a8, u"VISUALIZE_LIGHT_CULLING", 1)
int64_t rdi = sx.q(*(arg2 + 0xb8))
int32_t rax = (rdi + 1).d
*(arg2 + 0xb8) = rax

if (rax s> *(arg2 + 0xbc))
    sub_1405a4cf0(arg2 + 0xb0)

int64_t result = *(arg2 + 0xb0)
*(result + (rdi << 2)) = 4
return result
