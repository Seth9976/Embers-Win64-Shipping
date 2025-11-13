// 函数: sub_140f66c00
// 地址: 0x140f66c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140dddeb0(arg1)
arg1[0x73].d = arg2
int64_t rbx_1 = 0
*arg1 = &data_142ee9120
arg1[0x72] = &data_142ee93c8
__builtin_memset(&arg1[0x74], 0, 0x2c)
arg1[0x7b].b = 0
arg1[0x7c].b = 0
__builtin_memset(&arg1[0x7d], 0, 0x11)
*(arg1 + 0x3fc) = 0
arg1[0x81].d = 0
__builtin_memset(&arg1[0x82], 0, 0x19)
arg1[0x86].b = 0
sub_140d921c0(arg1 + 0x434)
arg1[0x8e] = 0
arg1[0x8f].d = 0
arg1[0x90].d = 3
*(arg1 + 0x484) = 1
arg1[0x91] = 0
arg1[0x92].d = 0
arg1[0x93] = 0
arg1[0x94] = 0
sub_140e96190(&arg1[0x95], 0x3fb99999a0000000)
arg1[0x99] = 0
arg1[0x9a].b = 0
int64_t rsi = data_143e24388

if (data_143de5480 != 0)
    rbx_1.b = GetCurrentThreadId() != data_143de5470

*(arg1 + 0x4d4) = *(rsi + (rbx_1 << 2))
arg1[0x9b].d = 1
*(arg1 + 0x4dc) = 0
Concurrency::details::_CriticalNonReentrantLock::_CriticalNonReentrantLock(&arg1[0x9c])
*(arg1 + 0x4e4) = 0
*(arg1 + 0x4e6) = 0
void arg_8

if (&arg_8 != &arg1[0x7a])
    arg1[0x7a] = 0x3fd0000000000000
    arg1[0x7b].b = 1

return arg1
