// 函数: sub_140744b50
// 地址: 0x140744b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140744cf0(arg1, arg6)
*arg1 = &data_142d9fe98
__builtin_memset(&arg1[0x3c], 0, 0x18)
arg1[0x3f].d = 0x3f800000
__builtin_memset(&arg1[0x40], 0, 0xbc)
InitializeCriticalSection(&arg1[0x58])
SetCriticalSectionSpinCount(&arg1[0x58], 0xfa0)
float zmm6_1[0x4]
float zmm7_1[0x4]
zmm6_1, zmm7_1 = sub_140776e80(arg1, 2, 0x473b8000)
sub_140774f40(arg1, zmm7_1, zmm6_1, arg4)

if (arg5 f>= -200f)
    *(arg1 + 0x1ec) = __minss_xmmss_memss(arg5, 0x41200000)
else
    *(arg1 + 0x1ec) = 0xc3480000

return arg1
