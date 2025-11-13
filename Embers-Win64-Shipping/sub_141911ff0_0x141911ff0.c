// 函数: sub_141911ff0
// 地址: 0x141911ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_143effcd8(0x8f37, zx.q(*(arg3 + 0x20)))
uint64_t rdi = zx.q(arg5)

if (*(arg3 + 0x24) u< rdi.d)
    data_143effd00(0x8f37, zx.q(rdi.d), 0, 0x88e1)
    *(arg3 + 0x24) = rdi.d

data_143effcd8(0x8f36, zx.q(*(arg2 + 0x28)))
data_143f001b0(0x8f36, 0x8f37, zx.q(arg4), 0, rdi)
data_143effcd8(0x8f36, 0)
jump(data_143effcd8)
