// 函数: sub_142afd140
// 地址: 0x142afd140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0x3d)
    return zx.q(arg2)

if (arg2 s< 0x3e)
    int64_t rdx = sx.q(arg1[1].d)
    arg1[1].d = (rdx + 1).d
    return zx.q(*(*arg1 + (rdx << 1))) & 0x7fff

int64_t r9 = sx.q(arg1[1].d)
int64_t r8 = *arg1
arg1[1].d = (r9 + 2).d
return zx.q(((zx.d(*(r8 + (r9 << 1))) & 0x7fff) | (arg2 & 1) << 0xf) << 0xf)
    | (zx.q(*(r8 + (sx.q((r9 + 1).d) << 1))) & 0x7fff)
