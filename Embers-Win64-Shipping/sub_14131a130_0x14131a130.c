// 函数: sub_14131a130
// 地址: 0x14131a130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg1[1]
uint64_t r15_2 = zx.q(r8 s/ 5)
uint64_t r14_2 = zx.q(r15_2.d s/ 3)
uint64_t rsi_2 = zx.q(r14_2.d s/ 3)
int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(rsi_2.d)
int32_t rdx_4 = temp8 & 3
int32_t rax_5 = temp9 + rdx_4
int32_t temp10
int32_t temp11
temp10:temp11 = sx.q(rax_5 s>> 2)
sub_1410b3fe0(arg2, u"DIM_LAYER_PROCESSING", zx.q(r8 - (r15_2 * 5).d))
sub_1410b3fe0(arg2, u"DIM_GATHER_RING_COUNT", zx.q(r15_2.d - (r14_2 * 3).d + 3))
sub_1410b3fe0(arg2, u"DIM_BOKEH_SIMULATION", zx.q(r14_2.d - (rsi_2 * 3).d))
sub_1410b3fe0(arg2, u"DIM_GATHER_QUALITY", zx.q((rax_5 & 3) - rdx_4))
int64_t r8_5
r8_5.b = mods.dp.d(temp10:temp11, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"DIM_CLAMP_INPUT_UV", r8_5)
int32_t rbp_1 = divs.dp.d(temp10:temp11, 2) & 0x80000001

if (rbp_1 s< 0)
    rbp_1 = ((rbp_1 - 1) | 0xfffffffe) + 1

int32_t rbx_1
rbx_1.b = rbp_1 == 1
sub_1405d3490(arg2 + 0x2a8, u"DIM_RGB_COLOR_BUFFER", zx.q(rbx_1))

if (*arg1 == 0)
    int64_t rdi_1 = sx.q(*(arg2 + 0xb8))
    int32_t rax_11 = (rdi_1 + 1).d
    *(arg2 + 0xb8) = rax_11
    
    if (rax_11 s> *(arg2 + 0xbc))
        sub_1405a4cf0(arg2 + 0xb0)
    
    *(*(arg2 + 0xb0) + (rdi_1 << 2)) = 4

return sub_1410b3fe0(arg2, u"COC_TILE_SIZE", 8) __tailcall
