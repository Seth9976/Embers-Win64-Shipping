// 函数: sub_140b4c310
// 地址: 0x140b4c310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
*arg1 = &data_142e78988
__builtin_memset(&arg1[2], 0, 0x18)
arg1[9].d = 0
*(arg1 + 0x4c) = 0
arg1[0xa].d = 0
arg1[0xc] = 0
arg1[1] = &arg1[2]
arg1[0x10] = 0
sub_140b526e0(arg1)
*arg1 = &data_142e793e8
int64_t rsi = data_143de8540

if (data_143de5480 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

arg1[7] = sx.q(*(rsi + (rbx << 2)))
return arg1
