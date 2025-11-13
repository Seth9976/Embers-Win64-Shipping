// 函数: sub_1410f9710
// 地址: 0x1410f9710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1
sub_1405d3490(arg2 + 0x2a8, u"ALLOW_DEBUG_VIEW_MODES", zx.q(sub_1419c6730()))
int64_t rax_1 = sx.q(*arg1)
int32_t rbx

if (rax_1.d u> 0x1e)
    if ((*(&data_143f025fc + rax_1 * 0x14) & 1) == 0)
        rbx = 0
    else
        rbx = 1
        sub_1405d3490(arg2 + 0x2a8, u"SCENE_TEXTURES_DISABLED", 1)
else if (test_bit(0x6562c800, rax_1.d) || (*(&data_143f025fc + rax_1 * 0x14) & 1) != 0)
    rbx = 1
    sub_1405d3490(arg2 + 0x2a8, u"SCENE_TEXTURES_DISABLED", 1)
else
    rbx = 0

return sub_1405d3490(arg2 + 0x2a8, u"OUTPUT_MOBILE_COLOR_VALUE", zx.q(rbx)) __tailcall
