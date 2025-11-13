// 函数: sub_14145a500
// 地址: 0x14145a500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 4) & 0x80000001

if (rax_1 s< 0)
    rax_1 = ((rax_1 - 1) | 0xfffffffe) + 1

int64_t r8
r8.b = rax_1 == 1
sub_1405d3490(arg2 + 0x2a8, u"SSR_OUTPUT_FOR_DENOISER", r8)
return sub_1405d3490(arg2 + 0x2a8, u"SSR_QUALITY", 0) __tailcall
