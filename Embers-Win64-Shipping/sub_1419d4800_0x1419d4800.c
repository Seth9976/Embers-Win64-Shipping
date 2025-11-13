// 函数: sub_1419d4800
// 地址: 0x1419d4800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = arg1 & arg2
arg2.b = (r10 & 0xe00000) != 0
arg2.b &= (r10 & 0x1c0000) != 0
bool r8 = false

if ((zx.q(r10.d) & 0x3f000) != 0)
    r8 = arg2.b

if ((r10.b & 0x3f) != 0)
    return zx.q(r8) & (r10 & 0xfc0) != 0

return 0
