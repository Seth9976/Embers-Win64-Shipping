// 函数: sub_14122d440
// 地址: 0x14122d440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405d3490(arg2 + 0x2a8, u"LPV_SECONDARY_OCCLUSION", 1)
sub_1405d3490(arg2 + 0x2a8, u"LPV_MULTIPLE_BOUNCES_ENABLED", 1)
sub_1405d3490(arg2 + 0x2a8, u"LPV_PROPAGATE_AO", 0)
int64_t rsi = sx.q(*(arg2 + 0xb8))
int32_t rax = (rsi + 1).d
*(arg2 + 0xb8) = rax

if (rax s> *(arg2 + 0xbc))
    sub_1405a4cf0(arg2 + 0xb0)

*(*(arg2 + 0xb0) + (rsi << 2)) = 4
sub_1405d3490(arg2 + 0x2a8, u"LPV_MULTIPLE_BOUNCES", 1)
return sub_1405d3490(arg2 + 0x2a8, u"LPV_GV_SH_ORDER", 1) __tailcall
