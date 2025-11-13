// 函数: sub_1420d88c0
// 地址: 0x1420d88c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14327fc00
*(sx.q(*(arg1[1] + 4)) + arg1 + 8) = &data_14327fc50
*(arg1 + 0x1c) = arg5
arg1[4].d = arg6
arg1[2].d = arg2
*(arg1 + 0x14) = arg3
arg1[3].d = arg4
arg1[5] = 0
arg1[6] = 0
int32_t rax_3

if (arg7 != 0)
    rax_3 = 1

if (arg7 == 0 || *(arg10 + 0x20b) s>= 0)
    rax_3 = 0

arg1[7].d &= 0xfffffffe
arg1[7].d = ((arg1[7].d | rax_3) & 0xfffffffd) | (zx.d(arg8) * 2)
arg1[8] = 0
int64_t rsi = sx.q(arg9[1].d)
int64_t r14 = *arg9
arg1[9].d = rsi.d

if (rsi.d != 0)
    sub_1405c4a00(&arg1[8], rsi.d, 0)
    memcpy(arg1[8], r14, (rsi << 3).d)
else
    *(arg1 + 0x4c) = 0

arg1[0xa] = arg10
*(arg1 + 0x58) = *arg11
arg1[0xd] = arg11[1].q
arg1[0xe].d = *(arg11 + 0x18)
sub_140b214c0(arg1 + 0x74)
*(arg1 + 0x84) = *arg12
__builtin_memset(&arg1[0x13], 0, 0x1c)
return arg1
