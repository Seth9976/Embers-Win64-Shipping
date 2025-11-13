// 函数: sub_14131a460
// 地址: 0x14131a460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 4)
uint64_t rdi_2 = zx.q(r8 s/ 5)
uint64_t rbx_2 = zx.q(rdi_2.d s/ 3)
sub_1410b3fe0(arg2, u"DIM_LAYER_PROCESSING", zx.q(r8 - (rdi_2 * 5).d))
sub_1410b3fe0(arg2, u"DIM_BOKEH_SIMULATION", zx.q(rdi_2.d - (rbx_2 * 3).d))
sub_1410b3fe0(arg2, u"DIM_QUALITY", zx.q(rbx_2.d s% 3))
return sub_1410b3fe0(arg2, u"COC_TILE_SIZE", 8) __tailcall
