// 函数: sub_141f2d540
// 地址: 0x141f2d540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
void* rsi = nullptr
*(arg1 + 0x68) = 0
*(arg1 + 0x64) = 0xffffffff
*(arg1 + 0x6c) = 0xffffffff
*(arg1 + 0x70) = 0
*(arg1 + 0x74) = 0xffffffff
__builtin_memset(&arg1[0x78], 0, 0x14)
memset(&arg1[4], 0, 0x88)
*(arg1 + 0xc) = 0x3f800000

if (arg2 != 0)
    rsi = *(arg2 + 0xa0)

sub_140d3a3a0(&arg1[0x6c], rsi)
sub_140d3a3a0(&arg1[0x74], arg2)
*(arg1 + 0x60) = arg3
return arg1
