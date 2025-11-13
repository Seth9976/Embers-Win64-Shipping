// 函数: sub_14145a260
// 地址: 0x14145a260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 4)
int32_t rbp_2 = r8 s/ 7
uint64_t rsi_2 = zx.q(rbp_2 s/ 5)
int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(rsi_2.d)
int32_t temp12
int32_t temp13
temp12:temp13 = sx.q(divs.dp.d(temp6:temp7, 2))
int32_t rdx_5 = temp12 & 3
int32_t rax_9 = temp13 + rdx_5
sub_1410b3fe0(arg2, u"DIM_SIGNAL_PROCESSING", zx.q(r8 s% 7))
sub_1410b3fe0(arg2, u"DIM_STAGE", zx.q(rbp_2 - (rsi_2 * 5).d))
int64_t r8_3
r8_3.b = mods.dp.d(temp6:temp7, 2) == 1
sub_1405d3490(arg2 + 0x2a8, u"DIM_UPSCALE", r8_3)
sub_1410b3fe0(arg2, u"DIM_SIGNAL_BATCH_SIZE", zx.q((rax_9 & 3) - rdx_5 + 1))
int32_t r15_2 = rax_9 s>> 2 & 0x80000001

if (r15_2 s< 0)
    r15_2 = ((r15_2 - 1) | 0xfffffffe) + 1

int32_t rsi_3
rsi_3.b = r15_2 == 1
return sub_1405d3490(arg2 + 0x2a8, u"DIM_MULTI_SPP", zx.q(rsi_3)) __tailcall
