// 函数: sub_140cb8c80
// 地址: 0x140cb8c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int32_t rdx = (rdi + 1).d
arg1[1].d = rdx

if (rdx s> *(arg1 + 0xc))
    sub_1405a4cf0(arg1)

*(*arg1 + (rdi << 2)) = 0xdeadbabe
return zx.q(rdi.d)
