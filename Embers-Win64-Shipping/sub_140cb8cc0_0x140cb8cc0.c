// 函数: sub_140cb8cc0
// 地址: 0x140cb8cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int32_t r8 = (rdi + 1).d
arg1[1].d = r8

if (r8 s> *(arg1 + 0xc))
    sub_1405a4cf0(arg1)

*(*arg1 + (rdi << 2)) = arg2
return zx.q(rdi.d)
