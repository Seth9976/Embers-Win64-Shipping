// 函数: sub_1410a1af0
// 地址: 0x1410a1af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1410b3e70(arg2, u"TRANSLUCENT_SELF_SHADOWING", &(*U"RGBXYZF10|")[7])
sub_1410b3fe0(arg2, u"LOCAL_LIGHT_DATA_STRIDE", 6)
sub_1410b3fe0(arg2, u"NUM_CULLED_LIGHTS_GRID_STRIDE", zx.q(data_1439b6304))
sub_1410b3fe0(arg2, u"NUM_CULLED_GRID_PRIMITIVE_TYPES", zx.q(data_1439b6308))
int64_t rax = sx.q(*arg1)
int64_t r8_2

if (rax.d u> 0x1f)
    if (((*(&data_143f025fc + rax * 0x14) u>> 1).b & 1) != 0)
        r8_2 = 0
    else
        r8_2 = 1
else if (test_bit(0x88001000, rax.d) || ((*(&data_143f025fc + rax * 0x14) u>> 1).b & 1) != 0)
    r8_2 = 0
else
    r8_2 = 1

return sub_1410b3fe0(arg2, u"BASEPASS_ATMOSPHERIC_FOG", r8_2) __tailcall
