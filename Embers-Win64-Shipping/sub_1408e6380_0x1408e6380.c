// 函数: sub_1408e6380
// 地址: 0x1408e6380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x444) = 0
arg1[0x8e].d = 0

if (*(arg1 + 0x474) != 0)
    sub_1408e7380(&arg1[0x8d], 0)

sub_1408e7f80(arg1, arg2)
void*** rax = sub_1408e4100()
void** r8 = *rax
r8[0x17](rax, arg1, r8)
return sub_141f20900(arg1) __tailcall
