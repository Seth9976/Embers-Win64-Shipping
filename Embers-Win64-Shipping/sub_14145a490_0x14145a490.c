// 函数: sub_14145a490
// 地址: 0x14145a490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 4)
uint64_t rbx_2 = zx.q(r8 s/ 5)
sub_1410b3fe0(arg2, u"SSR_QUALITY", zx.q(r8 - (rbx_2 * 5).d))
int32_t rbx_3 = rbx_2.d & 0x80000001

if (rbx_3 s< 0)
    rbx_3 = ((rbx_3 - 1) | 0xfffffffe) + 1

int64_t r8_2
r8_2.b = rbx_3 == 1
return sub_1405d3490(arg2 + 0x2a8, u"SSR_OUTPUT_FOR_DENOISER", r8_2) __tailcall
