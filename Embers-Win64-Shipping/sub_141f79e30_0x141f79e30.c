// 函数: sub_141f79e30
// 地址: 0x141f79e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg2 + 0x28)
sub_140bd5b60(arg1, *(rdx + 0x68), sx.q((*(rdx + 0xa0) << 3) - *(rdx + 0x130) - 0x235))
arg1[0x19] = arg2
arg1[0x18] = 0
*arg1 = &data_143286b38
arg1[0x1a] = 0
arg1[0x1b].d = *(arg2 + 0x34)
*(arg1 + 0xdc) = *(arg2 + 0x40)
int64_t rax_6 = *(arg2 + 0x44)
*(arg1 + 0xf1) &= 0xf8
arg1[0x1c] = rax_6
arg1[0x1d] = 0
*(arg1 + 0xf2) = 0
arg1[0x1e].b = (arg3 & 1) << 2
__builtin_memset(&arg1[0x1f], 0, 0x20)
void* rdx_2 = arg1[0x19]
uint32_t rax_9 = zx.d(arg1[0x1e].b) u>> 2
*(arg1 + 0x29) ^= (*(*(rdx_2 + 0x28) + 0x158) << 5 ^ *(arg1 + 0x29)) & 0x20

if (*(rdx_2 + 0x50) s>= (rax_9 & 1) + 0xff)
    sub_140b55370(arg1)

return arg1
