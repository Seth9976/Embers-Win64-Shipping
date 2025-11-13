// 函数: sub_1410f97b0
// 地址: 0x1410f97b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1
sub_1405d3490(arg2 + 0x2a8, u"ALLOW_DEBUG_VIEW_MODES", zx.q(sub_1419c6730()))
int64_t rax_1 = sx.q(*arg1)

if (rax_1.d u> 0x1e)
    if ((*(&data_143f025fc + rax_1 * 0x14) & 1) != 0)
        sub_1405d3490(arg2 + 0x2a8, u"SCENE_TEXTURES_DISABLED", 1)
else if (test_bit(0x6562c800, rax_1.d) || (*(&data_143f025fc + rax_1 * 0x14) & 1) != 0)
    sub_1405d3490(arg2 + 0x2a8, u"SCENE_TEXTURES_DISABLED", 1)

return sub_1405d3490(arg2 + 0x2a8, u"OUTPUT_MOBILE_COLOR_VALUE", 0) __tailcall
