// 函数: sub_141132870
// 地址: 0x141132870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1410b3fe0(arg2, u"CULLED_TILE_DATA_STRIDE", zx.q(data_1439b5be0))
sub_1410b3fe0(arg2, u"CULLED_TILE_SIZEX", zx.q(data_1439b55c0))
sub_1410b3fe0(arg2, u"TRACE_DOWNSAMPLE_FACTOR", zx.q(data_1439b5c50))
sub_1410b3fe0(arg2, u"CONE_TRACE_OBJECTS_THREADGROUP_SIZE", zx.q(data_1439b5be4))
sub_1405d3490(arg2 + 0x2a8, u"SUPPORT_IRRADIANCE", 0)
sub_1405d3490(arg2 + 0x2a8, u"USE_GLOBAL_DISTANCE_FIELD", 1)
int64_t rbx = sx.q(*(arg2 + 0xb8))
int32_t rax = (rbx + 1).d
*(arg2 + 0xb8) = rax

if (rax s> *(arg2 + 0xbc))
    sub_1405a4cf0(arg2 + 0xb0)

int64_t result = *(arg2 + 0xb0)
*(result + (rbx << 2)) = 4
return result
