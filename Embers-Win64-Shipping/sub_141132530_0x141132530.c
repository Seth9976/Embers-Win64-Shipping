// 函数: sub_141132530
// 地址: 0x141132530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405d3490(arg2 + 0x2a8, u"CONE_TRACE_OBJECTS", 1)
sub_1410b3fe0(arg2, u"CONE_TRACE_GLOBAL_DISPATCH_SIZEX", 8)
sub_1410b3e70(arg2, u"OUTPUT_VISIBILITY_DIRECTLY", &(*U"RGBXYZF10|")[7])
sub_1410b3fe0(arg2, u"TRACE_DOWNSAMPLE_FACTOR", zx.q(data_1439b5c50))
sub_1410b3e70(arg2, u"USE_GLOBAL_DISTANCE_FIELD", &(*U"RGBXYZF10|")[7])
int64_t rdi = sx.q(*(arg2 + 0xb8))
int32_t rax = (rdi + 1).d
*(arg2 + 0xb8) = rax

if (rax s> *(arg2 + 0xbc))
    sub_1405a4cf0(arg2 + 0xb0)

int64_t result = *(arg2 + 0xb0)
*(result + (rdi << 2)) = 4
return result
