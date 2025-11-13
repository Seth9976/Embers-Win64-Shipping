// 函数: sub_142a55cf0
// 地址: 0x142a55cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg1[2].d)

if (r8.d s>= *(arg1 + 0x14))
    return 0xffffffff

arg1[2].d = (r8 + 1).d
return zx.q(*(*arg1 + (r8 << 1)))
