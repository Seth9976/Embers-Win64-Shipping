// 函数: sub_140f20a30
// 地址: 0x140f20a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140dde0c0(arg1)
*arg1 = &data_142ee4fc8
arg1[0x56] = arg1
__builtin_memset(&arg1[0x57], 0, 0x11)
arg1[0x55] = &data_142ec8d60
__builtin_memset(&arg1[0x5a], 0, 0x20)
__builtin_memset(&arg1[0x5f], 0, 0x20)
*(arg1 + 0x2e) &= 0xfb

if (sub_140db3510(&arg1[3]) != 0)
    sub_140dc03a0(&arg1[3], *(arg1 + 0x2e))

return arg1
