// 函数: sub_141fa3fb0
// 地址: 0x141fa3fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1422597a0(arg1)
*arg1 = &data_14328b4d0
arg1[0x44] = &data_14328c2b0
arg1[0xbe].d = 0xffffffff
*(arg1 + 0x5f4) = 0
arg1[0xbf].d = 0xffffffff
*(arg1 + 0x5fc) = 0
arg1[0xc0].d = 0xffffffff
__builtin_memset(arg1 + 0x604, 0, 0x14)
memset(&arg1[0xb2], 0, 0x88)
arg1[0xb3].d = 0x3f800000
arg1[0xcc] = 0
arg1[0xcd] = 0
arg1[0xae].d &= 0xfffffffd
arg1[0xc3] = 0
arg1[0xc4] = 0
arg1[0xc5] = 0x3f800000
arg1[0xc6] = 0
__builtin_memset(&arg1[0xaf], 0, 0x18)
sub_141dd84c0(arg1, 0)
arg1[0xae].d &= 0xfffffff3
*(arg1 + 0x32) |= 1
arg1[0x9b].d |= 4
int32_t rcx_4 = (arg1[0xae].d & 0xffffff8f) | 0x80
*(arg1 + 0x554) = 1
arg1[0xc8] = data_143dbb1f8.q
arg1[0xc9].d = data_143dbb200
*(arg1 + 0x64c) = data_143dbb1f8.q
*(arg1 + 0x654) = data_143dbb200
arg1[0xcb] = 0x41f00000
arg1[0xae].d = rcx_4
return arg1
