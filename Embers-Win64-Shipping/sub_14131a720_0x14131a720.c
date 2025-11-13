// 函数: sub_14131a720
// 地址: 0x14131a720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 4) & 0x80000001

if (rax_1 s< 0)
    rax_1 = ((rax_1 - 1) | 0xfffffffe) + 1

sub_1410b3fe0(arg2, u"DOWNSAMPLE_QUALITY", zx.q(rax_1.b))
sub_1410b3fe0(arg2, u"THREADGROUP_SIZEX", 8)
return sub_1410b3fe0(arg2, u"THREADGROUP_SIZEY", 8) __tailcall
