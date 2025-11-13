// 函数: sub_14131a3a0
// 地址: 0x14131a3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 4)
uint64_t rbx_2 = zx.q(r8 s/ 5)
uint64_t rdi_2 = zx.q(rbx_2.d s/ 3)
sub_1410b3fe0(arg2, u"DIM_LAYER_PROCESSING", zx.q(r8 - (rbx_2 * 5).d))
sub_1410b3fe0(arg2, u"DIM_POSTFILTER_METHOD", zx.q(rbx_2.d - (rdi_2 * 3).d))
int32_t rdi_3 = rdi_2.d & 0x80000001

if (rdi_3 s< 0)
    rdi_3 = ((rdi_3 - 1) | 0xfffffffe) + 1

int64_t r8_3
r8_3.b = rdi_3 == 1
sub_1405d3490(arg2 + 0x2a8, u"DIM_TILE_PERMUTATION", r8_3)
return sub_1410b3fe0(arg2, u"COC_TILE_SIZE", 8) __tailcall
